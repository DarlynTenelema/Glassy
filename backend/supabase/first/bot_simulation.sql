-- =========================================================================
-- SISTEMA INTELIGENTE DE BOTS Y SIMULACIÓN DE RANKINGS (GLASSY)
-- Ejecuta este script completo en el SQL Editor de tu Dashboard de Supabase.
-- =========================================================================

-- 1. Asegurar que public.users permita IDs sintéticos para los bots
-- (Quitamos la restricción estricta de auth.users solo para permitir cuentas del sistema)
ALTER TABLE public.users DROP CONSTRAINT IF EXISTS users_id_fkey;

-- 2. Asegurar columnas de avatar_id y arquetipo
ALTER TABLE public.users ADD COLUMN IF NOT EXISTS avatar_id VARCHAR(100) DEFAULT 'personaje_2.jpg';
ALTER TABLE public.users ADD COLUMN IF NOT EXISTS bot_archetype VARCHAR(20) DEFAULT NULL;

-- 3. Generación Inteligente de 200 Bots con coherencia de género y nombres creíbles
DO $$
DECLARE
    male_names TEXT[] := ARRAY[
        'Mateo', 'Lucas', 'Diego', 'Daniel', 'Leo', 'Santi', 'Bruno', 'Julian', 'Gael', 'Max', 
        'Oliver', 'Liam', 'Noah', 'Ethan', 'Alex', 'Carlos', 'Sebas', 'David', 'Gabriel', 'Adrian', 
        'Marcos', 'Kevin', 'Alan', 'Nico', 'Tomas', 'Alvaro', 'Enzo', 'Joaquin', 'Felipe', 'Martin'
    ];
    female_names TEXT[] := ARRAY[
        'Sofia', 'Camila', 'Valeria', 'Emma', 'Mia', 'Clara', 'Elena', 'Sara', 'Luna', 'Zoe', 
        'Chloe', 'Aria', 'Maya', 'Lucia', 'Martina', 'Paula', 'Daniela', 'Isabella', 'Victoria', 'Renata', 
        'Natalia', 'Andrea', 'Abril', 'Julieta', 'Emilia', 'Catalina', 'Valentina', 'Alma', 'Danna', 'Flor'
    ];
    gamer_tags TEXT[] := ARRAY[
        'Shadow', 'Viper', 'Nova', 'Ghost', 'Zenith', 'Echo', 'Pixel', 'Blaze', 'Frost', 'Kira', 
        'Nexus', 'Phantom', 'Rogue', 'Apex', 'Onyx', 'Krypton', 'Vortex', 'Aero', 'Cosmo', 'Titan', 
        'Striker', 'Cipher', 'Drift', 'Specter', 'Pulse', 'Zero', 'Hydra', 'Quantum', 'Glitch', 'Blaster'
    ];
    suffixes TEXT[] := ARRAY[
        '', '', '', '_99', '_pro', 'Gamer', '07', 'X', '23', '_gt', '97', '_latam', '777', '_yt', 'Play', 'ツ'
    ];
    
    male_avatars TEXT[] := ARRAY[
        'personaje_2.jpg', 'personaje_3.jpg', 'personaje_7.jpg', 
        'personaje_8.jpg', 'personaje_9.jpg', 'personaje_13.jpg', 
        'personaje_14.jpg', 'personaje_15.jpg', 'personaje_19.jpg'
    ];
    female_avatars TEXT[] := ARRAY[
        'personaje_4.jpg', 'personaje_5.jpg', 'personaje_6.jpg', 
        'personaje_10.jpg', 'personaje_11.jpg', 'personaje_12.jpg', 
        'personaje_16.jpg', 'personaje_17.jpg', 'personaje_18.jpg'
    ];
    all_avatars TEXT[] := ARRAY[
        'personaje_2.jpg', 'personaje_3.jpg', 'personaje_4.jpg', 'personaje_5.jpg', 
        'personaje_6.jpg', 'personaje_7.jpg', 'personaje_8.jpg', 'personaje_9.jpg', 
        'personaje_10.jpg', 'personaje_11.jpg', 'personaje_12.jpg', 'personaje_13.jpg', 
        'personaje_14.jpg', 'personaje_15.jpg', 'personaje_16.jpg', 'personaje_17.jpg', 
        'personaje_18.jpg', 'personaje_19.jpg'
    ];

    i INT;
    name_category INT; -- 1: male, 2: female, 3: gamertag
    chosen_name TEXT;
    avatar_file TEXT;
    archetype TEXT;
    init_score INT;
    bot_uid UUID;
BEGIN
    -- Si ya existen 200 bots, no duplicar
    IF (SELECT COUNT(*) FROM public.users WHERE bot_archetype IS NOT NULL) >= 200 THEN
        RAISE NOTICE 'Los 200 bots ya están generados en la base de datos.';
        RETURN;
    END IF;

    FOR i IN 1..200 LOOP
        bot_uid := gen_random_uuid();
        name_category := 1 + floor(random() * 3)::int;

        IF name_category = 1 THEN
            chosen_name := male_names[1 + floor(random() * array_length(male_names, 1))::int] ||
                           suffixes[1 + floor(random() * array_length(suffixes, 1))::int];
            avatar_file := male_avatars[1 + floor(random() * array_length(male_avatars, 1))::int];
        ELSIF name_category = 2 THEN
            chosen_name := female_names[1 + floor(random() * array_length(female_names, 1))::int] ||
                           suffixes[1 + floor(random() * array_length(suffixes, 1))::int];
            avatar_file := female_avatars[1 + floor(random() * array_length(female_avatars, 1))::int];
        ELSE
            chosen_name := gamer_tags[1 + floor(random() * array_length(gamer_tags, 1))::int] ||
                           suffixes[1 + floor(random() * array_length(suffixes, 1))::int];
            avatar_file := all_avatars[1 + floor(random() * array_length(all_avatars, 1))::int];
        END IF;

        -- Distribución por Arquetipos (Ley de Potencias / Curva realista)
        IF i <= 10 THEN
            archetype := 'hardcore';       -- Top 1 - 10 (Pelean la cima)
            init_score := 85000 + (random() * 55000)::int + (floor(random() * 19) * 5)::int;
        ELSIF i <= 50 THEN
            archetype := 'competitive';    -- Top 11 - 50 (Jugadores muy activos)
            init_score := 40000 + (random() * 44000)::int + (floor(random() * 19) * 5)::int;
        ELSIF i <= 140 THEN
            archetype := 'casual';         -- Top 51 - 140 (La gran masa de jugadores)
            init_score := 12000 + (random() * 27000)::int + (floor(random() * 19) * 5)::int;
        ELSIF i <= 180 THEN
            archetype := 'weekend';        -- Top 141 - 180 (Jugadores ocasionales)
            init_score := 4000 + (random() * 7500)::int + (floor(random() * 19) * 5)::int;
        ELSE
            archetype := 'inactive';       -- Top 181 - 200 (Jugadores casi inactivos / fondo de ranking)
            init_score := 1200 + (random() * 2500)::int + (floor(random() * 19) * 5)::int;
        END IF;

        -- Insertar perfil en public.users
        INSERT INTO public.users (
            id, email, name, avatar_id, total_score, bot_archetype, crystals, created_at
        ) VALUES (
            bot_uid,
            'bot_' || i || '@glassy.system',
            chosen_name,
            avatar_file,
            init_score * (2 + floor(random() * 3)::int), -- total_score acumulado
            archetype,
            100,
            NOW() - ((random() * 25 + 5) || ' days')::interval
        ) ON CONFLICT DO NOTHING;

        -- Insertar récord en leaderboards (High Score / Ranking Semanal)
        INSERT INTO public.leaderboards (user_id, score, achieved_at)
        VALUES (
            bot_uid,
            init_score,
            NOW() - ((random() * 6) || ' days')::interval
        ) ON CONFLICT (user_id) DO NOTHING;
    END LOOP;

    RAISE NOTICE '¡200 bots generados exitosamente con perfiles coherentes!';
END $$;

-- 4. Procedimiento de Simulación Inteligente Diaria
CREATE OR REPLACE FUNCTION public.simulate_daily_bot_activity()
RETURNS void AS $$
DECLARE
    bot RECORD;
    prob_play FLOAT;
    min_gain INT;
    max_gain INT;
    did_play BOOLEAN;
    score_gain INT;
    is_weekend BOOLEAN;
    weekend_boost FLOAT := 1.0;
BEGIN
    -- Detectar fin de semana (0 = domingo, 6 = sábado)
    is_weekend := EXTRACT(DOW FROM CURRENT_DATE) IN (0, 6);
    IF is_weekend THEN
        weekend_boost := 1.35;
    END IF;

    FOR bot IN 
        SELECT u.id, u.bot_archetype, l.score, u.total_score
        FROM public.users u
        JOIN public.leaderboards l ON l.user_id = u.id
        WHERE u.bot_archetype IS NOT NULL
    LOOP
        -- Parámetros específicos por arquetipo
        CASE bot.bot_archetype
            WHEN 'hardcore' THEN
                prob_play := 0.90;
                min_gain  := 2800;
                max_gain  := 7500;
            WHEN 'competitive' THEN
                prob_play := 0.70;
                min_gain  := 1200;
                max_gain  := 4200;
            WHEN 'casual' THEN
                prob_play := 0.45;
                min_gain  := 400;
                max_gain  := 1900;
            WHEN 'weekend' THEN
                prob_play := CASE WHEN is_weekend THEN 0.85 ELSE 0.20 END;
                min_gain  := 300;
                max_gain  := 1500;
            ELSE -- 'inactive'
                prob_play := 0.05;
                min_gain  := 100;
                max_gain  := 500;
        END CASE;

        -- Comprobar si jugó hoy
        did_play := (random() <= prob_play);

        IF did_play THEN
            -- Ganancia realista no redondeada
            score_gain := ( (min_gain + (random() * (max_gain - min_gain))) * weekend_boost )::int;
            score_gain := score_gain + (floor(random() * 19) * 5)::int;

            -- 1. Actualizar total_score (suma siempre que juega)
            UPDATE public.users
            SET total_score = total_score + score_gain
            WHERE id = bot.id;

            -- 2. Actualizar récord personal (leaderboards) si supera su mejor partida (~25% de probabilidad)
            IF random() < 0.25 THEN
                UPDATE public.leaderboards
                SET score = score + (score_gain * 0.35)::int + (floor(random() * 15) * 5)::int,
                    achieved_at = NOW()
                WHERE user_id = bot.id;
            END IF;
        END IF;
    END LOOP;
END;
$$ LANGUAGE plpgsql SECURITY DEFINER;

-- Corre este script en el SQL Editor de tu proyecto en Supabase
-- Esto desbloqueará todas las skins y dará 999999 cristales a la cuenta especificada.

DO $$
DECLARE
    target_user_id UUID;
    skin TEXT;
    skins TEXT[] := ARRAY[
        'vida_marina',
        'Dinosaurios',
        'Dulces_de_Halloween',
        'Caldero_de_Bruja',
        'Cementerio_Encantado',
        'Cultivo_de_Calabazas',
        'Ajedrez_Magico',
        'Alquimia_Antigua',
        'Flores_Magicas',
        'Frutas_Jugosas',
        'Hongos_Brillantes',
        'Monstruos_de_Bolsillo',
        'Mundo_Dulce',
        'Planetas',
        'Sushi_Japones'
    ];
BEGIN
    -- Obtener el ID del usuario
    SELECT id INTO target_user_id FROM auth.users WHERE email = '0805409802d@gmail.com';
    
    IF target_user_id IS NOT NULL THEN
        -- Desbloquear skins
        FOREACH skin IN ARRAY skins
        LOOP
            INSERT INTO public.user_skins (user_id, skin_id) 
            VALUES (target_user_id, skin) 
            ON CONFLICT DO NOTHING;
        END LOOP;

        -- Dar cristales infinitos para pruebas
        UPDATE public.users 
        SET crystals = 999999 
        WHERE id = target_user_id;

        RAISE NOTICE 'Skins y cristales actualizados para el usuario %', target_user_id;
    ELSE
        RAISE NOTICE 'Usuario no encontrado';
    END IF;
END $$;

-- ============================================================
-- PARCHE DE SEGURIDAD PARA FUNCIONES
-- Soluciona los warnings: 
-- "FunctionSearchPath Mutable" y "PublicCanExecuteSECURITYDEFINERFunction"
-- ============================================================

-- 1. Redefinir la función con el search_path explícito
CREATE OR REPLACE FUNCTION public.handle_new_user() 
RETURNS trigger AS $$
BEGIN
  INSERT INTO public.users (id, email, name, avatar_url, crystals)
  VALUES (
    new.id,
    new.email,
    COALESCE(new.raw_user_meta_data->>'full_name', new.raw_user_meta_data->>'name', 'Jugador'),
    COALESCE(new.raw_user_meta_data->>'avatar_url', ''),
    100
  );
  RETURN new;
END;
$$ LANGUAGE plpgsql SECURITY DEFINER SET search_path = public;

-- 2. Revocar el acceso público a la función (es un trigger interno, nadie de afuera debe llamarlo)
REVOKE EXECUTE ON FUNCTION public.handle_new_user() FROM PUBLIC;
REVOKE EXECUTE ON FUNCTION public.handle_new_user() FROM authenticated;
REVOKE EXECUTE ON FUNCTION public.handle_new_user() FROM anon;

-- ============================================================
-- POLÍTICAS RLS (ROW LEVEL SECURITY)
-- Soluciona el error de "RLS Enabled No Policy" (Datos devuelven 0 filas)
-- y asegura la tabla leaderboards de inyecciones falsas.
-- ============================================================

-- Asegurarnos de que el RLS esté habilitado en leaderboards (por si acaso)
ALTER TABLE public.leaderboards ENABLE ROW LEVEL SECURITY;

-- ------------------------------------------------------------
-- LEADERBOARDS: Cualquiera puede leer (anon/authenticated), pero NADIE puede escribir directamente.
-- La escritura solo la hace tu backend de Golang (que usa el Service Role Key y bypassa el RLS).
-- ------------------------------------------------------------
CREATE POLICY "Permitir lectura pública de leaderboards" 
ON public.leaderboards FOR SELECT 
USING (true);

-- ------------------------------------------------------------
-- USERS: Un jugador solo puede leer su propio perfil.
-- ------------------------------------------------------------
CREATE POLICY "Los usuarios pueden ver su propio perfil" 
ON public.users FOR SELECT 
TO authenticated 
USING (auth.uid() = id);

-- ------------------------------------------------------------
-- USER_SKINS: Un jugador solo puede ver sus propias skins.
-- ------------------------------------------------------------
CREATE POLICY "Los usuarios pueden ver sus skins desbloqueadas" 
ON public.user_skins FOR SELECT 
TO authenticated 
USING (auth.uid() = user_id);

-- ------------------------------------------------------------
-- PARTNERS: Permitir a los creadores ver su perfil de partner.
-- ------------------------------------------------------------
CREATE POLICY "Los partners pueden ver sus propios datos" 
ON public.partners FOR SELECT 
TO authenticated 
USING (auth.uid() = id);

-- ------------------------------------------------------------
-- PARTNER REFERRALS & WITHDRAWALS: Los partners solo ven sus propios registros
-- ------------------------------------------------------------
CREATE POLICY "Partners pueden ver sus referidos" 
ON public.partner_referrals FOR SELECT 
TO authenticated 
USING (auth.uid() = partner_id);

CREATE POLICY "Partners pueden ver sus retiros" 
ON public.partner_withdrawals FOR SELECT 
TO authenticated 
USING (auth.uid() = partner_id);

-- ------------------------------------------------------------
-- USER ACHIEVEMENTS / SETTINGS: El jugador lee sus propios datos
-- ------------------------------------------------------------
CREATE POLICY "Los usuarios ven sus logros" 
ON public.user_achievements FOR SELECT 
TO authenticated 
USING (auth.uid() = user_id);

CREATE POLICY "Los usuarios ven su configuracion" 
ON public.user_settings FOR SELECT 
TO authenticated 
USING (auth.uid() = user_id);

-- ------------------------------------------------------------
-- TIKTOK SUBMISSIONS / PURCHASES
-- ------------------------------------------------------------
CREATE POLICY "Usuarios ven sus misiones de tiktok" 
ON public.tiktok_submissions FOR SELECT 
TO authenticated 
USING (auth.uid() = user_id);

CREATE POLICY "Usuarios ven su historial de compras" 
ON public.purchases FOR SELECT 
TO authenticated 
USING (auth.uid() = user_id);

-- NOTA: Como no hemos creado políticas de INSERT, UPDATE o DELETE,
-- por defecto están DENEGADAS para las conexiones de Flutter (SDK).
-- Esto es EXCELENTE porque obliga a que todas las escrituras pasen 
-- por tu servidor Golang de forma segura.

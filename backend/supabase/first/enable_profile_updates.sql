-- ============================================================
-- PARCHE DE PERMISOS PARA PERFIL (AVATARES Y NOMBRES)
-- Ejecuta este código en el SQL Editor de tu Dashboard de Supabase.
-- ============================================================

-- Permitir a los usuarios actualizar SOLO su propia fila
CREATE POLICY "Los usuarios pueden actualizar su propio perfil" 
ON public.users FOR UPDATE 
TO authenticated 
USING (auth.uid() = id);

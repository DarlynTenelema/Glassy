En esta conversación vamos a crear una página web para mi aplicación Glassy, que nos permita negociar con personas que sean influencers o creadores de contenido en redes como Tiktok, Youtube, Instagram, etc. Esta página se encargara de mostrar información sobre nuestra aplicación Glassy, y poder llegar a un acuerdo con los influencers para que promocionen nuestra aplicación.

Creamos un sistema donde el mismo tenga constancia de quienes de las personas que han ingresado a la app siguen activas.
La condición que todas las personas que han usado la app por lo menos estén activas durante 15 días.

El negocio sería de $0.10 por usuario o jugador activo <-- Para cubrir este gasto hacemos una jugada de "Evento por invitación".
En la tienda de mi juego glassy agregamos una sección de "Evento para jugadores nuevos" donde ofrecemos planes de centavos habilitado por 30 días para que el usuario compre algún paquete. (Es una compra única para no matar tanto mi moneda).

Vamos a llamarla (Glassy: Partners)
La estructura web estará dividida en las siguientes pantallas:

-1. Landing Page Pública (Pantalla Inicial):
Esta es la cara de la plataforma antes de iniciar sesión. Debe convencer a los creadores de unirse.
- Título atractivo: "Monetiza tu audiencia con Glassy".
- Explicación breve de los 3 pasos: 1. Crea tu código, 2. Sube contenido, 3. Recibe tus pagos.
- Una calculadora de ganancias interactiva (Ej: "Si traes 1,000 usuarios = Ganas $100").

0. Login y Registro:
- Usamos el sistema Oauth de Google para la autenticación.
- Antes de crear la cuenta, el influencer debe aceptar el contrato de términos y condiciones para evitar problemas legales.
- Lo que ofrecemos: Pago de $0.10 por cada usuario que ingrese con su código y se mantenga activo al menos 15 días.
- Regla de pago: El saldo es retirable al alcanzar el umbral de $100 dólares. El pago se emite 15 días después de haber solicitado el retiro.

1. Perfil y Código:
- Foto de perfil del creador (traída de Google) y su nombre.
- Campo para que el influencer cree su propio código personalizado (Ej: DARLYN24). El sistema validará que el código no esté en uso por otro creador.
- Mecánica dentro del juego: En la pantalla de Login del juego Glassy, habrá un campo de texto especial. El nuevo jugador deberá escribir allí el código del creador. Al registrarse, el sistema verifica el código y enlaza al nuevo usuario con la cuenta del influencer.

2. Dashboard (Panel de Control y Registros):
- Pantalla profesional para mostrar el rendimiento del creador mediante un "Embudo de conversión".
- Estadísticas claras:
  - Total de instalaciones (Personas que usaron el código).
  - Usuarios en progreso (Aún no cumplen los 15 días).
  - Usuarios confirmados (Ya cumplieron los 15 días y se suman al saldo).
- Gráficos sencillos para mostrar el crecimiento diario o semanal.

3. Kit del Creador (Media Kit):
- Una sección de recursos básicos para facilitarles la creación de videos.
- Por ahora, al ser una empresa indie, ofreceremos recursos esenciales:
  - Descarga del ícono oficial de la app en alta calidad.
  - Pistas de música oficiales del juego para que las usen de fondo en TikTok sin problemas de Copyright.
- El resto de la edición queda a la creatividad del influencer.

4. Pagos y Soporte:
- Muestra el saldo total acumulado y el botón para solicitar retiro (solo se habilita al llegar a $100).
- Campo de texto para que el creador deje su correo de PayPal o plataforma de transferencia mundial.
- Información de contacto directo (mi número o correo) para atención a creadores.
- Nota: Todos los pagos los realizaré de manera manual.
- (Próximamente): Sección de Preguntas Frecuentes (FAQ) para dejar claras las reglas del programa.

Vamos a crear esta página web con SQL, Golang, TypeScript y React.

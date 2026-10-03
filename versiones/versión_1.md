Glassy
Estado: Apenas nos encontramos en desarrollo de esta versión.
Es un juego de gemas que al juntarse se van transformando en una diferente.
UI: Es un vidrio como una botella redonda.
Lógica del juego explicada paso a paso:
El juego consta de 8 elementos, los cuales ocupan diferentes roles.
Explicando el significado de estos dos datos:
Valor: Es la cantidad interna de cada objeto para que el sistema identifique qué objeto es y a qué objeto debe pasar si se suman dos objetos del mismo valor.
Peso: Es la cantidad de fuerza que tiene y que necesita el objeto para ser movido, si el usuario golpea el objeto y este no se mueve es porque el objeto tiene más peso que el usuario, si el usuario mueve el objeto y este se mueve es porque el peso es menor.
Iniciador: Es el objeto más pequeño que su valor vale 0 o 0.5, al tocar el suelo se detiene y al tocar otro objeto pequeño del mismo valor se suman y se convierten en el siguiente objeto con el valor más cercano 0.5+0.5 = 1, su peso es de 0, es decir no interactua con los demás elementos, solo está para iniciar el juego y generar el primer elemento de valor 1.
Objetos intermedios: Son 6 elementos que van aumentando su valor según se sumen con otro objeto del mismo valor. Ej. Tenemos el objeto de valor 1 que es generado por dos objetos de valor 0.5, entonces al juntar otro objeto de valor 1 (1+1=2) se convierte en el objeto con el siguiente valor más cercano. A medida que los objetos van sumando sus valores estos se hacen más grandes, todos los valores son una suma del objeto anterior (1+1=2, 2+2=4, 4+4=8, 8+8=16, 16+16=32, 32+32=64). Pueden interactuar entre ellas, golpeandose y siendo lanzadas por ellas mismas. Para hacerlo más realista y que las gemas grandes se sientan más pesadas, los pesos escalan de forma moderada pero notoria: valor 1 = peso 1.0, valor 2 = peso 1.2, valor 4 = peso 1.6, valor 8 = peso 2.2, valor 16 = peso 3.0, valor 32 = peso 4.0.
Objeto final: Este objeto es el más grande y solo puede ser generado por dos objetos intermedios de valor 32, este objeto tiene un valor de 64 puntos y cuando aparece explota liberando el espacio que ocupaba para que el frasco se vacíe un poco y el juego pueda continuar. Este objeto tiene un peso de 0, al ser un objeto que va a desaparecer y liberar el espacio que ocupaba, no hay razón para que tenga peso.
Intervención del usuario: El usuario puede tocar los objetos y deslizarlos para unirlos con otro objeto del mismo valor. El usuario podrá interactuar con los objetos de dos modos, deslizando suavemente y lanzando la gema. Para que la fuerza de lanzamiento y los impactos no sean salvajes, se ha reducido la fuerza del deslizamiento a una matemática moderada y con un límite máximo. El objeto tocado o lanzado por el usuario obtendrá un bonus de 1.5 en su peso temporalmente. Esto significa que una gema pequeña lanzada (ej. peso 1.0 + 1.5 = 2.5) podrá abrirse paso moviendo gemas hasta cierto tamaño (como la de 2.2), pero si choca contra una gema muy grande como un Rubí (peso 4.0), apenas la moverá y absorberá el impacto. Esto logra un balance moderado sin que las gemas pequeñas envíen a las grandes a volar.
Frasco: Este es el espacio límite que van a tener los objetos o donde van a estar encerrados, este frasco tiene un peso de 3, es decir nadie lo puede mover, pero tiene una interacción muy especial con el objeto de valor 0.5 y peso 0, este objeto pequeño de peso 0 al tocar el fondo del frasco se detiene esperando que otro objeto de peso 0 y valor 0.5 choque para formar un objeto de valor 1.
Sabiendo estos datos y detalles, vamos a explicar el flujo del juego:
1. Los objetos de peso 0 y valor 0.5 empiezan a caer en fila y línea recta, hasta tocar el fondo del frasco y chocar con otro objeto del mismo valor para generar los objetos de valor 1 y empezar el juego.
2. Los objetos de valor 1 o superior empiezan a moverse al chocar entre ellos.
3. El usuario cuando desee puede empezar a mover los objetos.
4. Al juntar los objetos se van transformando según su valor.
5. Si el usuario consigue un objeto de valor 64 este desaparece y libera el espacio que ocupaba.
6. Este valor de 64 se suma a su puntuación.
7. Esta es toda la dinámica del juego y puede seguir así infinitamente siempre y cuando no se quede sin espacio.
8. Si el usuario se queda sin espacio el juego termina y al final se suman todos los puntos dependiendo de las gemas que tenga. Al final le damos una calificación total.

Gemas y colores:
- Nacar: 0 puntos. Es una perla que al juntarse con otra perla se convierte en una esmeralda, esta solo sirve para iniciar el juego, no tiene puntos.
- Verde: 1 punto. Es una esmeralda que al juntarse con otra esmeralda se convierte en una amatista.
- Mordada: 2 puntos. Es una amatista que se consigue al fusionar dos esmeraldas.
- Naranja: 4 puntos. Es un topacio que se consigue al fusionar dos amatistas.
- Verse caña: 8 puntos. Es un estilo de rubí pero de color verde caña.
- Azul violeta: 16 puntos. Es un zafiro que se consigue al fusionar dos topacios.
- Rojo: 32 puntos. Es un rubí que se consigue al fusionar dos amatistas.
- Blanco: 64 puntos. Es un diamante gigante que explota.

Esta app contará con 7 pantallas:
Login/Register <-- Aquí iniciamos sesión o nos registramos usando el sistema Oauth de google.
Game <-- Aquí inicia a jugar.
Pausa <-- Cuando el usuario pausea el juego se abre esta pantalla con estas opciones:
  - Reanudar: Vuelve al juego.
  - Salir: Vuelve al menú principal.
  - Volumen: (Off/On)
  - Efectos: (Off/On)
  - Mini Tienda: Agregamos el paquete de $0.99 mientras esté en pausa. OJO: Solo el paquete de $0.99.
Leaderboards <-- Aquí puede ver cuales son los puntajes de todo el mundo.
Tienda <-- Aquí puede comprar lapislázulis y ver videos de AD Mod.
Configuración <-- Aquí puede configurar el volumen, poner en silencio todo, cambiar de dark mode a light mode, log out. (Entre otras cosas básicas).

Vamos a hacer un backend donde los datos con menor importancia se queden en la memoria del usuario y solo los datos más importantes o críticos que nosotros necesitemos obligatoriamente tener se guarden en la base de datos.
La mayoría de cosas que podamos dejarlo o almacenarlo en la memoria del usuario es mejor para ahorrar costos. Solo lo que sea estrictamente necesario vamos a guardarlo en mi base de datos para tener seguridad de que no se pierda la información, no haya fugas de dinero o que otro usuario intente manipular el juego a su favor.

Modelo de negocio.
Vamos a hacer el juego totalmente gratuito (Free-to-Play). (Esto nos permitirá que el proyecto se expanda).
Para este mvp vamos a crear un modo de partida individual, en donde la monetización se basará estrictamente en elementos cosméticos (Skins) y NUNCA en ventajas dentro del juego (Pay-to-Win).
Las gemas y el tablero se comportarán bajo las mismas reglas para todos los usuarios. Los Lapislázulis se usarán exclusivamente para adquirir nuevas "Skins" o apariencias para las gemas y el frasco, permitiendo a los jugadores personalizar su experiencia sin alterar la dificultad o la puntuación.

Paquetes de Lapislázulis:
Para esto haremos una matematica fácil (1 Lapislázuli == $0.01) y aplicamos la tecnica de comercio de NO redondeo.
100 Lapislázulis "Paquete Económico" = $0.99
600 Lapislázulis (500 + 100 de regalo) "Paquete Pro" = $4.99
1500 Lapislázulis (1000 + 500 de regalo) "Paquete Maestro" = $9.99
5000 Lapislázulis (2000 + 3000 de regalo) "Paquete Legendario" = $19.99

Usaremos google billing con In-app purchase como producto consumible:
IDs:
- glass_pack_100
- glass_pack_600
- glass_pack_1500
- glass_pack_5000

AD Mod:
Vamos a ofrecer al usuario la opción de ver un anuncio de 30 segundos. Para no desbalancear la economía del juego, por cada 5 videos publicitarios vistos, el jugador recibirá 1 Lapislázuli (Límite diario de anuncios).

Regalo de bienvenida:
Cada cuenta nueva empezará a jugar con 100 lapislázulis de regalo, esto nos ayudará a que 

Musica:
Agregamos un sountrack relajante para jugar y que se pueda activar o desactivar desde la configuración.
Agregamos un sonido de "gemas combinadas", cada vez que se combinan gemas suenan una melodia agradable.
Agregamos un sonido de cada vez que se mueve una gema.
Agregamos un sonido de victoria suave cada vez que se genera un diamante.

Los sonidos de esta app serán relajantes.

Vamos a trabajar con Supabase, Railway, Vercel, Google Cloud y Google play console.
Esta primera versión estará disponible para Android.
Lenguajes: SQL, Golang y C# (Unity).

SQL:
Necesitamos una base de datos para:
- Guardar las cuentas de Oauth de los usuarios.
- Registrar los puntajes más altos de los usuarios.
- Guardar la configuración de los usuarios.
- Guardar las compras de los usuarios.

Golang:
Necesitamos un servidor para:
- Autenticar los usuarios.
- Guardar las cuentas de Oauth de los usuarios.
- Registrar los puntajes más altos de los usuarios.
- Guardar la configuración de los usuarios.
- Guardar las compras de los usuarios.

C# (Unity):
Necesitamos un juego para:
- Crear los gráficos del juego.
- Crear la lógica del juego.
- Crear la lógica de la tienda.
- Crear la lógica de la configuración.
- Crear la lógica de los sonidos.

El juego no es el clásico sistema de niveles.

Con la pantalla del Leaderboard el proyecto toma un rumbo competitivo, mostramos quién tiene el puntaje más alto y los 200 top globales que le siguen.

Mecánicas de Adicción y Puntuación (Retención de Usuarios):
1. Combos por Racha: Al fusionar el mismo nivel de gema varias veces seguidas (ej. Esmeralda + Esmeralda = x2, luego otra par de esmeraldas = x3), el multiplicador crece. Al hacer una fusión con una gema diferente (ej. Amatistas), la racha anterior se "cobra" y el usuario recibe un gran bono de puntos (Puntos base * Multiplicador).
2. Reacciones en Cadena (Efecto Dominó): Si una fusión provoca otra fusión automáticamente debido a la física (sin que el usuario toque la pantalla nuevamente), el multiplicador de puntos se dispara masivamente por cada rebote exitoso (x2, x4, x8).
3. Salvada Épica (Near Miss): Si el frasco llega al 90% de su capacidad (provocando que los bordes parpadeen en rojo y la música acelere) y el jugador logra una fusión grande que libere espacio, el sistema le otorga un "Bono de Supervivencia" enorme.
4. Escala Musical (Juiciness): Durante las rachas (ya sean manuales o en cadena), el sonido "pop" de fusión sube medio tono musical (Do, Re, Mi, Fa...). Al romperse la racha y entregar los puntos, suena un acorde de victoria corto y satisfactorio.
5. Micro-misiones Dinámicas Express: Durante la partida, el jugador recibirá de forma aleatoria pequeñas misiones con límite de tiempo (ej. "Crea 3 Topacios en 60 segundos"). Si logra completar la misión antes de que se acabe el tiempo, ganará un bono grande de puntos.

Lógica del juego:
La es sencilla, las perlas caen al suelo una seguida de otra en orden y al llegar al suelo y que la siguiente perla la toque el sistema la transforma en una esmeralda. (Las perlas no tienen peso ni interactual en el espacio de los demás elementos su unica tarea es caer al suelo y transformarse en una esmeralda).
A partir de la esmeralda estas si tienen peso e interactuan entre sí, si chocan con otra gema estas saltan o salen volando en sentido contrario a la dirección en la que venían si no son de la misma identidad.
El usuario puede mover las gemas en todo el ancho disponible de la pantalla.
Puede hacerlo de dos formas:
- Presionando la gema y arrastrándola a la posición deseada.
- Lanzando la gema bruscamente con el deslizar rápido del dedo; presiona, desliza y suelta, la gema sale disparada en la dirección en la que el dedo se movió abriendose paso por la otras gemas por la velocidad del usuario.
El sistema debe de entender si: Gema es movida o ha sido movida por usuario, temporalmente adquiere un peso diferente a las demás.
Todas las gemas tienen el mismo peso, a excepción del suelo limite o donde están encerradas que en este caso si rebotan.
Supongamos que la lógica es así:
Perlas = 0 (No hay peso ni masa, son ignoradas por todos los elementos menos por el suelo donde llegan).
Las demás gemas sin intervención del usuario = Tienen pesos progresivos desde 1.0 hasta 4.0 según su tamaño.
Las gemas con intervención del usuario = Adquieren temporalmente +1.5 de peso al ser movidas o lanzadas.
Suelo o límite = 3 (Es estático y nada lo puede mover).
Al llegar al diamante este explota y se lleva todos los puntos y libera ese espacio como ya acordamos.

Nota: Este proyecto se juega de manera vertical, es decir, con la pantalla en modo retrato.
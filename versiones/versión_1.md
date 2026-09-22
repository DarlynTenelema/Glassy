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
Objetos intermedios: Son 6 elementos que van aumentando su valor según se sumen con otro objeto del mismo valor. Ej. Tenemos el objeto de valor 1 que es generado por dos objetos de valor 0.5, entonces al juntar otro objeto de valor 1 (1+1=2) se convierte en el objeto con el siguiente valor más cercano. A medida que los objetos van sumando sus valores estos se hacen más grandes, todos los valores son una suma del objeto anterior (1+1=2, 2+2=4, 4+4=8, 8+8=16, 16+16=32, 32+32=64). Tienen un peso de 1 pueden interactuar entre ellas, golpeandose y siendo lanzadas por ellas mismas, para hacerlo más realista y que el juego asuma que un objeto es más grande que otro vamos a darles pesos decimales de 1, el objeto de valor 1 tendrá un valor de 1.1 y así sucesivamente: valor 1 = peso 1.1, valor 2 = peso 1.2, valor 4 = peso 1.3, valor 8 = peso 1.4, valor 16 = peso 1.5, valor 32 = peso 1.6
Objeto final: Este objeto es el más grande y solo puede ser generado por dos objetos intermedios de valor 32, este objeto tiene un valor de 64 puntos y cuando aparece explota liberando el espacio que ocupaba para que el frasco se vacíe un poco y el juego pueda continuar. Este objeto tiene un peso de 0, al ser un objeto que va a desaparecer y liberar el espacio que ocupaba, no hay razón para que tenga peso.
Intervención del usuario: El usuario puede tocar los objetos de peso 1 y deslizarlos para unirlos con otro objeto del mismo valor para que sus puntos se sumen, igual cuando se hace una suma el objeto se convierte en el objeto del siguiente valor y así sucesivamente. El usuario podrá interactuar con los objetos de dos modos, deslizando suavemente y lanzando bruscamente la gema haciendo que salga disparada para que choque con las demás, el usuario tendrá un peso de 2, esto significa que puede mover todos los objetos con extrema facilidad, y el objeto que esté siendo tocado por el usuario obtendrá un 0.3 más de peso, ej. el objeto que pesaba 1.1 ahora pesará 1.4 y así sucesivamente, el objeto más pesado de 1.6 pasará 1.9. Esto con la finalidad de que al momento de lanzar los objetos estos puedan mover otros objetos más pesados que el objeto que se a lanzado, si no hacemos esto un objeto de valor 1.1 cuando sea lanzado por el usuario nunca podrá mover a un objeto de valor 8 que tiene un peso de 1.4. Pero aplicando esta lógica el usuario podrá abrirse camino y el juego será más dinámico, por último establecemos que si un objeto está 1 o 2 puntos más abajo del objeto que toca o con el que choca, este si podrá moverlo pero con dificultad, Ej. supongamos que el usuario lanzó un objeto de 1.1 y ahora tiene un peso de 1.4 y choca con un objeto de 1.5, este podrá moverlo pero con un 50% de dificultad, es decir, el objeto se moverá pero no tanto como lo harían los objetos con valor inferior, si choca con un objeto de peso 1.6 se le dificultará un 75%, es decir, apenas se moverá.
Frasco: Este es el espacio límite que van a tener los objetos o donde van a estar encerrados, este frasco tiene un peso de 3, es decir nadie lo puede mover, pero tiene una interacción muy especial con el objeto de valor 0.5 y peso 0, este objeto pequeño de peso 0 al tocar el fondo del frasco se detiene esperando que otro objeto de peso 0 y valor 0.5 choque para formar un objeto de valor 1.
Sabiendo estos datos y detalles, vamos a explicar el flujo del juego:
1. Los objetos de peso 0 y valor 0.5 empiezan a caer en fila y línea recta, hasta tocar el fondo del frasco y chocar con otro objeto del mismo valor para generar los objetos de valor 1 y empezar el juego.
2. Los objetos de valor 1 o superior empiezan a moverse al chocar entre ellos.
3. El usuario cuando desee puede empezar a mover los objetos.
4. Al juntar los objetos se van transformando según su valor.
5. Si el usuario consigue un objeto de valor 64 este desaparece y libera el espacio que ocupaba.
6. Este valor de 64 se suma a su puntuación.
7. Esta es toda la dinámica del juego y puede seguir así infinitamente siempre y cuando no se quede sin espacio.
8. Si el usuario se está quedando sin espacio el sistema identifica qué objetos del mismo valor tienen mayor cantidad y los pinta de rojo, aquí el usuario puede usar los cristales de la tienda para eliminar todo ese grupo, ej. supongamos que hay 10 objetos de valor 4 y de los demás solo hay de 8 para abajo, el sistema identificará los objetos de valor 4 como los más numerosos y los pintará de rojo, sugiriendo al usuario usar cristales para poder eliminarlos y así liberar espacio.
9. Si el usuario se queda sin espacio el juego termina y al final se suman todos los puntos dependiendo de las gemas que tenga. Al final le damos una calificación total.

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
Tienda <-- Aquí puede comprar cristales y ver videos de AD Mod.
Configuración <-- Aquí puede configurar el volumen, poner en silencio todo, cambiar de dark mode a light mode, log out. (Entre otras cosas básicas).

Vamos a hacer un backend donde los datos con menor importancia se queden en la memoria del usuario y solo los datos más importantes o críticos que nosotros necesitemos obligatoriamente tener se guarden en la base de datos.
La mayoría de cosas que podamos dejarlo o almacenarlo en la memoria del usuario es mejor para ahorrar costos. Solo lo que sea estrictamente necesario vamos a guardarlo en mi base de datos para tener seguridad de que no se pierda la información, no haya fugas de dinero o que otro usuario intente manipular el juego a su favor.

Modelo de negocio.
Vamos a hacer el juego totalmente gratuito. (Esto nos permitirá que el proyecto se expanda).
Para este mvp vamos a crear un modo de partida individual, en donde lo único que vamos a vender son cristales para que el usuario pueda eliminar un grupo específico de elementos en la partida según de lo que elija.
Ejemplo:
Perla = 1 cristal (Desaparece las perlas por 5 segundos, no caen más perlas durante este tiempo)
Esmeralda = 2 cristales (Elimina completamente todos los objetos de valor 1 y los suma a su puntaje)
Todo = 5 cristales (Elimina todos los elementos del frasco incluyendo las perlas, pero estas solo dejan de aparecer por 1 segundo, luego de eso vuelven a caer)

Paquetes de cristales:
Para esto haremos una matematica fácil (1 cristal == $0.01) y aplicamos la tecnica de comercio de NO redondeo.
100 cristales "Paquete Económico" = $0.99
600 cristales (500 + 100 de regalo) "Paquete Pro" = $4.99
1500 cristales (1000 + 500 de regalo) "Paquete Maestro" = $9.99
5000 cristales (2000 + 3000 de regalo) "Paquete Legendario" = $19.99

Usaremos google billing con In-app purchase como producto consumible:
IDs:
- glass_pack_100
- glass_pack_600
- glass_pack_1500
- glass_pack_5000

AD Mod:
Vamos a regalarle al usuario una cierta cantidad de cristales por un video de 30 segundos que vea, agregamos un botón para conseguir cristales.
Cristales por video: Como no representa un gasto para nosotros ya que al final es un juego donde solo usamos base de datos, por cada video que el usuario vea serían 5 cristales.

Regalo de bienvenida:
Cada cuenta nueva empezará a jugar con 100 cristales de regalo, esto nos ayudará a que 

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
Las demás gemas sin intervención del usuario = 1 (Todas sin importar el tamaño tienen el mismo peso).
Las gemas con intervención del usuario = 2 (Temporalmente adquieren el doble de peso, si es movida por el usuario o lanzada por el usuario).
Suelo o límite = 3 (Es estático y nada lo puede mover).
Al llegar al diamante este explota y se lleva todos los puntos y libera ese espacio como ya acordamos.

Nota: Este proyecto se juega de manera vertical, es decir, con la pantalla en modo retrato.
Darlyn08012002.
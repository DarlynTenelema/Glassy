Glassy
Es un juego de gemas que al juntarse se van transformando en una diferente.
UI: Es un vidrio como una botella redonda.
Lógica: Se van sumando los puntos 1+1 y creando un elemento que vale 2 puntos, luego se debe unir con otro elemento del mismo valor y se suman creando otro elemento del doble del valor 4 puntos y así sucesivamente.
Gemas:
- Verde: 1 punto. Es una esmeralda que al juntarse con otra esmeralda se convierte en una amatista.
- Mordada: 2 puntos. Es una amatista que se consigue al fusionar dos esmeraldas.
- Naranja: 4 puntos. Es un topacio que se consigue al fusionar dos amatistas.
- Verse caña: 8 puntos. Es un estilo de rubí pero de color verde caña.
- Azul violeta: 16 puntos. Es un zafiro que se consigue al fusionar dos topacios.
- Rojo: 32 puntos. Es un rubí que se consigue al fusionar dos amatistas.
- Blanco: 64 puntos. Es un diamante gigante que explota 
Al momento de conseguir un diamante este explota y se lleva todo esto a la calificación del usuario.
Cada vez que el usuario consigue un diamante este se va sumando a la puntuación. 64+64 = 128+64 = 192+64 = 256+64 = 320+64 y así sucesivamente.
El metodo game over es sencillo, si el usuario se queda sin espacio el juego termina y al final se suman todos los puntos dependiendo de las gemas que tenga. Al final le damos una calificación final.

El index tendrá 3 pantallas.
Game <-- Aquí inicia a jugar.
Leaderboards <-- Aquí puede ver cuales son los puntajes de todo el mundo.
Configuración <-- Aquí puede canfigurar el volumen, poner en silencio todo, cambiar de dark mode a light mode, log out. (Entre otras cosas básicas).

Vamos a hacer un backend con datos que se queden en la memoria del usuario y solo los puntajes de los leaderboards se queden en mi base de datos.
La mayoría de cosas que podamos dejarlo o almacenarlo en la memoria del usuario es mejor para ahorrar cosos. Solo lo que sea estrictamente necesario vamos a quedarnoslos en mi base de datos.

Modelo de negocio.
Vamos a usar el clasico sistema de vidas, donde le damos 5 vidas que se recargan doblando el tiempo, la primera en 5 minutos, la segunda en 10, la tercera en 20, la cuarta en 40 y la quinta en 80.
Si el usuario no quiere esperar, puede ver anuncios para recibir una vida instantáneamente, claro, siempre y cuando no tenga las 5 vidas.
También podemos ofrecer paquetes de vidas.
Paquetes:
Como es un juego donde la mayoría de cosas se quedan en la memoria del usuario, podemos ofrecerle paquetes de vidas ilimitadas por un tiempo determinado, por ejemplo: $1 dólar por 24 horas, que en 30 días serán como estar pagando una suscripción mensual o si quiere le damos el paquete de $20 dólares por 30 días.
Paquetes:
$1 = 24 horas
$3 = 3 días
$5 = 7 días
$10 = 15 días
$20 = 30 días

Añadimos en el index un botón de "conseguir vidas" que nos lleva a una pantalla donde podemos ver los paquetes y comprar vidas. Aquí también podemos ver los anuncios para recibir una vida instantáneamente.
En la pantalla de conseguir vidas ponemos los paquetes y un botón de "conseguir una vida" que será el que active los anuncios de google admod.

Musica:
Agregamos un sountrack relajante para jugar y que se pueda activar o desactivar desde la configuración.
Agregamos un sonido de "gemas combinadas", cada vez que se combinan gemas suenan una melodia agradable.
Agregamos un sonido de cada vez que se mueve una gema.
Agregamos un sonido de victoria suave cada vez que se genera un diamante.

Los sonidos de esta app serán relajantes.
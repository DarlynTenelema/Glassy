En esta conversación vamos a establecer algunas reglas para que nuestro bot parezca más humano y menos robótico:

1. Prioriza primero las gemas de menor valor: Esmeralda, Amatista, Topacio..., y así.
2. Si el elemento que tomó tiene el paso bloqueado al único elemento par para combinar, debe buscar otra alternativa.
3. Debe tomar un rato para pensar y analizar todas las posibilidades, para esto tenemos 4 bots, al iniciar el juego estos pueden tomar su tiempo para pensar, van a tener cada uno intervalos de 20 segundos 20/20/20/20 = 60, en un minuto cada uno a hecho 1 movimiento.
4. Ajustamos el sistema para que al menos 1 bot haga movimientos en parabola o arcos, de esta forma no solo se verá que los bots hacen lineas rectas.
5. El juego permite que las gemas puedan abrirse camino moviendo las demás gemas por su peso y aprovechamos esto para que al menos 1 también mueva la gema seleccionada y se habra camino para llegar a otra gema del mismo tipo.
6. Tenemos un sistema que también permite lanzar las gemas y estas rebotan al chocar, podemos hacer que el cuarto movimiento se encargue de lanzar con un poco de fuerza una gema y armar un caos (El lanzamiento debe ser moderado, no salvaje).

Entonces, nos queda: Movimiento sencillo o cercano/Movimiento en parabola o arco/Movimiento golpeando otras gemas/Movimiento con lanzamientos.
Aparte, eliminamos las luces o colores que tiene cada bot para que los usuarios no se den cuenta que es un bot jugando.
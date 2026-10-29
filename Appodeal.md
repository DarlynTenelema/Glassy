Mi nuevo modelo de negocio lo anoto aquí.
Anteriormente mi modelo era solo vender skins por 600 monedas o $5 dólares.
Ahora con Appodeal vamos a hacer lo siguiente.
1. Seguimos manteniendo el modelo de venta de skins pero ahora estas skins funcionan como un gran incentivo para que los jugadores vean anuncios, reduciendo el precio a 100 y 50 monedas.

Nuevas mecánicas publicitarias 100% amigables y conformes a Google Play:

A. "Recompensa Base por Partida + Duplicar x2":
   - Al terminar cualquier partida, el jugador gana automáticamente 1 Lapislázuli solo por jugar.
   - En la pantalla de Game Over aparece un botón destacado: "Duplicar Recompensa x2 🎥".
   - Si presiona este botón, ve un video recompensado y se le otorgan 2 Lapislázulis en total.
   - Si presiona "Continuar", recoge su 1 Lapislázuli normal y vuelve al menú sin ver ningún anuncio.
   - Flujo limpio: Cero anuncios al presionar "Play", garantizando máxima retención en el primer día (D1).

B. "Nueva oportunidad (Salvar partida)":
   - Cuando el frasco se llena y está a punto de perder, aparece una ventana previa con temporizador de 5 segundos.
   - Botón "Salvar Partida 🎥" (Video Recompensado, limitado a 1 vez por partida): elimina las gemas superiores y reanuda el juego para que intente superar su récord.
   - Botón "Terminar": avanza a la pantalla de Game Over.

C. "Ver anuncios por 1 gema":
   - Se mantiene el botón voluntario en el menú/tienda para quien quiera conseguir gemas extra rápidamente.

Las skins que antes valían 600 monedas ahora valdrán 100 monedas y las que valían 300 ahora valen 50.

Como las imagenes son generadas por IA no me importa que Appodeal se lleve todo ese dinero.

Yo tengo más modelos de negocios por ser el dueño del juego:

1. Mi mayor objetivo: Llegar a 100 mil usuarios y hacer tratos con empresas locales de mi país.
2. Ventas de skins más primium: ahora estas skins serán 100% de Appodeal para nuevos jugadores o usuarios que no quieran gastar, los jugadores que se queden durante mucho tiempo seguro comprarán skins mejores.
3. Licencias: Si mi juego alcanza popularidad masiva y más personas quieren copiarla, puedo vender licencias por un 10% de todo lo que genere su juego.

---

### Estado de Implementación Técnica en Código:
- [x] **Paso 1: Precios de Skins Reducidos (50 y 100)**: Implementado en Go Server (`game.go`) y Flutter (`store_screen.dart`, `skin_purchase_dialog.dart`).
- [x] **Paso 2: Recompensa Base (+1 Lapis) + Botón "Duplicar x2 🎥"**: Implementado en Go Server (`SubmitScore`, `ClaimAdReward`) y Flutter Game Over (`game_screen.dart`).
- [x] **Paso 3: Mecánica "Nueva Oportunidad / Salvar Partida" (1 vez/partida)**: Implementado en Unity C# (`GameManager.cs`, `GameOverZone.cs`, `FlutterBridgeManager.cs`) y Flutter (`unity_bridge_controller.dart`, `game_screen.dart`).
# Flutter Unity Bridge SDK

Un SDK ligero y tipado para facilitar y estandarizar la comunicación entre Flutter y Unity.

## Propósito
Este proyecto nació para solucionar la fragilidad de la comunicación basada en strings crudos entre proyectos de Flutter y Unity.
El objetivo es proveer una capa intermedia (bridge) que utilice JSON para el intercambio de datos, proporcionando tipado fuerte y eventos claros en ambos lados (Dart y C#).

## Componentes
1. **Lado de Flutter (Dart)**: Un paquete/clases que envuelven el canal de mensajes y exponen un sistema basado en eventos (Streams) y modelos de datos tipados.
2. **Lado de Unity (C#)**: Un módulo/scripts de Unity que parsean los JSON entrantes, los convierten a objetos C# y utilizan Actions/Events para interactuar con los GameManagers.

## Estado
En desarrollo. Consulta [PLAN.md](PLAN.md) para ver la hoja de ruta de implementación.

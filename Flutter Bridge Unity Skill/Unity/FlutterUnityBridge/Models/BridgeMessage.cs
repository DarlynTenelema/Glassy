using System;

namespace FlutterUnityBridge.Models
{
    /// <summary>
    /// La estructura base para todos los mensajes que viajan entre Flutter y Unity.
    /// Utiliza 'event' como palabra reservada en JSON para identificar el tipo de mensaje,
    /// y 'payload' como un string JSON anidado o un objeto dinámico.
    /// Para mantener la compatibilidad con JsonUtility de Unity, el payload se envía como string (JSON serializado)
    /// si es complejo, o usamos clases herederas.
    /// </summary>
    [Serializable]
    public class BridgeMessage
    {
        public string eventName;
        public string payload; // Un JSON stringificado que contiene la data real
    }
}

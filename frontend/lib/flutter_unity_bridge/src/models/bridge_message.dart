class BridgeMessage {
  final String eventName;
  final String payload; // Es un JSON stringificado para igualar el comportamiento de Unity

  BridgeMessage({
    required this.eventName,
    required this.payload,
  });

  factory BridgeMessage.fromJson(Map<String, dynamic> json) {
    return BridgeMessage(
      eventName: json['eventName'] as String,
      payload: json['payload'] as String? ?? '{}',
    );
  }

  Map<String, dynamic> toJson() {
    return {
      'eventName': eventName,
      'payload': payload,
    };
  }
}

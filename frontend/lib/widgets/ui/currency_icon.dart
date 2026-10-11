import 'package:flutter/material.dart';

class CurrencyIcon extends StatelessWidget {
  static const String imagePath = 'assets/images/lapislazuli.png';

  final double size;

  const CurrencyIcon({
    super.key,
    this.size = 24.0,
  });

  @override
  Widget build(BuildContext context) {
    return Image.asset(
      imagePath,
      width: size,
      height: size,
      errorBuilder: (context, error, stackTrace) => Icon(
        Icons.diamond,
        size: size,
        color: Theme.of(context).primaryColor,
      ),
    );
  }
}

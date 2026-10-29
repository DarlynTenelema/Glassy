# ==============================================================================
# Flutter Unity Widget & Unity Player ProGuard Rules
# Evita que R8/ProGuard ofusque o elimine las clases del puente Unity-Flutter en Release
# ==============================================================================

# Mantener todas las clases del plugin flutter_unity_widget
-keep class com.xraph.plugin.** { *; }
-keep class com.xraph.plugins.flutterunitywidget.** { *; }

# Mantener explícitamente los métodos nativos y llamadas JNI reflection
-keepclassmembers class com.xraph.plugin.flutter_unity_widget.UnityPlayerUtils {
    public static void onUnityMessage(java.lang.String);
    public static void onUnitySceneLoaded(java.lang.String, int, boolean, boolean);
    public static **[] *;
    *;
}

-keepclassmembers class com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity {
    public static com.xraph.plugin.flutter_unity_widget.OverrideUnityActivity instance;
    public void showMainActivity();
    public void unloadPlayer();
    *;
}

# Mantener UnityPlayer y JNI Bridge
-keep class com.unity3d.player.** { *; }
-keep interface com.unity3d.player.** { *; }
-keep class bitter.jnibridge.* { *; }
-keep class org.fmod.* { *; }

# Mantener Flutter Engine & Platform Channels
-keep class io.flutter.plugin.** { *; }
-keep class io.flutter.app.** { *; }
-keep class io.flutter.embedding.** { *; }

# Mantener WebKit JavascriptInterface
-keepclassmembers class * {
    @android.webkit.JavascriptInterface <methods>;
}

# Google Play Services & AdMob
-keep class com.google.android.gms.** { *; }
-dontwarn com.google.android.gms.**

# In-App Purchases (Google Play Billing)
-keep class com.android.vending.billing.** { *; }
-keep class com.android.billingclient.** { *; }
-dontwarn com.android.billingclient.**

# Flutter Deferred Components & Google Play Core
-dontwarn com.google.android.play.core.**
-dontwarn io.flutter.embedding.**
-dontwarn androidx.**
-ignorewarnings

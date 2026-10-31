#pragma once
#include <cmath>
#include <cstdint>
#include <algorithm>

namespace Engine {

struct Vec2 {
    float x = 0.0f;
    float y = 0.0f;

    Vec2() = default;
    Vec2(float inX, float inY) : x(inX), y(inY) {}

    Vec2 operator+(const Vec2& o) const { return Vec2(x + o.x, y + o.y); }
    Vec2 operator-(const Vec2& o) const { return Vec2(x - o.x, y - o.y); }
    Vec2 operator*(float s) const { return Vec2(x * s, y * s); }
    Vec2 operator/(float s) const { return Vec2(x / s, y / s); }

    Vec2& operator+=(const Vec2& o) { x += o.x; y += o.y; return *this; }
    Vec2& operator-=(const Vec2& o) { x -= o.x; y -= o.y; return *this; }
    Vec2& operator*=(float s) { x *= s; y *= s; return *this; }

    float lengthSq() const { return x * x + y * y; }
    float length() const { return std::sqrt(lengthSq()); }

    Vec2 normalized() const {
        float l = length();
        return (l > 0.00001f) ? Vec2(x / l, y / l) : Vec2(0.0f, 0.0f);
    }

    static float distance(const Vec2& a, const Vec2& b) {
        return (a - b).length();
    }

    static Vec2 lerp(const Vec2& a, const Vec2& b, float t) {
        return a + (b - a) * std::clamp(t, 0.0f, 1.0f);
    }
};

struct Rect {
    float x = 0.0f;
    float y = 0.0f;
    float w = 0.0f;
    float h = 0.0f;

    bool contains(const Vec2& p) const {
        return p.x >= x && p.x <= (x + w) && p.y >= y && p.y <= (y + h);
    }
};

struct Color {
    uint8_t r = 255;
    uint8_t g = 255;
    uint8_t b = 255;
    uint8_t a = 255;

    Color() = default;
    Color(uint8_t inR, uint8_t inG, uint8_t inB, uint8_t inA = 255)
        : r(inR), g(inG), b(inB), a(inA) {}

    static Color White() { return Color(255, 255, 255, 255); }
    static Color Black() { return Color(0, 0, 0, 255); }
    static Color Red()   { return Color(255, 60, 60, 255); }
    static Color Green() { return Color(60, 255, 60, 255); }
    static Color Blue()  { return Color(60, 120, 255, 255); }
    static Color Gold()  { return Color(255, 215, 0, 255); }
};

/// Generador de Ruido Perlin 2D determinista, ultra ligero y eficiente
/// Reemplaza al Mathf.PerlinNoise de Unity para el efecto de flotabilidad Zero-G
class PerlinNoise {
private:
    static const int p[512];
    static float fade(float t) { return t * t * t * (t * (t * 6.0f - 15.0f) + 10.0f); }
    static float lerp(float t, float a, float b) { return a + t * (b - a); }
    static float grad(int hash, float x, float y) {
        int h = hash & 7;
        float u = h < 4 ? x : y;
        float v = h < 4 ? y : x;
        return ((h & 1) ? -u : u) + ((h & 2) ? -2.0f * v : 2.0f * v);
    }

public:
    static float noise2D(float x, float y) {
        int X = (int)std::floor(x) & 255;
        int Y = (int)std::floor(y) & 255;
        x -= std::floor(x);
        y -= std::floor(y);
        float u = fade(x);
        float v = fade(y);
        int A = p[X] + Y, AA = p[A], AB = p[A + 1];
        int B = p[X + 1] + Y, BA = p[B], BB = p[B + 1];

        float res = lerp(v, lerp(u, grad(p[AA], x, y), grad(p[BA], x - 1, y)),
                            lerp(u, grad(p[AB], x, y - 1), grad(p[BB], x - 1, y - 1)));
        return (res + 1.0f) * 0.5f; // Normalizado [0, 1]
    }
};

} // namespace Engine


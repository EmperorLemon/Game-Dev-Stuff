#pragma once

class Vector2
{
public:
    Vector2();
    Vector2(float _x, float _y);
    float sqrMagnitude() const;
    float magnitude() const;
    Vector2 Normalize() const;
    float operator[](const int) const;
    float X() const;
    float Y() const;
    static Vector2 zero;
    static Vector2 one;
    static Vector2 up;
    static Vector2 down;
    static Vector2 left;
    static Vector2 right;
private:
    float x, y;
};

float Deg2Rad(const float deg);
float Rad2Deg(const float rad);

float Dot(const Vector2&, const Vector2&);
float Angle(const Vector2&, const Vector2&);

Vector2 Max(const Vector2&, const Vector2&);
Vector2 Min(const Vector2&, const Vector2&);

Vector2 operator+(const Vector2&, const Vector2&);
Vector2 operator-(const Vector2&, const Vector2&);
Vector2 operator*(const Vector2&, const float);
Vector2 operator/(const Vector2&, const float);

bool operator==(const Vector2&, const Vector2&);
bool operator!=(const Vector2&, const Vector2&);
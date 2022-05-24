#include "VECTOR.HPP"

Vector::Vector():x(0),y(0),z(0)
{
    magnitude = 1;
    sqrMagnitude = 1;
    normalized = 1;
}

Vector::Vector(const float _x, const float _y, float _z): x(_x), y(_y), z(_z){}

float Dot(const Vector& u, const Vector& v)
{
    return u.x * v.x + u.y * v.y + u.z * v.z;
}

Vector Cross(const Vector& u, const Vector& v)
{
    return Vector(u.y * v.z - u.z * v.y,
                  u.z * v.x - u.x * v.z,
                  u.x * v.y - u.y * v.x);
}

Vector operator+(const Vector& u, const Vector& v)
{
    return Vector(u.x + v.x, u.y + v.y, u.z + v.z);
}

Vector operator-(const Vector& u, const Vector& v)
{
    return Vector(u.x - v.x, u.y - v.y, u.z - v.z);
}

Vector operator*(const Vector& u, const float t)
{
    return Vector(u.x * t, u.y * t, u.z * t);
}

Vector operator/(const Vector& u, const float t)
{
    return Vector(u.x / t, u.y / t, u.z / t);
}

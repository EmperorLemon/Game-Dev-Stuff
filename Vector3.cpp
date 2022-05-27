#include "VECTOR3.H"
#include <cmath>

Vector3::Vector3():x(0),y(0),z(0){}

Vector3::Vector3(const float _x, const float _y, float _z): x(_x), y(_y), z(_z){}

float Vector3::X() const {return x;}
float Vector3::Y() const {return y;}
float Vector3::Z() const {return z;}

float Vector3::sqrMagnitude() const
{
    return this->x * this->x + this->y * this->y + this->z * this->z;
}

float Vector3::magnitude() const
{
    return sqrt(sqrMagnitude());
}

Vector3 Vector3::Normalize() const
{
    return *this / this->magnitude();
}






Vector3 operator+(const Vector3& u, const Vector3& v)
{
    return Vector3(u.X() + v.X(), u.Y() + v.Y(), u.Z() + v.Z());
}

Vector3 operator-(const Vector3& u, const Vector3& v)
{
    return Vector3(u.X() - v.X(), u.Y() - v.Y(), u.Z() - v.Z());
}

Vector3 operator*(const Vector3& u, const float t)
{
    return Vector3(u.X() * t, u.Y() * t, u.Z() * t);
}

Vector3 operator/(const Vector3& u, const float t)
{
    return Vector3(u.X() / t, u.Y() / t, u.Z() / t);
}


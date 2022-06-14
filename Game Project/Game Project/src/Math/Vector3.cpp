#include "./include/Math/VECTOR3.H"

#include "MATH_STUFF.H"
#include <stdexcept>

Vector3::Vector3():x(0),y(0),z(0){}

Vector3::Vector3(const float _x, const float _y, float _z): x(_x), y(_y), z(_z){}

float Vector3::X() const {return x;}
float Vector3::Y() const {return y;}
float Vector3::Z() const {return z;}

Vector3 Vector3::up = {0,1,0};
Vector3 Vector3::down = {0,-1,0};
Vector3 Vector3::left = {-1,0,0};
Vector3 Vector3::right = {1,0,0};
Vector3 Vector3::one = {1,1,1};
Vector3 Vector3::zero = {0,0,0};
Vector3 Vector3::forward = {0,0,1};
Vector3 Vector3::back = {0,0,-1};

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

// Lazy approach
float Vector3::operator[](const int i) const
{
    switch (i)
    {
    case 0:
        return x;
    case 1:
        return y;
    case 2:
        return z;
    default:
        throw std::out_of_range("index is out of bounds of the array\n");
    }
}

Vector3 Cross(const Vector3& u, const Vector3& v)
{
    return Vector3(u.Y() * v.Z() - u.Z() * v.Y(),
                   u.Z() * v.X() - u.X() * v.Z(),
                   u.X() * v.Y() - u.Y() * v.X());
}

float Dot(const Vector3& u, const Vector3& v)
{
    return u.X() * v.X() + u.Y() * v.Y() + u.Z() * v.Z();
}

float Angle(const Vector3& u, const Vector3& v)
{
    return Rad2Deg(atan2(Cross(u,v).magnitude(), Dot(u,v)));
}

Vector3 Max(const Vector3& u, const Vector3& v)
{
    float max_x, max_y, max_z;

    if (u.X() > v.X()) max_x = u.X();
    else max_x = v.X();
    if (u.Y() > v.Y()) max_y = u.Y();
    else max_y = v.Y();
    if (u.Z() > v.Z()) max_z = u.Z();
    else max_z = v.Z();

    return Vector3(max_x, max_y, max_z);
}

Vector3 Min(const Vector3& u, const Vector3& v)
{
    float min_x, min_y, min_z;

    if (u.X() < v.X()) min_x = u.X();
    else min_x = v.X();
    if (u.Y() < v.Y()) min_y = u.Y();
    else min_y = v.Y();
    if (u.Z() < v.Z()) min_z = u.Z();
    else min_z = v.Z();

    return Vector3(min_x, min_y, min_z);
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

bool operator==(const Vector3& u, const Vector3& v)
{
    return (compare_float(u.X(), v.X()) &&
            compare_float(u.Y(), v.Y()) &&
            compare_float(u.Z(), v.Z()));
}

bool operator!=(const Vector3& u, const Vector3& v)
{
    return (!compare_float(u.X(), v.X()) &&
            !compare_float(u.Y(), v.Y()) &&
            !compare_float(u.Z(), v.Z()));
}


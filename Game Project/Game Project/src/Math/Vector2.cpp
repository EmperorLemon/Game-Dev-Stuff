#include "./include/Math/VECTOR2.H"
#include "./include/Math/MATH_STUFF.H"
#include <stdexcept>


Vector2::Vector2():x(0),y(0){}

Vector2::Vector2(const float _x, const float _y): x(_x), y(_y){}

float Vector2::X() const {return x;}
float Vector2::Y() const {return y;}

Vector2 Vector2::up = {0,1};
Vector2 Vector2::down = {0,-1};
Vector2 Vector2::left = {-1,0};
Vector2 Vector2::right = {1,0};
Vector2 Vector2::one = {1,1};
Vector2 Vector2::zero = {0,0};

float Vector2::sqrMagnitude() const
{
    return this->x * this->x + this->y * this->y;
}

float Vector2::magnitude() const
{
    return sqrt(sqrMagnitude());
}

Vector2 Vector2::Normalize() const
{
    return *this / this->magnitude();
}

// Lazy approach
float Vector2::operator[](const int i) const
{
    switch (i)
    {
    case 0:
        return x;
    case 1:
        return y;
    default:
        throw std::out_of_range("index is out of bounds of the array\n");
    }
}

float Dot(const Vector2& u, const Vector2& v)
{
    return u.X() * v.X() + u.Y() * v.Y();
}

Vector2 Max(const Vector2& u, const Vector2& v)
{
    float max_x, max_y;

    if (u.X() > v.X()) max_x = u.X();
    else max_x = v.X();
    if (u.Y() > v.Y()) max_y = u.Y();
    else max_y = v.Y();

    return Vector2(max_x, max_y);
}

Vector2 Min(const Vector2& u, const Vector2& v)
{
    float min_x, min_y;

    if (u.X() < v.X()) min_x = u.X();
    else min_x = v.X();
    if (u.Y() < v.Y()) min_y = u.Y();
    else min_y = v.Y();

    return Vector2(min_x, min_y);
}

Vector2 operator+(const Vector2& u, const Vector2& v)
{
    return Vector2(u.X() + v.X(), u.Y() + v.Y());
}

Vector2 operator-(const Vector2& u, const Vector2& v)
{
    return Vector2(u.X() - v.X(), u.Y() - v.Y());
}

Vector2 operator*(const Vector2& u, const float t)
{
    return Vector2(u.X() * t, u.Y() * t);
}

Vector2 operator/(const Vector2& u, const float t)
{
    return Vector2(u.X() / t, u.Y() / t);
}

bool operator==(const Vector2& u, const Vector2& v)
{
    return (compare_float(u.X(), v.X()) &&
            compare_float(u.Y(), v.Y()));
}

bool operator!=(const Vector2& u, const Vector2& v)
{
    return (!compare_float(u.X(), v.X()) &&
            !compare_float(u.Y(), v.Y()));
}

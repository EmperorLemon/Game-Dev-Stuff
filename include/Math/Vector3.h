#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3
{
public:
    Vector3();
    Vector3(float _x, float _y, float _z);
    float sqrMagnitude() const;
    float magnitude() const;
    Vector3 Normalize() const;
    float operator[](const int) const;
    float X() const;
    float Y() const;
    float Z() const;
    static Vector3 zero;
    static Vector3 one;
    static Vector3 up;
    static Vector3 down;
    static Vector3 left;
    static Vector3 right;
    static Vector3 forward;
    static Vector3 back;
private:
    float x,y,z;
};

Vector3 Cross(const Vector3&, const Vector3&);
float Dot(const Vector3&, const Vector3&);
float Angle(const Vector3&, const Vector3&);

Vector3 Max(const Vector3&, const Vector3&);
Vector3 Min(const Vector3&, const Vector3&);

Vector3 operator+(const Vector3&, const Vector3&);
Vector3 operator-(const Vector3&, const Vector3&);
Vector3 operator*(const Vector3&, const float);
Vector3 operator/(const Vector3&, const float);

bool operator==(const Vector3&, const Vector3&);
bool operator!=(const Vector3&, const Vector3&);


#endif

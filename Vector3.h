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
    float X() const;
    float Y() const;
    float Z() const;
private:
    float x,y,z;
};

Vector3 operator+(const Vector3&, const Vector3&);
Vector3 operator-(const Vector3&, const Vector3&);
Vector3 operator*(const Vector3&, const float);
Vector3 operator/(const Vector3&, const float);


#endif

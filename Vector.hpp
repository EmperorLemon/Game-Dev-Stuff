#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector
{
public:
    Vector();
    Vector(const float, const float, const float);
    const float x,y,z;
    const float magnitude;
    const float normalized;
    const float sqrMagnitude;
private:
    getSqrMagnitude(const Vector&);
    getMagnitude(const Vector&);
};

float Dot(const Vector&, const Vector&);

Vector Cross(const Vector&, const Vector&);

Vector operator+(const Vector&, const Vector&);

Vector operator-(const Vector&, const Vector&);

Vector operator*(const Vector&, const float);

Vector operator/(const Vector&, const float);

#endif

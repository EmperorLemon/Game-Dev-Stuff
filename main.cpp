#include <iostream>
#include <ostream>
#include "Vector.hpp"

void Start();
void Update();
void FixedUpdate();

using std::cout;
using std::endl;
using std::ostream;

ostream& operator<<(ostream&, const Vector&);

int main()
{
    Vector u = {1,2,3};
    Vector v = {4,5,6};

    cout << Dot(u,v);
}

ostream& operator<<(ostream& os, const Vector& V)
{
    os << '(' << V.x << "," <<  V.y << "," << V.z << ')';

    return os;
}

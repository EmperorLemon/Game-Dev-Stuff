#include <iostream>
#include <ostream>
#include "Vector3.h"

void Start();
void Update();
void FixedUpdate();

using std::cout;
using std::endl;
using std::ostream;

ostream& operator<<(ostream&, const Vector3&);

int main()
{
    Vector3 u = {1,2,3};
    Vector3 v = {4,5,6};
}

ostream& operator<<(ostream& os, const Vector3& V)
{
    os << '(' << V.X() << "," <<  V.Y() << "," << V.Z() << ')';

    return os;
}

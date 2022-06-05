#include <iostream>
#include <ostream>
#include "Vector3.h"
#include "OBJ_LOADER.h"

void Start();
void Update();
void FixedUpdate();

using std::cout;
using std::endl;
using std::ostream;

ostream& operator<<(ostream&, const Vector3&);

int main()
{
    LoadObjectFile("box.obj");
}

ostream& operator<<(ostream& os, const Vector3& V)
{
    os << '(' << V.X() << "," <<  V.Y() << "," << V.Z() << ')';

    return os;
}

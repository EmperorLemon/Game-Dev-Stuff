#include "../include/Debug_Out.h"

using std::ostream;

ostream& operator <<(ostream& os, const Vector3& V3)
{
	os << '(' << V3.X() << ',' << ' ' << V3.Y() << ',' << ' ' << V3.Z() << ')';

	return os;
}

ostream& operator <<(ostream& os, const Vector2& V2)
{
	os << '(' << V2.X() << ',' << ' ' << V2.Y() << ')';

	return os;
}

template <class T>
ostream& operator <<(ostream& os, const Matrix<T>& M)
{
	for (int i = 0; i < M.Rows(); ++i)
	{
		os << M(i, 0);
	}

	return os;
}


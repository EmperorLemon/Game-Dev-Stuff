#pragma once

#include <ostream>
#include <iostream>

#include "Math/Vector3.h"
#include "Math/Vector2.h"
#include "Math/Matrix.h"

std::ostream& operator<<(std::ostream& os, const Vector3& V3);
std::ostream& operator<<(std::ostream& os, const Vector2& V2);

template <class T>
std::ostream& operator<<(std::ostream& os, const Matrix<T>& M);
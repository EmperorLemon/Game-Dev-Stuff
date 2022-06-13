#ifndef MATH_STUFF_H
#define MATH_STUFF_H

#include <cmath>

#define EPSILON 0.001
#define PI 3.14159265358979323846

inline bool compare_float(const float x, const float y){return fabs(x - y) < EPSILON;}
inline float Deg2Rad(const float deg){return deg * (PI / 180);}
inline float Rad2Deg(const float rad){return rad * (180 / PI);}

#endif // MATH_STUFF_H

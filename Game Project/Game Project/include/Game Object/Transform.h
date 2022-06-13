#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "Vector3.h"
#include "Vector2.h"

typedef struct
{
    Vector3 position = Vector3::zero;
    Vector3 scale = Vector3::one;
}Transform3D;

typedef struct
{
    Vector2 position = Vector2::zero;
    Vector2 scale = Vector2::zero;
}Transform2D;


#endif // TRANSFORM_H

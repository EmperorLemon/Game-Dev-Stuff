#ifndef RIGIDBODY_H
#define RIGIDBODY_H

#include "Vector3.h"
#include "Transform.h"

class Rigidbody
{
public:
private:
    Vector3 m_drag;
    Vector3 m_velocity;
    Transform3D m_transform;
    float m_mass;
    bool m_isKinematic;
    bool m_detectCollisions;
    bool m_useGravity;
};

#endif // RIGIDBODY_H

#ifndef MESH_H
#define MESH_H

#include "Vector2.h"
#include "Vector3.h"
#include <string>
#include <vector>

typedef struct
{
    Vector3 position;
    Vector3 normal;
    Vector2 texCoords;
} Vertex;

typedef struct
{
    unsigned int id;
    std::string type;
} Texture;

class Mesh
{
public:
    Mesh();
    Mesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices, std::vector<Texture> textures);
    void Draw();
private:
    std::vector<Vertex> m_verts;
    std::vector<
};

#endif // MESH_H

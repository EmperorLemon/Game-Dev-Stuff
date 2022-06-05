#include "Mesh.h"

using std::vector;

Mesh::Mesh()
{

}

Mesh::Mesh(vector<Vertex> vertices, vector<unsigned int> indices, vector<Texture> textures)
{
    m_verts = vertices;
}

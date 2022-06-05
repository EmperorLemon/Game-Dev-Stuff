#include "OBJ_LOADER.H"
#include "Mesh.h"

#include <iostream>
#include <fstream>
#include <ostream>
#include <sstream>

using std::cout;
using std::endl;
using std::stringstream;
using std::ostream;
using std::getline;
using std::string;
using std::ifstream;

void LoadObjectFile(const string& file_name)
{
    ifstream obj_file;
    string line;

    Mesh m;

    obj_file.open(file_name.c_str());

    if (obj_file.bad() || !obj_file)
    {
        cout << "Cannot open file: " << file_name << endl;
        exit(-1);
    }

    while (getline(obj_file, line))
    {

    }
}

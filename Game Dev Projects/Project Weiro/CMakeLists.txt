# CMakeList.txt : CMake project for Project Weiro, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (CMakeTarget "Project Weiro.cpp" "Project Weiro.h" "src/Vector3.cpp" "include/Math/Vector3.h" "include/Math/Game_Math.h" "include/Math/Vector2.h" "src/Vector2.cpp" "include/Debug_Out.h" "src/Debug_Out.cpp"  )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

include_directories("." ${PROJECT_SOURCE_DIR}/lib)
add_executable(Demo main.cpp)
target_link_libraries (Demo MeshReconstruction)
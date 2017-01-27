add_library(MeshReconstruction MeshReconstruction.h MeshReconstruction.cpp Cube.h Cube.cpp DataStructs.h IO.h IO.cpp Triangulation.h Triangulation.cpp)

install(TARGETS MeshReconstruction
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

install(DIRECTORY .
        DESTINATION .
        FILES_MATCHING PATTERN "*.h")
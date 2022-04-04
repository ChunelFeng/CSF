
cmake_minimum_required(VERSION 3.11)

project(CSF VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m64 -finline-functions -Wno-deprecated-declarations")

file(GLOB_RECURSE CGRAPH_SRC_LIST "./3rd-party/CGraph/src/*.cpp")
file(GLOB_RECURSE CSF_SRC_LIST "src/*.cpp")

add_executable(CSF
        ${CGRAPH_SRC_LIST}
        ${CSF_SRC_LIST}
        main.cpp)


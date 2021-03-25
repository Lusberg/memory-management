cmake_minimum_required(VERSION 3.17)
project(memory_management)

set(CMAKE_CXX_STANDARD 17)

add_executable(memory_management
        main.cpp
        node/src/node.cpp
        node/include/node.hpp
        node2/src/node2.cpp
        node2/include/node2.hpp
        myclass/src/MyClass.cpp
        myclass/include/MyClass.hpp)
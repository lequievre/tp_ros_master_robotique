cmake_minimum_required(VERSION 2.8.9)
project(shared_library)
set(CMAKE_BUILD_TYPE Release)

#Bring the headers, such as student.h into the project
include_directories(include)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/main.cpp src/student.cpp)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

#Generate the shared library from the sources
add_library(myLibStudent SHARED ${SOURCES})

cmake_minimum_required(VERSION 2.8.9)
project(use_shared_library)

#For the shared library:
set ( PROJECT_LINK_LIBS libmyLibStudent.so )
link_directories( ../shared_library/build )

#Bring the headers, such as student.h into the project
include_directories(../shared_library/include)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/main.cpp )

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(testStudent ${SOURCES})
target_link_libraries(testStudent ${PROJECT_LINK_LIBS} )

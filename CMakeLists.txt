cmake_minimum_required(VERSION 3.8)

project(SnakeGL)

set(CMAKE_CXX_STANDARD 20)


add_executable(EXE main.cpp)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
target_link_libraries(EXE ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )

file(GLOB CPP_SOURCES "scr/*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/include")




cmake_minimum_required(VERSION 3.8)

project(SnakeGL)

set(CMAKE_CXX_STANDARD 20)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )
include_directories("${PROJECT_SOURCE_DIR}/include")

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)


add_library(field_lib STATIC scr/field.cpp)

target_link_directories(field_lib PUBLIC ${PROJECT_SOURCE_DIR}/scr)

add_library(food_lib STATIC scr/food.cpp)

target_link_directories(food_lib PUBLIC ${PROJECT_SOURCE_DIR}/scr)

add_library(player_lib STATIC scr/player.cpp)

target_link_directories(player_lib PUBLIC ${PROJECT_SOURCE_DIR}/scr)



file(GLOB CPP_SOURCES "scr/*.cpp")

add_executable(${PROJECT_NAME} main.cpp)




target_link_libraries(${PROJECT_NAME} food_lib field_lib player_lib ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})

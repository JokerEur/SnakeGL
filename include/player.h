#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#endif

#include <time.h>

#include "field.h"
#include "food.h"

enum Dir{
    RIGHT,
    LEFT,
    UP,
    DOWN
};

class Player{
public:
    Player() = default;
    ~Player();
    void Draw(Field& grid,Food& food);
    short PlayerDir = RIGHT;
private:
    GLint x = 20 , y = 20;
};
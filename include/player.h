#ifdef APPLE
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <GL/GL.h>
#include <time.h>
#endif

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
#ifndef food_HEADER
#define food_HEADER

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



class Food{

public: 

    Food() = default;
    ~Food();
    void Draw(Field &obj);
    GLint GetX();
    GLint GetY();
    void SetAvb(bool arg);

private:

    bool avaliable = true;
    GLint x,y;
    void FoodRandom(Field& obj); 

};



#endif
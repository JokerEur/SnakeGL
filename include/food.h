#ifndef food_HEADER
#define food_HEADER

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
#ifndef field_HEADER
#define field_HEADER

#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/gl.h>
#include <GL/glut.h>
#endif

#include <time.h>

class Field{
    public:
        Field() = default;
        Field(const GLint x, const GLint y);
        // ~Field();
        void Draw();
        GLint GetX();
        GLint GetY();
    private: 
        GLint x,y;
        void Unit(GLint x,GLint y);
};

#endif
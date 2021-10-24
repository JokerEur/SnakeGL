#ifndef field_HEADER
#define field_HEADER

#ifdef APPLE
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <GL/GL.h>
#include <time.h>
#endif


class Field{
    public:
        Field() = default;
        Field(const GLint x, const GLint y);
        ~Field();
        void Draw();
        GLint GetX();
        GLint GetY();
    private: 
        GLint x,y;
        void Unit(GLint x,GLint y);
};

#endif
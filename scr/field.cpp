#include "field.h"



GLint Field::GetX(){return this->x;}
GLint Field::GetY(){return this->y;}

Field::Field(const GLint x,const GLint y){
    this->x = x;
    this->y = y;
}

void Field::Unit(GLint x, GLint y){

    if (x == 0 || y == 0  || x == this->x-1 || y == this->y-1){
        
        glLineWidth(3);
        glColor3f(1,0,0);
        
        glBegin(GL_POLYGON);

        glVertex2f(x, y);
		glVertex2f(x + 1, y);
		glVertex2f(x + 1, y + 1);
		glVertex2f(x, y + 1);
        
        glEnd();

    }
	// else {
	// 	glLineWidth(0.5);
	// 	glColor3f(1, 1, 1);

	// 	glBegin(GL_LINE_LOOP);
	// 	glVertex2f(x, y);
	// 	glVertex2f(x + 1, y);
	// 	glVertex2f(x + 1, y + 1);
	// 	glVertex2f(x, y + 1);
	// 	glEnd();
	// }
}

void Field::Draw(){

    for(GLint x = 0; x < this->x; ++x)
        for(GLint y = 0;y < this->y; ++y)
            Unit(x,y);
}
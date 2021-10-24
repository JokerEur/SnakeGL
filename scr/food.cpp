#include "field.h"
#include "food.h"

#include <time.h>
#include <iostream>

GLint Field::GetX(){return this->x;}
GLint Field::GetY(){return this->y;}

void Food::SetAvb(bool arg){
    this->avaliable = arg;
}

void Food::FoodRandom(Field& obj){
    GLint x_max = obj.GetX() - 2;
    GLint y_max = obj.GetY() - 2;
    srand(time(NULL));
    this->x = 1 + rand() % (x_max - 1);
    this->y = 1 + rand() % (y_max - 1);
}

void Food::Draw(Field &obj){

    if(avaliable){
        FoodRandom(obj);
    }
    this->avaliable = false;
    glColor3f(0,0,1);
    glRectf(this->x , this -> y, this-> x + 1, this-> y +1);

}






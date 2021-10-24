#include "player.h"


void Player::Draw(Field& grid, Food& food){

switch (this->PlayerDir)
	{
	case UP:
		this->y++;
		break;
	case DOWN:
		this->y--;
		break;
	case RIGHT:
		this->x++;
		break;
	case LEFT:
		this->x--;
	}

    glColor3f(0,1,0);

	glRectf(this->x,this->y , this->x + 1, this->y + 1);

	if (this->x == 0 || this->x == grid.GetX() - 1 || this->x == 0 || this->y == grid.GetY() - 1) {

		this->x = 20;
		this->y = 20;
	}

	if (this->x == food.GetX() && this->y == food.GetY()) {
		food.SetAvb(true);
	}

}











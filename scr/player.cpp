#include "player.h"

void Player::Draw(Field &grid, Food &food)
{

	for (GLint i = length - 1; i > 0; --i)
	{
		x[i] = x[i - 1];
		y[i] = y[i - 1];
	}

	switch (this->PlayerDir)
	{
	case UP:
		this->y[0]++;
		break;
	case DOWN:
		this->y[0]--;
		break;
	case RIGHT:
		this->x[0]++;
		break;
	case LEFT:
		this->x[0]--;
	}

	for(GLint i = 0; i < length ; ++i){
		
		if(i == 0){
			glColor3f(0.0, 1.0,0.0);
		}else{
			glColor3f(0.0,0.0,1.0);
		}
		glRectf(this->x[i], this->y[i], this->x[i] + 1, this->y[i] + 1);
	}

	if (this->x == 0 || this->x[0] == grid.GetX() - 1 || this->y[0] == 0 || this->y[0] == grid.GetY() - 1)
	{

	}

	if (this->x[0] == food.GetX() && this->y[0] == food.GetY())
	{

		++this->length;
		if(this->length > MAX_LENGTH)
			this->length = MAX_LENGTH;
		food.SetAvb(true);
	}
}

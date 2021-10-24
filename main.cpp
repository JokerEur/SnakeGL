#ifdef APPLE
#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <GL/GL.h>
#endif

#include "field.h"
#include "food.h"
#include "player.h"

#define COLUMNS 40
#define ROWS 40
#define FPS 60

//Field Grid(COLUMNS, ROWS);
Player Snake;
//Food Apple;
void Render();


void ResizeWindow(int, int);
void Init()
{
	glClearColor(0, 0, 0, 1);
}

void Keyboard(int key, int, int) {

	switch (key)
	{
	case GLUT_KEY_UP:
		if (Snake.PlayerDir != DOWN)
			Snake.PlayerDir = UP;
		break;
	case GLUT_KEY_DOWN:
		if (Snake.PlayerDir != UP)
			Snake.PlayerDir = DOWN;
		break;
	case GLUT_KEY_RIGHT:
		if (Snake.PlayerDir != LEFT)
			Snake.PlayerDir = RIGHT;
		break;
	case GLUT_KEY_LEFT:
		if (Snake.PlayerDir != RIGHT)
			Snake.PlayerDir = LEFT;
		break;
	}

}

void TimerCallback(int) {

	glutPostRedisplay();
	glutTimerFunc(10000 / FPS, TimerCallback, 0);

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(500, 500);
	glutCreateWindow("OpenGL Snake");
	glutDisplayFunc(Render);
	glutReshapeFunc(ResizeWindow);
	glutTimerFunc(0, TimerCallback, 0);
	glutSpecialFunc(Keyboard);
	Init();
	glutMainLoop();
	return 0;

}

void Render()
{
	// glClear(GL_COLOR_BUFFER_BIT);
	// Snake.Draw(Grid, Apple);
	// Apple.Draw(Grid);
	// Grid.Draw();
	// glutSwapBuffers();
}

void ResizeWindow(int w, int h)
{
	glViewport(0, 0, static_cast<GLsizei>(w), static_cast<GLsizei>(h));
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, COLUMNS, 0.0, ROWS, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
}



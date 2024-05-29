#include<iostream>
#include<glut.h>
using namespace std;



void display1()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 1, 1);

	double angle;
	int i, j;
	glBegin(GL_LINE_LOOP);
	for (j = 0; j <=50; j++)
	{
		for (i = 0; i <= 36; i++)
		{
			angle = 3.14 / 18*i;
			glVertex2f(20 * cos(angle), 20 * sin(angle) + j);
		}
	}
	glEnd();
	glFlush();

}

void myinit()
{
	gluOrtho2D(-100, 100, -100, 100);
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(	100, 100);

	glutCreateWindow("CYLINDER");
	myinit();
	glutDisplayFunc(display1);
	glutMainLoop();
}
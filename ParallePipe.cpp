#include<iostream>
#include<glut.h>
using namespace std;



void display1()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 1, 1);

	int i;
	glBegin(GL_LINE_LOOP);
		for (i = 0; i <= 300; i+=5)
		{
			glVertex2f(50+i,50+i);
			glVertex2f(100+i,50+i);
			glVertex2f(100+i,100+i);
			glVertex2f(50+i,100+i);
		}

	glEnd();
	glFlush();

}

void myinit()
{
	gluOrtho2D(0, 500, 0, 500);
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("Parallel pipe");
	myinit();
	glutDisplayFunc(display1);
	glutMainLoop();
}
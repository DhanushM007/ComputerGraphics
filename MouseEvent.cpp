/*#include<iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "enter the coordinates to display octant" << endl;
	cin >> x >> y;

	if (x > 0 && y > 0)
	{
		if (x >= y) cout << "1";
		else cout << "2";
	}
	else if (x < 0 && y>0)
	{
		if (fabs(x) < y) cout << "3";
		else cout << "4";
	}
	else if (x < 0 && y < 0)
	{
		if (fabs(x) > fabs(y)) cout << "5";
		else cout << "6";
	}
	else
	{
		if (fabs(y) > x) cout << "7";
		else cout << "8";
	}
	return 0;

}*/


#include<stdio.h>
#include<stdlib.h>
#include<glut.h>

int wh = 500, ww = 500;
float siz = 3;
void myinit()
{
	gluOrtho2D(0, wh, 0, ww);
}

void display()
{
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
}


void drawsq(int x,int  y)
{
	y = wh - y;
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex2f(x + siz, y + siz);
	glVertex2f(x - siz, y + siz);
	glVertex2f(x - siz, y - siz);
	glVertex2f(x + siz, y - siz);
	glEnd();
	glFlush();
}
void mymouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		drawsq(x, y);
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		exit(0);
	}
}

int main(int argc,char ** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);

	glutCreateWindow("MOUSE EVENT");
	myinit();
	glutDisplayFunc(display);
	glutMouseFunc(mymouse);
	glutMainLoop();
}





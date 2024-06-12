

#include<glut.h>
float red = 1.0, green = 1.0, blue = 1.0;

void myinit()
{
	gluOrtho2D(0, 500, 0, 500);
}



void display()
{
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(red, green, blue);
	glBegin(GL_POLYGON);
	glVertex2f(250, 250);
	glVertex2f(400, 250);
	glVertex2f(400, 350);
	glVertex2f(250, 350);
	glEnd();
	glFlush();
}
void mykey(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'r':
		red = 1.0;
		green = 0.0;
		blue = 0.0;
		break;

	case 'g':
		red = 0.0;
		green = 1.0;
		blue = 0.0;
		break;


	case 'b':
		red = 0.0;
		green = 0.0;
		blue = 1.0;
		break;

	case 'w':
		red = 1.0;
		green = 1.0;
		blue = 1.0;
		break;

	case 27:
		exit(0);
	}
	glutPostRedisplay();
}



int main(int argc, char ** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Change square color using keyboard keys");
	myinit();
	glutDisplayFunc(display);
	glutKeyboardFunc(mykey);
	glutMainLoop();
}





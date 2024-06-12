

#include<glut.h>
int w = 500, h = 500;
int sizef = 0;
void myinit()
{
	gluOrtho2D(0, w, 0, h);
}



void display()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2f(250 - sizef, 250 - sizef);
	glVertex2f(350 + sizef, 250 - sizef);
	glVertex2f(350 + sizef, 350 + sizef);
	glVertex2f(250 - sizef, 350 + sizef);
	glEnd();
	glFlush();
}
void my_menu(int op)
{
	if (op == 1)
		sizef += 5;
	else if (op == 2)
		sizef -= 5;
	else if (op == 3)
		sizef = 0;
	else if (op == 4)
		exit(0);

	glutPostRedisplay();

}

void mykey(unsigned char key, int x, int y)
{
	switch(key)
	{
	case 'i':
		sizef += 5;
		break;

	case 'd':
		sizef -= 5;
		break;

	case 'r':
		sizef = 0;
		break;

	case 'q':
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
	glutCreateWindow("Change square size using both keyboard keys and mouse click");
	myinit();
	glutDisplayFunc(display);
	glutCreateMenu(my_menu);
	glutAddMenuEntry("increase", 1);
	glutAddMenuEntry("decrease", 2);
	glutAddMenuEntry("Refresh", 3);
	glutAddMenuEntry("Quit", 4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutKeyboardFunc(mykey);
	glutMainLoop();
}





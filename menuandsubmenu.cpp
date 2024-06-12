

#include<glut.h>
float r = 1.0, g = 1.0, b = 1.0;
int sizef = 0;

void myinit()
{
	gluOrtho2D(0, 500, 0, 500);
}



void display()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(r, g, b);
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
	switch (op)
	{
	case 'r':
		r = 1.0;
		g = 0.0;
		b = 0.0;
		break;
	

	case 'g':
		r = 0.0;
		g = 1.0;
		b = 0.0;
		break;

	case 'b':
		r = 0.0;
		g = 0.0;
		b = 1.0;
		break;

	case 1:
		sizef += 10;
		break;

	case 2:
		
		sizef -= 10;
		break;
		

	case 3:
		exit(0);




	}
	glutPostRedisplay();

}



void createMenu()
{
	int subid = glutCreateMenu(my_menu);
	glutAddMenuEntry("red", 'r');
	glutAddMenuEntry("green", 'g');
	glutAddMenuEntry("blue", 'b');

	int mainid = glutCreateMenu(my_menu);
	glutAddMenuEntry("increase", 1);
	glutAddMenuEntry("decrease", 2);
	glutAddSubMenu("change color", subid);
	glutAddMenuEntry("quit", 3);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}

int main(int argc, char ** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("menu and submenu program");
	myinit();
	glutDisplayFunc(display);
	createMenu();
	glutMainLoop();
}





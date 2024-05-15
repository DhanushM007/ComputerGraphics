#include<glut.h>
void display1()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
	glColor3f(1, 1, 0);

	glVertex2i(50, 50);

	glVertex2i(300, 50);

	glVertex2i(300, 350);

	glVertex2i(50, 350);
	glEnd();


	glBegin(GL_LINE_LOOP);
	glColor3f(1, 0, 0);
	glVertex2i(50, 350);
	glVertex2i(175, 600);
	glVertex2i(300, 350);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3f(0, 1, 1);
	glVertex2i(150, 50);
	glVertex2i(150, 225);
	glVertex2i(200, 225);
	glVertex2i(200, 50);

	glEnd();

	



	
	glFlush();

}

void myinit()
{
	gluOrtho2D(0, 1000, 0, 1000);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Displaying square using line_loop");
	myinit();
	glutDisplayFunc(display1);
	glutMainLoop();
}

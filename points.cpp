#include<glut.h>
void display1()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10);
	glBegin(GL_POINTS);
		glColor3f(1, 0, 0);
		glVertex2i(0, 0);
		glColor3f(0, 1, 0);
		glVertex2i(20, 50);
	glEnd();
	glFlush();

}

void myinit()
{
	gluOrtho2D(0, 500, 0, 500);
}
int main(int argc,char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Displaying two points");
	myinit();
	glutDisplayFunc(display1);
	glutMainLoop();
}

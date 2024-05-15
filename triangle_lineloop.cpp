#include<glut.h>
void display1()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_LINE_LOOP);
	glColor3f(1, 1, 0);

	glVertex2i(50, 50);
	glVertex2i(150, 50);
	glVertex2i(100, 100);
	

	glEnd();
	glFlush();

}

void myinit()
{
	gluOrtho2D(0, 500, 0, 500);
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Displaying triangles using lines");
	myinit();
	glutDisplayFunc(display1);
	glutMainLoop();
}

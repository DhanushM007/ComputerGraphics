#include<glut.h>
#include<math.h>
void display1()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 1, 0);

	glBegin(GL_LINE_LOOP);
	glVertex2i(-1000, 0);
	glVertex2i(1000, 0);
	glVertex2i(0, 1000);
	glVertex2i(0, -1000);
	glEnd();


	glFlush();

}

void myinit()
{
	gluOrtho2D(-1000, 1000, -1000, 1000);
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

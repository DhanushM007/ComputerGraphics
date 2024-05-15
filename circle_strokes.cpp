#include<glut.h>
#include<math.h>
void display1()
{
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	int i;
	double angle;


	glColor3f(0, 1, 0);
	glBegin(GL_LINES);
	glColor3f(1, 1, 0);
	glVertex2i(-1000, 0);
	glVertex2i(1000, 0);

	glVertex2i(0, 1000);
	glVertex2i(0, -1000);
	glEnd();
	glBegin(GL_LINES);
	for (i = 0; i <= 36; i++)
	{
		angle = 3.14 / 18 * i;
		glVertex2f(200 * cos(angle), 200 * sin(angle));
		glVertex2f(400 * cos(angle), 400 * sin(angle));

	}

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

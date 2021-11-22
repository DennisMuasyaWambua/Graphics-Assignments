#include<GL/glut.h>
#include <math.h>

 
void DrawHalfCircle()
{    
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT); 
	int number = 20;
	float radius = 0.4f; 
	float twopi =1.05* 3.142;
	glMatrixMode(GL_MODELVIEW); //operate in model view
	glLoadIdentity();//after every matrixmode, loadidentity is used.

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 1.0f, 0.0f);
	//glVertex2f(0.0f, 0.0f); 

	for (int i = 0; i < 20; i++)
	{
		glVertex2f(radius * cosf(i * twopi / number), radius * sinf(i * twopi / number));

	}
	
	glTranslatef(0.5f, 0.0f, 0.0f);
		glEnd();
	glFlush();
}


int main()

{
	int argc = 1;
	char* argv[1] = { (char*)"Something" };
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480); //width and height
	glutInitWindowPosition(0, 50); //bottom-left corner
	glutCreateWindow("drawing half a circle");
	glutDisplayFunc(DrawHalfCircle);
	glutMainLoop(); //loops itself again and again
	return 0;
}
#include <iostream>
#include <GL/glut.h>

void display()
{
	glClearColor(1.0f, 0.25f, 1.0f, 1.0f); // ��� color ����
	glClear(GL_COLOR_BUFFER_BIT);		   // ������ color�� ��� �ʱ�ȭ
	
	glColor3f(0.5f, 0.25f, 0.68f);		   // ������ ����
	glBegin(GL_TRIANGLES);				   // ���� Ÿ�� ����
	glVertex2f(-0.5f, -0.2f);				// ���� ��ǥ ����
	glVertex2f(0.4f, -0.4f);
	glVertex2f(-0.97f, 0.2f);
	glEnd();

	glFinish();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
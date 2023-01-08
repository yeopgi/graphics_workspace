#include <iostream>
#include <GL/glut.h>

void display()
{
	glClearColor(1.0f, 0.25f, 1.0f, 1.0f); // ��� color ����
	glClear(GL_COLOR_BUFFER_BIT);		   // ������ color�� ��� �ʱ�ȭ
	
	glColor3f(0.5f, 0.25f, 0.68f);		   // ������ ����
	glBegin(GL_POLYGON);				   // ���� Ÿ�� ����
	glVertex2f(-0.5f, -0.5f);				// ���� ��ǥ ����
	glVertex2f(0.5f, -0.5f);       // y�� ��Ī
	glVertex2f(0.5f, 0.5f);		// ���� ��Ī
	glVertex2f(-0.5f, 0.5f);		// x�� ��Ī
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
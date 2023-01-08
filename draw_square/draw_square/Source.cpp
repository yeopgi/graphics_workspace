#include <iostream>
#include <GL/glut.h>

void display()
{
	glClearColor(1.0f, 0.25f, 1.0f, 1.0f); // 배경 color 지정
	glClear(GL_COLOR_BUFFER_BIT);		   // 지정한 color로 배경 초기화
	
	glColor3f(0.5f, 0.25f, 0.68f);		   // 도형색 지정
	glBegin(GL_POLYGON);				   // 도형 타입 선언
	glVertex2f(-0.5f, -0.5f);				// 도형 좌표 선언
	glVertex2f(0.5f, -0.5f);       // y축 대칭
	glVertex2f(0.5f, 0.5f);		// 원점 대칭
	glVertex2f(-0.5f, 0.5f);		// x축 대칭
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
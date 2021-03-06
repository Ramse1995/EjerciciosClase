//Nombre: Ramses Saldivar Juarez
//Numero de practica:3
//Version VS 2017
//instrucciones*//

//#include <gl/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
//#include <stdlib.h>
#include "Main.h"

float angleX = 0.0f;
float angleY = 0.0f;
float angleZ = 0.0f;
float transX = 0.0f;
float transY = 0.0f;
float transZ = -5.0f;


void InitGL(GLvoid)     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice[8][3] = {
				{1.5 ,-0.5, 0.5},    //Coordenadas V�rtice 0 V0
				{-1.5 ,-0.5, 0.5},    //Coordenadas V�rtice 1 V1
				{-1.5 ,-0.5, -0.5},    //Coordenadas V�rtice 2 V2
				{1.5 ,-0.5, -0.5},    //Coordenadas V�rtice 3 V3
				{1.5 ,0.5, 0.5},    //Coordenadas V�rtice 4 V4
				{1.5 ,0.5, -0.5},    //Coordenadas V�rtice 5 V5
				{-1.5 ,0.5, -0.5},    //Coordenadas V�rtice 6 V6
				{-1.5 ,0.5, 0.5},    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaC(void)
{
	GLfloat vertice[8][3] = {
	{ 0.5 ,-4.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ -1.5 ,-4.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ -1.5 ,-4.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 0.5 ,-4.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 0.5 ,0.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 0.5 ,0.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ -1.5 ,0.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ -1.5 ,0.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaCc(void)
{
	GLfloat vertice[8][3] = {
	{ 5.5 ,-4.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ -1.5 ,-4.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ -1.5 ,-4.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 5.5 ,-4.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 5.5 ,-5.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 5.5 ,-5.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ -1.5 ,-5.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ -1.5 ,-5.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
///////////////////////////////////////////////////////////////////////ggggg
void prismaG(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,-0.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ 6.5 ,-0.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ 6.5 ,-0.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 12.5 ,-0.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 12.5 ,0.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 12.5 ,0.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ 6.5 ,0.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ 6.5 ,0.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaGg(void)
{
	GLfloat vertice[8][3] = {
	{ 7.5 ,-4.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ 6.5 ,-4.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ 6.5 ,-4.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 7.5 ,-4.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 7.5 ,0.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 7.5 ,0.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ 6.5 ,0.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ 6.5 ,0.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 1.6f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaGgG(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,-4.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ 6.5 ,-4.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ 6.5 ,-4.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 12.5 ,-4.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 12.5 ,-5.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 12.5 ,-5.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ 6.5 ,-5.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ 6.5 ,-5.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaGgg(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,-4.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ 11.5 ,-4.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ 11.5 ,-4.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 12.5 ,-4.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 12.5 ,-2.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 12.5 ,-2.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ 11.5 ,-2.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ 11.5 ,-2.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 1.6f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaGggg(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,-4.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ 6.5 ,-4.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ 6.5 ,-4.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 12.5 ,-4.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 12.5 ,-5.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 12.5 ,-5.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ 6.5 ,-5.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ 6.5 ,-5.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaGG(void)
{
	GLfloat vertice[8][3] = {
	{ 12.5 ,-2.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ 9.5 ,-2.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ 9.5 ,-2.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 12.5 ,-2.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 12.5 ,-3.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 12.5 ,-3.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ 9.5 ,-3.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ 9.5 ,-3.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
//////////////////////////////////////RRRRRRRRRRRRRR
void prismaR(void)
{
	GLfloat vertice[8][3] = {
	{ 18.5 ,-0.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ 13.5 ,-0.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ 13.5 ,-0.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 18.5 ,-0.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 18.5 ,0.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 18.5 ,0.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ 13.5 ,0.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ 13.5 ,0.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}


void prismaRr(void)
{
	GLfloat vertice[8][3] = {
	{ 14.5 ,-5.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ 13.5 ,-5.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ 13.5 ,-5.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 14.5 ,-5.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 14.5 ,0.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 14.5 ,0.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ 13.5 ,0.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ 13.5 ,0.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaRrr(void)
{
	GLfloat vertice[8][3] = {
	{ 18.5 ,-2.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ 17.5 ,-2.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ 17.5 ,-2.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 18.5 ,-2.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 18.5 ,0.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 18.5 ,0.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ 17.5 ,0.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ 17.5 ,0.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaRR(void)
{
	GLfloat vertice[8][3] = {
	{ 18.5 ,-2.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ 13.5 ,-2.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ 13.5 ,-2.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 18.5 ,-2.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 18.5 ,-1.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 18.5 ,-1.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ 13.5 ,-1.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ 13.5 ,-1.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaRrrr(void)
{
	GLfloat vertice[8][3] = {
	{ 17.5 ,-3.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ 16.5 ,-3.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ 16.5 ,-3.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 17.5 ,-3.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 17.5 ,-2.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 17.5 ,-2.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ 16.5 ,-2.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ 16.5 ,-2.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void prismaRrrrr(void)
{
	GLfloat vertice[8][3] = {
	{ 18.5 ,-3.5, 0.5 },    //Coordenadas V�rtice 0 V0
	{ 17.5 ,-3.5, 0.5 },    //Coordenadas V�rtice 1 V1
	{ 17.5 ,-3.5, -0.5 },    //Coordenadas V�rtice 2 V2
	{ 18.5 ,-3.5, -0.5 },    //Coordenadas V�rtice 3 V3
	{ 18.5 ,-5.5, 0.5 },    //Coordenadas V�rtice 4 V4
	{ 18.5 ,-5.5, -0.5 },    //Coordenadas V�rtice 5 V5
	{ 17.5 ,-5.5, -0.5 },    //Coordenadas V�rtice 6 V6
	{ 17.5 ,-5.5, 0.5 },    //Coordenadas V�rtice 7 V7
	};


	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	//Poner C�digo Aqu�.

	glTranslatef(transX, transY, transZ);
	prisma();
	glTranslatef(2.0f, 0.0f, 0.0f);//funcion de posisicion, es acomuativo el nuevo margen de referencia es la pocsicion del siguiente prisma
	prisma();
	glTranslatef(-4.0f, 0.0f, 0.0f);
	prisma();
	prismaC();
	prismaCc();
	prismaG();
	prismaGg();
	prismaGgG();
	prismaGgg();
	prismaGG();
	prismaR();
	prismaRr();
	prismaRrr();
	prismaRR();
	prismaRrrr();
	prismaRrrrr();
	glutSwapBuffers();
	//glFlush();
	// Swap The Buffers
}

void reshape(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.1,20);	
	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 50.0);
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 'w':
	case 'W':
		transZ += 0.2f;
		printf("Posicion en Z: %f\n", transZ);
		break;
	case 's':
	case 'S':
		transZ -= 0.2f;
		printf("Posicion en Z: %f\n", transZ);
		break;
	case 'a':
	case 'A':
		transX -= 0.2f;
		break;
	case 'd':
	case 'D':
		transX += 0.2f;
		break;
	case 'q':
	case 'Q':
		transY += 0.2f;
		break;
	case 'e':
	case 'E':
		transY -= 0.2f;
		break;
	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;
	default:        // Cualquier otra
		break;
	}
	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		angleX += 1.0f;
		break;
		//glutFullScreen ( ); // Full Screen Mode
		//break;
	case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		angleX -= 1.0f;
		break;
		//glutReshapeWindow ( 500, 500 ); // Cambiamos tamano de Ventana
		//break;
	case GLUT_KEY_LEFT:
		angleY += 1.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 1.0f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	//glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	glutInitWindowSize(500, 500);	// Tama�o de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 3"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut funci�n de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut funci�n en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut funci�n de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutMainLoop();          // 

	return 0;
}




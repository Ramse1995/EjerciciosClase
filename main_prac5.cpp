//Ramses Saldivar Juarez
//visual 2017
//práctica 5
//moviento de un brazo 

#include "Main.h"

float transZ = -5.0f;
float transX = 0.0f;
float angleX = 0.0f;
float angleY = 0.0f;
int screenW = 0.0;
int screenH = 0.0;
float anguloCodo = 0.0;
float anguloHombro = 0.0;
float anguloMano = 0.0;
float anguloPulgar = 0.0;
float pulgar = 0.0;
float falange1 = 0.0;
float falange2 = 0.0;
float falange3 = 0.0;


GLfloat Position[] = { 0.0f, 3.0f, 0.0f, 1.0f };			// Light Position
GLfloat Position2[] = { 0.0f, 0.0f, -5.0f, 1.0f };			// Light Position

void InitGL(void)     // Inicializamos parametros
{

	glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing

	//Configuracion luz
	glLightfv(GL_LIGHT0, GL_POSITION, Position);
	glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, Position2);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);


	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glEnable(GL_COLOR_MATERIAL);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice[8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
	};

	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(transX, 0.0f, transZ);
	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	//Poner Código Aquí.
//hombro
	glRotatef(anguloHombro, 0.0, 0.0, 1.0);
	glPushMatrix();
	glScalef(1, 2, 2);
	glColor3f(0, 1, 0);
	prisma();
	glPopMatrix();
	//bicep
	glPushMatrix();
	glTranslatef(2, 0, 0);
	glScalef(3, 2, 2);
	glColor3f(1, 0, 0);
	prisma();
	glPopMatrix();
	//codo
	glRotatef(anguloCodo, 0.0f, 0.0f, 1.0);
	glPushMatrix();
	glTranslatef(3.75, 0, 0);
	glScalef(0.5, 2, 2);
	glColor3f(0, 0, 1);
	prisma();
	glPopMatrix();

	//antebrazo

	glPushMatrix();
	glTranslatef(6, 0, 0);
	glScalef(4, 2, 2);
	glColor3f(1.5, 0.10, 0.52);
	prisma();
	glPopMatrix();
	//muñeca
	glPushMatrix();
	glTranslatef(8.25, 0, 0);
	glScalef(0.5, 2, 2);
	glColor3f(0.72, 1.52, 1.99);
	prisma();
	glPopMatrix();
	//mano
	glRotatef(anguloMano, 1.0, 0.0, 0.0);
	glPushMatrix();
	glTranslatef(9.50, 0, 0);
	glScalef(2, 2, 1);
	glColor3f(1.0, 0.0, 0.0);
	prisma();
	glPopMatrix();
	//pulgar falange 1

	glPushMatrix();

	glTranslatef(10.0, 1.25, 0);
	glScalef(0.4, 0.75, 0.5);
	glColor3f(0.0, 0.0, 1.0);
	prisma();
	glPopMatrix();
	//pulgar falange 2

	glPushMatrix();
	glRotatef(anguloPulgar, 1.0, 1.0, 0.0);
	glTranslatef(10.0, 1.75, 0);
	glScalef(0.4, 0.75, 0.5);
	glColor3f(0.25, 0.45, 0.65);
	prisma();
	glPopMatrix();
	//indice falange 1
	glRotatef(falange1, 1.0, 1.0, 0.0);
	glPushMatrix();
	glTranslatef(10.75, 0.90, 0);
	glScalef(0.5, 0.2, 0.5);
	glColor3f(0.25, 0.45, 0.65);
	prisma();
	glPopMatrix();
	//indice falange 2

	glPushMatrix();
	glRotatef(falange2, 1.0, 1.0, 0.0);
	glTranslatef(11.25, 0.90, 0);
	glScalef(0.5, 0.2, 0.5);
	glColor3f(251,255,0);
	prisma();
	glPopMatrix();
	//indice falange 3
	glPushMatrix();
	glRotatef(falange2, 1.0, 1.0, 0.0);
	glRotatef(falange3, 1.0, 1.0, 0.0);
	glTranslatef(11.75, 0.90, 0);
	glScalef(0.5, 0.2, 0.5);
	glColor3f(1.0, 0.0, 1.0);
	prisma();
	glPopMatrix();
	//dedo medio falange 1
	glPushMatrix();
	glTranslatef(10.75, 0.40, 0);
	glScalef(0.5, 0.2, 0.5);
	glColor3f(0.25, 0.45, 0.65);
	prisma();
	glPopMatrix();
	//dedo medio falange 2

	glPushMatrix();
	glRotatef(falange2, 1.0, 1.0, 0.0);
	glTranslatef(11.25, 0.40, 0);
	glScalef(0.5, 0.2, 0.5);
	glColor3f(251, 255, 0);
	prisma();
	glPopMatrix();
	//dedo medio falange 3
	glPushMatrix();
	glRotatef(falange2, 1.0, 1.0, 0.0);
	glRotatef(falange3, 1.0, 1.0, 0.0);
	glTranslatef(11.75, 0.40, 0);
	glScalef(0.5, 0.2, 0.5);
	glColor3f(1.0, 0.0, 1.0);
	prisma();
	glPopMatrix();
	//anular falange 1
	glPushMatrix();
	glTranslatef(10.75, -0.2, 0);
	glScalef(0.5, 0.2, 0.5);
	glColor3f(0.25, 0.45, 0.65);
	prisma();
	glPopMatrix();
	//anular falange 2
	glPushMatrix();
	glRotatef(falange2, 1.0, 1.0, 0.0);
	glTranslatef(11.25, -0.20, 0);
	glScalef(0.5, 0.2, 0.5);
	glColor3f(251, 255, 0);
	prisma();
	glPopMatrix();
	//anular falange 3
	glPushMatrix();
	glRotatef(falange2, 1.0, 1.0, 0.0);
	glRotatef(falange3, 1.0, 1.0, 0.0);
	glTranslatef(11.75, -0.20, 0);
	glScalef(0.5, 0.2, 0.5);
	glColor3f(1.0, 0.0, 1.0);
	prisma();
	glPopMatrix();
	//meñique falange 1
	glPushMatrix();
	glTranslatef(10.75, -0.90, 0);
	glScalef(0.5, 0.2, 0.5);
	glColor3f(0.25, 0.45, 0.65);
	prisma();
	glPopMatrix();
	//meñique falange 2
	glPushMatrix();
	glRotatef(falange2, 1.0, 1.0, 0.0);
	glTranslatef(11.25, -0.90, 0);
	glScalef(0.5, 0.2, 0.5);
	glColor3f(251, 255, 0);
	prisma();
	glPopMatrix();
	//meñique falange 3
	glPushMatrix();
	glRotatef(falange2, 1.0, 1.0, 0.0);
	glRotatef(falange3, 1.0, 1.0, 0.0);
	glTranslatef(11.75, -0.90, 0);
	glScalef(0.5, 0.2, 0.5);
	glColor3f(1.0, 0.0, 1.0);
	prisma();
	glPopMatrix();



	glutSwapBuffers();
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
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	//glLoadIdentity();									
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 'w':
	case 'W':
		transZ += 0.2f;
		break;
	case 's':
	case 'S':
		transZ -= 0.2f;
		break;
	case 'a':
	case 'A':
		transX += 0.2f;
		break;
	case 'd':
	case 'D':
		transX -= 0.2f;
		break;
	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;
	default:        // Cualquier otra
		break;
	case 'Q':
		anguloHombro += 0.5f;
		printf("%f \n", anguloHombro);
		if (anguloHombro >= 45) {
			anguloHombro = 45;                  //movimiento del hombro
		}

		printf("%f \n", anguloHombro);
		break;
	case 'q':
		anguloHombro -= 0.5f;
		printf("%f \n", anguloHombro);
		if (anguloHombro <= -45) {
			anguloHombro = -45;
		}

		break;
	case 'E':
		anguloCodo += 0.5f;
		printf("%f \n", anguloCodo);
		if (anguloCodo >= 11) {
			anguloCodo = 11;                  //movimiento del antebrazo
		}

		printf("%f \n", anguloCodo);
		break;
	case 'e':
		anguloCodo -= 0.5f;
		printf("%f \n", anguloCodo);
		if (anguloCodo <= 0) {
			anguloCodo = 0;
		}

		break;
	case 'f':
		anguloMano += 0.5f;
		printf("%f \n", anguloMano);
		if (anguloMano >= 38) {
			anguloMano = 38;                  //movimiento de la mano
		}

		printf("%f \n", anguloCodo);
		break;
	case 'F':
		anguloMano -= 0.5f;
		printf("%f \n", anguloMano);
		if (anguloMano <= -38) {
			anguloMano = -38;
		}

		break;
	case 't':
		anguloPulgar += 0.5f;
		pulgar = 0.2f;
		printf("%f \n", anguloPulgar);
		if (anguloPulgar <= 0) {
			anguloPulgar = 0;                  //movimiento del pulgar
		}

		printf("%f \n", anguloPulgar);
		break;
	case 'T':
		anguloPulgar -= 0.5f;
		pulgar = 0.2f;
		printf("%f \n", anguloPulgar);
		if (anguloPulgar <= -4) {
			anguloPulgar = -4;
		}

		break;
	case 'x':
		falange1 += 0.5f;
		printf("%f \n", falange1);
		if (falange1 >= 6) {
			falange1 = 6;                  //movimiento de la primera falange de todos los dedos
		}

		printf("%f \n", falange1);
		break;
	case 'X':
		falange1 -= 0.5f;
		printf("%f \n", falange1);
		if (falange1 <= 0) {
			falange1 = 0;
		}

		break;
		break;
	case 'c':
		falange2 += 0.5f;
		printf("%f \n", falange2);
		if (falange2 >= 10) {
			falange2 = 10;                  //movimiento de la segunda falange de todos los dedos
		}

		printf("%f \n", falange2);
		break;
	case 'C':
		falange2 -= 0.5f;
		printf("%f \n", falange2);
		if (falange2 <= 0) {
			falange2 = 0;
		}

		break;
	case 'r':
		falange3 += 0.5f;
		printf("%f \n", falange3);
		if (falange3 >= 4) {
			falange3 = 4;                  //movimiento de la tercera falange de todos los dedos
		}

		printf("%f \n", falange3);
		break;
	case 'R':
		falange3 -= 0.5f;
		printf("%f \n", falange3);
		if (falange3 <= 0) {
			falange3 = 0;
		}

		break;
	}
	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		angleX += 2.0f;
		break;
	case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		angleX -= 2.0f;
		break;
	case GLUT_KEY_LEFT:
		angleY += 2.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 2.0f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	screenW = glutGet(GLUT_SCREEN_WIDTH);
	screenH = glutGet(GLUT_SCREEN_HEIGHT);
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 5"); // Nombre de la Ventana
	printf("Resolution H: %i \n", screenW);
	printf("Resolution V: %i \n", screenH);
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutMainLoop();          // 

	return 0;
}





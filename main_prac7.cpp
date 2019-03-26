//Nombre: Ramses Saldivar Juarez
//Numero de practica: 7
//Version VS 2017
#include "Main.h"


// Variables used to calculate frames per second: (Windows)
DWORD dwFrames = 0;
DWORD dwCurrentTime = 0;
DWORD dwLastUpdateTime = 0;
DWORD dwElapsedTime = 0;


//Variables used to create movement
float angleX = 0.0f;
float angleY = 0.0f;
float angleZ = 0.0f;
float transX = 0.0f;
float transY = 0.0f;
float transZ = 0.0f;

float LightAngle = 30.0f;

bool	light = false;		// Luz ON/OFF
bool	positional = true;

static int spin = 0;
int sol = 0;
int mercurio = 0;
int venus = 0;
int tierra = 0;
int marte = 0;
int jupiter = 0;
int saturno = 0;
int urano = 0;
int neptuno = 0;
int luna = 0;
float camaraZ = 0.0;
float camaraX = 0.0;

GLfloat SunDiffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };			// Diffuse Light Values
GLfloat SunSpecular[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
GLfloat SunPosition[] = { 0.0f, 0.0f, 0.0f, 1.0f };			// Light Position
GLfloat EarthDiffuse[] = { 0.2f, 0.2f, 1.0f, 1.0f };			// Tierra
GLfloat EarthSpecular[] = { 0.8, 0.8, 0.8, 1.0 };
GLfloat EarthShininess[] = { 50.0 };
GLfloat MoonDiffuse[] = { 0.5f, 0.5f, 0.5f, 0.5f };			// Luna
GLfloat MoonSpecular[] = { 0.5, 0.5, 0.5, 0.5 };
GLfloat MoonShininess[] = { 40.0 };
GLfloat MarsDiffuse[] = { 0.8f, 0.4f, 0.1f, 1.0f };			// Marte
GLfloat MarsSpecular[] = { 1.0, 0.5, 0.0, 1.0 };
GLfloat MarsShininess[] = { 50.0 };


GLfloat LightAmbient[] = { 0.0f, 0.0f, 0.0f, 1.0f }; 			// Ambient Light Values
GLfloat LightDiffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };				// Diffuse Light Values
GLfloat LightSpecular[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
GLfloat LightPosition[] = { 0.0f, 0.0f, 0.0f, 1.0f };			// Light Position
GLfloat LightPosition1[] = { 0.0f, 0.0f, 1.0f, 0.0f };			// Light Position
GLfloat LightDirection[] = { 0.0f, 0.0f, -2.0f };			// Light Position

GLfloat mat_ambient[] = { 1.0, 1.0, 0.0, 1.0 };					// Color background
GLfloat mat_diffuse[] = { 1.0, 1.0, 0.0, 1.0 };					// Object Color main
GLfloat mat_specular[] = { 1.0, 1.0, 0.0, 1.0 };				// Specular color
GLfloat mat_shininess[] = { 90.0 };

GLfloat v_ambient[] = { 0.937, 0.286, 0.062, 1.0 };					// Color background
GLfloat v_diffuse[] = { 0.937, 0.286, 0.062, 1.0 };					// Object Color main
GLfloat v_specular[] = { 0.937, 0.286, 0.062, 1.0 };				// Specular color
GLfloat v_shininess[] = { 100.0 };


GLfloat m_ambient[] = { 0.952, 0.635, 0.203, 1.0 };					// Color background
GLfloat m_diffuse[] = { 0.952, 0.635, 0.203, 1.0 };					// Object Color main
GLfloat m_specular[] = { 0.952, 0.635, 0.203, 1.0 };				// Specular color
GLfloat m_shininess[] = { 100.0 };

GLfloat t_ambient[] = { 0.0705, 0.403, 0.945, 1.0 };					// Color background
GLfloat t_diffuse[] = { 0.0705, 0.403, 0.945, 1.0 };					// Object Color main
GLfloat t_specular[] = { 0.0705, 0.403, 0.945, 1.0 };				// Specular color
GLfloat t_shininess[] = { 100.0 };

GLfloat lu_ambient[] = { 130, 130, 130, 1.0 };					// Color background
GLfloat lu_diffuse[] = { 130, 130, 130, 1.0 };					// Object Color main
GLfloat lu_specular[] = { 130, 130, 130, 1.0 };				// Specular color
GLfloat lu_shininess[] = { 50.0 };

GLfloat ma_ambient[] = { 1.0, 0.0, 0.0, 1.0 };					// Color background
GLfloat ma_diffuse[] = { 1.0, 0.0, 0.0, 1.0 };					// Object Color main
GLfloat ma_specular[] = { 1.0, 0.0, 0.0, 1.0 };				// Specular color
GLfloat ma_shininess[] = { 100.0 };


void InitGL(GLvoid)     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo

	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

	glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo

	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);

	//glEnable (GL_COLOR_MATERIAL);
	glLightfv(GL_LIGHT1, GL_AMBIENT, LightAmbient);				// Setup The Ambient Light
	glLightfv(GL_LIGHT1, GL_DIFFUSE, LightDiffuse);				// Setup The Diffuse Light
	glLightfv(GL_LIGHT1, GL_SPECULAR, LightSpecular);				// Setup The Diffuse Light
																	//glLightfv(GL_LIGHT1, GL_POSITION,LightPosition);			// Position The Light
																	//glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION,LightDirection);			// Direction Of The Light

																	//glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT1);							// Enable Light One
													//glEnable(GL_LIGHT0);


}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	if (positional)
		glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, LightAngle);			// Position The Light


	glPushMatrix();

	glTranslatef(0.0, 0.0, -5.0);

	glPushMatrix(); //Esfera que representa a nuestra fuente de Luz
					//Este código es para que la fuente de luz gire
	glRotatef(spin, 1.0, 0.0, 0.0);
	glTranslatef(0.0, 0.0, 4.5);
	if (positional)
	{
		glLightfv(GL_LIGHT1, GL_POSITION, LightPosition);
		glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, LightDirection);
	}
	else
		glLightfv(GL_LIGHT1, GL_POSITION, LightPosition1);

	glPushMatrix();
	glDisable(GL_LIGHTING);
	glColor3f(1.0, 1.0, 0.0);

	glutSolidSphere(0.07, 10, 10);
	if (!light)
	{
		glDisable(GL_LIGHTING);
	}
	else
	{
		glEnable(GL_LIGHTING);
	}
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(transX, transY, transZ);
	glRotatef(angleX, 1.0f, 0.0f, 0.0f);
	glRotatef(angleZ, 0.0f, 0.0f, 1.0f);
	glRotatef(angleY, 0.0f, 1.0f, 0.0f);
	glColor3f(1.0, 0.0, 0.0);
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glutSolidSphere(2.0, 20, 20);
	//prisma();

	glPopMatrix();


	glPopMatrix();
	










	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glTranslatef(camaraX, 0.0, -10.0 + camaraZ);//camara
												//sol
	glPushMatrix();
	glPushMatrix();
	glRotatef(sol, 0.0, 1.0, 0.0);	//El Sol gira sobre su eje
	glColor3f(255.0, 255.0, 0.0);	//Sol amarillo
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glutSolidSphere(2.7, 30, 30);  //Draw Sun (radio,H,V);
	glPopMatrix();
	//mercurio
	glPushMatrix();
	glRotatef(mercurio, 0, 1, 1);//Traslacion mercurio 
	glTranslatef(5, 0, 0);
	glColor3f(0.937, 0.286, 0.062);
	glRotatef(mercurio, 1, 0, 0);//rotacion mercurio 
	glMaterialfv(GL_FRONT, GL_AMBIENT, v_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, v_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, v_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, v_shininess);
	glutSolidSphere(0.5, 20, 20);

	glPopMatrix();

	glPushMatrix();//Venus
	glRotatef(venus, 0, 1, 1);//Traslacion Venus 
	glTranslatef(7, 0, 0);
	glColor3f(0.952, 0.635, 0.203);
	glRotatef(venus, 1, 0, 0);//rotacion Venus
	glMaterialfv(GL_FRONT, GL_AMBIENT, m_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, m_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, m_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, m_shininess);
	glutSolidSphere(0.5, 30, 30);
	glPopMatrix();

	//tierra
	glPushMatrix();//tierra
	glRotatef(tierra, 0, 1, 1);//Traslacion tierrra
	glTranslatef(10, 0, 0);
	glColor3f(0.0705, 0.403, 0.945);
	glRotatef(tierra, 1, 0, 0);//rotacion tierra
	glMaterialfv(GL_FRONT, GL_AMBIENT, t_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, t_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, t_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, t_shininess);
	glutSolidSphere(0.5, 30, 30);
	glPushMatrix();
	glRotatef(luna, 1, 0, 0);//Traslacion luna
	glTranslatef(2, 0, 0);
	glColor3f(1.0, 1.0, 1.0);
	glRotatef(luna, 1, 0, 0);//rotacion luna
	glMaterialfv(GL_FRONT, GL_AMBIENT, lu_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, lu_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, lu_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, lu_shininess);
	glutSolidSphere(0.25, 30, 30);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();//marte
	glRotatef(marte, 0, 1, 1);//Traslacion marte 
	glTranslatef(13, 0, 0);
	glColor3f(1.0, 0.0, 0.0);
	glRotatef(marte, 1, 0, 0);//rotacion marte 
	glMaterialfv(GL_FRONT, GL_AMBIENT, ma_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, ma_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, ma_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, ma_shininess);
	glutSolidSphere(0.5, 30, 30);
	glPushMatrix();
	glRotatef(luna, 1, 0, 0);//Traslacion luna
	glTranslatef(2, 0, 0);
	glColor3f(1.0, 1.0, 1.0);
	glRotatef(luna, 1, 0, 0);//rotacion luna
	glMaterialfv(GL_FRONT, GL_AMBIENT, lu_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, lu_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, lu_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, lu_shininess);
	glutSolidSphere(0.25, 30, 30);
	glPopMatrix();
	glPushMatrix();
	glRotatef(luna, 0, 0, 1);//Traslacion luna
	glTranslatef(2, 0, 0);
	glColor3f(1.0, 1.0, 1.0);
	glRotatef(luna, 1, 0, 0);//rotacion luna
	glutSolidSphere(0.25, 30, 30);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();//jupiter
	glRotatef(jupiter, 0, 1, 1);//Traslacion jupiter
	glTranslatef(16, 0, 0);
	glColor3f(0.517, 0.419, 0.13337);
	glRotatef(jupiter, 8, 0, 0);//rotacion jupiter 
	glutSolidSphere(2.0, 30, 30);
	glutWireTorus(0., 3.3, 1.0, 32.0);
	glutWireTorus(0., 3.7, 4.0, 32.0);
	glutWireTorus(0., 3.9, 4.0, 32.0);
	glPushMatrix();
	glRotatef(luna, 1, 0, 0);//Traslacion luna
	glTranslatef(2, 0, 0);
	glColor3f(1.0, 1.0, 1.0);
	glRotatef(luna, 1, 0, 0);//rotacion luna
	glutSolidSphere(0.25, 30, 30);
	glPopMatrix();
	glPushMatrix();
	glRotatef(luna, 0, 0, 1);//Traslacion luna
	glTranslatef(2, 0, 0);
	glColor3f(1.0, 1.0, 1.0);
	glRotatef(luna, 1, 0, 0);//rotacion luna
	glutSolidSphere(0.25, 30, 30);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();//saturno
	glRotatef(saturno, 0, 1, 1);//Traslacion saturno
	glTranslatef(19, 0, 0);
	glColor3f(1.0, 1.0, 0.0);
	glRotatef(saturno, 1, 0, 0);//rotacion saturno
	glutSolidSphere(1.0, 30, 30);
	glutSolidTorus(0., 2.3, 1.0, 32.0);
	glPushMatrix();
	glRotatef(luna, 1, 0, 0);//Traslacion luna
	glTranslatef(2, 0, 0);
	glColor3f(1.0, 1.0, 1.0);
	glRotatef(luna, 1, 0, 0);//rotacion luna
	glutSolidSphere(0.25, 30, 30);
	glPopMatrix();
	glPushMatrix();
	glRotatef(luna, 0, 0, 1);//Traslacion luna
	glTranslatef(2, 0, 0);
	glColor3f(1.0, 1.0, 1.0);
	glRotatef(luna, 1, 0, 0);//rotacion luna
	glutSolidSphere(0.25, 30, 30);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();//urano
	glRotatef(urano, 0, 1, 1);//Traslacion  Urano
	glTranslatef(21, 0, 0);
	glColor3f(0.133337, 0.9001, 0.713);
	glRotatef(urano, 1, 0, 0);//rotacion Urano
	glTranslatef(21, 0, 0);
	glutSolidSphere(0.5, 30, 30);
	glPushMatrix();
	glRotatef(luna, 1, 0, 0);//Traslacion luna
	glTranslatef(2, 0, 0);
	glColor3f(1.0, 1.0, 1.0);
	glRotatef(luna, 1, 0, 0);//rotacion luna
	glutSolidSphere(0.25, 30, 30);
	glPopMatrix();
	glPushMatrix();
	glRotatef(luna, 0, 0, 1);//Traslacion luna
	glTranslatef(2, 0, 0);
	glColor3f(1.0, 1.0, 1.0);
	glRotatef(luna, 1, 0, 0);//rotacion luna
	glutSolidSphere(0.25, 30, 30);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();//neptuno
	glRotatef(neptuno, 0, 1, 1);//Traslacion neptuno
	glTranslatef(24, 0, 0);
	glColor3f(0.145, 0.125, 0.835);
	glRotatef(neptuno, 1, 0, 0);//rotacion neptuno
	glutSolidSphere(0.5, 30, 30);
	glPushMatrix();
	glRotatef(luna, 1, 0, 0);//Traslacion luna
	glTranslatef(2, 0, 0);
	glColor3f(1.0, 1.0, 1.0);
	glRotatef(luna, 1, 0, 0);//rotacion luna
	glutSolidSphere(0.25, 30, 30);
	glPopMatrix();
	glPushMatrix();
	glRotatef(luna, 0, 0, 1);//Traslacion luna
	glTranslatef(2, 0, 0);
	glColor3f(1.0, 1.0, 1.0);
	glRotatef(luna, 1, 0, 0);//rotacion luna
	glutSolidSphere(0.25, 30, 30);
	glPopMatrix();
	glPopMatrix();

	glPopMatrix();


	glutSwapBuffers();

}



void animacion()
{
	// Calculate the number of frames per one second:
	//dwFrames++;
	dwCurrentTime = GetTickCount(); // Even better to use timeGetTime()
	dwElapsedTime = dwCurrentTime - dwLastUpdateTime;

	if (dwElapsedTime >= 100)
	{
		sol = (sol - 5) % 360;
		mercurio = (mercurio - 10) % 360;
		venus = (venus - 8) % 360;
		tierra = (tierra - 7) % 360;
		marte = (marte - 6) % 360;
		jupiter = (jupiter - 5) % 360;
		saturno = (saturno - 4) % 360;
		urano = (urano - 3) % 360;
		neptuno = (neptuno - 1) % 360;
		luna = (luna - 9) % 360;


		dwLastUpdateTime = dwCurrentTime;
	}

	glutPostRedisplay();
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

	glFrustum(-10.1, 10.1, -10.1, 10.1, 10.1, 500.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
														//glLoadIdentity();
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 'w':   //Movimientos de camara
	case 'W':
		camaraZ += 0.6f;
		break;
	case 's':
	case 'S':
		camaraZ -= 0.6f;
		break;
	case 'a':
	case 'A':
		camaraX -= 0.6f;
		break;
	case 'd':
	case 'D':
		camaraX += 0.6f;
		break;

	case 'i':		//Movimientos de Luz
	case 'I':
		spin = (spin - 20) % 360;
		break;
	case 'k':
	case 'K':
		spin = (spin + 20) % 360;
		break;;


	case 'l':   //Activamos/desactivamos luz
	case 'L':
		light = !light;
		break;

	case 'p':   //Activamos/desactivamos luz
	case 'P':
		positional = !positional;
		break;

	case 'c':
		LightAngle += 2.0f;
		printf("Angulo = %f\n", LightAngle);
		break;
	case 'v':
		LightAngle -= 2.0f;
		printf("Angulo = %f\n", LightAngle);
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

		break;
	case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...

		break;
	case GLUT_KEY_LEFT:

		break;
	case GLUT_KEY_RIGHT:

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
	glutInitWindowSize(500, 500);	// Tamaño de la Ventana
	glutInitWindowPosition(20, 60);	//Posicion de la Ventana
	glutCreateWindow("Practica 7"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutIdleFunc(animacion);
	glutMainLoop();          // 

	return 0;
}




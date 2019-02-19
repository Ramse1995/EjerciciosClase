//Semestre 2017 - 2
//Nombre: Ramses Saldivar Juarez
//Numero de practica:2
//Version VS 2017
//instrucciones*//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
											
	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
	//LINEA QUE SE AGREGO
	
	glBegin(GL_QUADS);// YA SE USO GL_POINTS,GL_LINES,GL_LINE_LOOP,GL_TRIANGLES,GL_QUADS
	
	//glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.0f, 3.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	//glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-3.0f, 3.00f, 0.0f);
	
	//glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-3.0f, 4.0f, 0.0f);
	
	//glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-6.0f, 4.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	
	glEnd();
	glBegin(GL_QUADS);// c |
	glVertex3f(-7.0f, -1.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 1.0f);
	
	glVertex3f(-6.0f, -1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	
	glVertex3f(-6.0f, 4.0f, 0.0f);

	glVertex3f(-7.0f, 4.0f, 0.0f);
	
	glEnd();
	glBegin(GL_QUADS);// c ---
	glColor3f(1.0f, 11.0f, 14.0f);
	glVertex3f(-6.0f, -1.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(-3.0f, -1.0f, 0.0f);
	glVertex3f(-3.0f, 0.0f, 0.0f);
	
	glVertex3f(-6.0f, 0.0f, 0.0f);

	glEnd();
	//////////////////////////////////////////////////////////////////////////////////////
	glBegin(GL_POLYGON);//GGGGGG
	glVertex3f(-2.0f, 3.0f, 0.0f);
	
	glVertex3f(2.0f, 3.00f, 0.0f);
	
	glVertex3f(2.0f, 4.0f, 0.0f);
	glColor3f(2.0f, 1.0f, 0.0f);

	glVertex3f(-2.0f, 4.0f, 0.0f);

	glEnd();
	glBegin(GL_QUADS);// G |
	glVertex3f(-2.0f, 4.0f, 0.0f);
	glColor3f(2.0f, 0.0f, 1.0f);
	glVertex3f(-1.0f, 4.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(-2.0f, -1.0f, 0.0f);

	glEnd();
	glBegin(GL_QUADS);// G ---
	glVertex3f(-2.0f, -1.0f, 0.0f);
	glVertex3f(2.0f, -1.0f, 0.0f);
	glVertex3f(2.0f, 0.0f, 0.0f);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-2.0f, 0.0f, 0.0f);
	
	
	glBegin(GL_QUADS);// G ||
	glVertex3f(2.0f, 0.0f, 0.0f);

	glVertex3f(2.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, 2.0f, 0.0f);
	
	glVertex3f(1.0f, 0.0f, 0.0f);
	
	
	glBegin(GL_QUADS);// G --
	glVertex3f(1.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.0f, 2.0f, 0.0f);
	
	glVertex3f(0.0f, 1.0f, 0.0f);
	
	glVertex3f(1.0f, 1.0f, 0.0f);
	

	glEnd();
	/////////////////////////////////////////////
	glBegin(GL_QUADS);// R--
	glVertex3f(4.0f, 4.0f, 0.0f);
	
	glVertex3f(8.0f, 4.0f, 0.0f);
	
	glVertex3f(8.0f, 3.0f, 0.0f);
	
	glVertex3f(4.0f, 3.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 1.0f);
	glEnd();
	glBegin(GL_QUADS);// R|
	glVertex3f(4.0f, 4.0f, 0.0f);
	glVertex3f(4.0f, -1.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(5.0f, -1.0f, 0.0f);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(5.0f, 4.0f, 0.0f);

	glEnd();
	glBegin(GL_QUADS);// R|
	glVertex3f(8.0f, 4.0f, 0.0f);
	glVertex3f(8.0f, 1.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(7.0f, 1.0f, 0.0f);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(7.0f, 4.0f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);// R--
	glVertex3f(4.0f, 1.0f, 0.0f);

	glVertex3f(8.0f, 1.0f, 0.0f);
	
	glVertex3f(8.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 1.0f);
	glColor3f(0.0f, 1.0f, 2.0f);
	glVertex3f(4.0f, 2.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);// R DIAGON
	glVertex3f(4.0f, 2.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(8.0f, -1.0f, 0.0f);
	glVertex3f(7.0f, -1.0f, 0.0f);
	glVertex3f(4.0f, 2.0f, 0.0f);
	glEnd();
	///////////////////////////////////SSSSS
	glBegin(GL_QUADS);// S--
	glVertex3f(9.0f, 4.0f, 0.0f);
	
	glVertex3f(14.0f, 4.0f, 0.0f);
	glColor3f(0.0f, 13.0f, 19.0f);
	glVertex3f(14.0f, 3.0f, 0.0f);
	glVertex3f(9.0f, 3.0f, 0.0f);
	glEnd();
	glBegin(GL_QUADS);// s|
	glVertex3f(10.0f, 3.0f, 0.0f);
	glVertex3f(10.0f, 2.0f, 0.0f);
	glVertex3f(9.0f, 2.0f, 0.0f);
	glVertex3f(9.0f, 3.0f, 0.0f);

	glEnd();
	glBegin(GL_QUADS);// S--
	glVertex3f(9.0f, 2.0f, 0.0f);
	
	glVertex3f(14.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(14.0f, 1.0f, 0.0f);
	
	glVertex3f(9.0f, 1.0f, 0.0f);
	
	glEnd();
	glBegin(GL_QUADS);// s|
	glVertex3f(14.0f, 1.0f, 0.0f);
	glVertex3f(14.0f, -1.0f, 0.0f);
	glVertex3f(13.0f, -1.0f, 0.0f);
	glVertex3f(13.0f, 1.0f, 0.0f);

	glEnd();
	
	glBegin(GL_QUADS);// S--
	glVertex3f(14.0f, 0.0f, 0.0f);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(14.0f,-1.0f, 0.0f);
	
	glVertex3f(9.0f, -1.0f, 0.0f);
	
	glVertex3f(9.0f, 0.0f, 0.0f);
	glColor3f(1.0f, 0.0f, 0.0f);
	glEnd();

	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-15,20,-10,10,-1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();			
	//LINEA QUE SE AGREGO
	glBegin(GL_POINTS);
	glVertex3f(0.0f, 0.0f, 0.0f);
	
	
	glEnd();
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}


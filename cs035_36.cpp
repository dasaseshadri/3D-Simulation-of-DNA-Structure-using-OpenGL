#include <iostream>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include <GL/glut.h>
//#include <Mmsystem.h>
//#include <mciapi.h>
//these two headers are already included in the <Windows.h> header
//#pragma comment(lib, "Winmm.lib")
#define PI 3.142f
int f=0;
void *currentfont;
void *lcurrentfont;
GLfloat angleX=90.0f,angleY=0.0f,angleZ=0.0f, vertexes[4][3], normal[3],zoom=-40.0f;
using namespace std;

void cnextpage()
{


		float x1,y1,x2,y2;
		float angle;
		double radius=0.175;
           glBegin(GL_POLYGON);

            glColor3f(0.0f,0.8f,1.0f);
            glVertex3f(1.6,0.05,-6.0);
		    glVertex3f(1.6,-0.5,-6.0);
            glVertex3f(2.35,-0.8,-6.0);
            glVertex3f(3,-0.25,-6.0);
		    glVertex3f(2.35,0.35,-6.0);
		    glEnd();
		    glColor3f(0.3f,1.0f,0.0f);
		    glBegin(GL_POLYGON);

		    glVertex3f(-0.8,-0.45,-6.0);
		    glVertex3f(-0.8,-1.1,-6.0);
            glVertex3f(-0.15,-1.4,-6.0);
            glVertex3f(0.6,-0.75,-6.0);
		    glVertex3f(-0.15,-0.15,-6.0);
            glEnd();
		    glColor3f(1.0f,0.0f,1.0f);
		    glBegin(GL_POLYGON);
            glVertex3f(-2.2,-1.1,-6.0);
		    glVertex3f(-2.2,-0.45,-6.0);
		    glVertex3f(-1.5,-0.15,-6.0);
		    glVertex3f(-0.8,-0.45,-6.0);
		    glVertex3f(-0.8,-1.1,-6.0);
		    glVertex3f(-1.5,-1.40,-6.0);
		    glEnd();
		    glLineWidth(3.0);
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINE_LOOP);
	    glVertex3f(-2.07,-0.46,-6.0);
		    glVertex3f(-1.5,-0.23,-6.0);
		 glEnd();
		glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINE_LOOP);
        glVertex3f(0.6,-0.75,-6.0);
	    glVertex3f(1.6,-0.5,-6.0);
		 glEnd();
		 glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINE_LOOP);
		//glLineWidth(30);
            glVertex3f(-0.9,-0.45,-6.0);
		    glVertex3f(-0.9,-1.1,-6.0);
		 glEnd();
		 glColor3f(0.0,0.0,0.0);
		glBegin(GL_LINE_LOOP);
        glVertex3f(-2.14,-1.05,-6.0);
		glVertex3f(-1.5,-1.32,-6.0);
		 glEnd();


		 glBegin(GL_LINE_LOOP);
        glVertex3f(-0.2,-1.35,-6.0);
	glVertex3f(0.5,-0.75,-6.0);
		 glEnd();




          glColor3f(0.0,0.0,0.0);
		  glBegin(GL_LINE_LOOP);
          glVertex3f(3,-0.25,-6.0);
		  glVertex3f(4.1,0.0,-6.0);
		 glEnd();

            glBegin(GL_LINE_LOOP);
            glVertex3f(4.1,0.0,-6.0);
		    glVertex3f(4.1,0.6,-6.0);
            glEnd();
            glColor3f(0.0f,0.0f,0.0f);
            glBegin(GL_LINE_LOOP);
            glVertex3f(-0.8,-0.45,-6.0);
		    glVertex3f(-0.8,-1.1,-6.0);
            glVertex3f(-0.15,-1.4,-6.0);
            glVertex3f(0.6,-0.75,-6.0);
		    glVertex3f(-0.15,-0.15,-6.0);
		    glEnd();
            glColor3f(0.0f,0.0f,0.0f);
		    glBegin(GL_LINE_LOOP);

            glVertex3f(1.6,0.05,-6.0);
		    glVertex3f(1.6,-0.5,-6.0);
            glVertex3f(2.35,-0.8,-6.0);
            glVertex3f(3,-0.25,-6.0);
		    glVertex3f(2.35,0.35,-6.0);
		    glEnd();
		    glColor3f(0.0f,0.0f,0.0f);
		    glBegin(GL_LINE_LOOP);

            glVertex3f(-2.2,-1.1,-6.0);
		    glVertex3f(-2.2,-0.45,-6.0);
		    glVertex3f(-1.5,-0.15,-6.0);
		    glVertex3f(-0.8,-0.45,-6.0);
		    glVertex3f(-0.8,-1.1,-6.0);
		    glVertex3f(-1.5,-1.40,-6.0);
		    glEnd();
		    	glColor3f(0.0,0.5,1.0);

          glPushMatrix();
          glLoadIdentity();
		  glTranslated(5.5,1.0,-8.0);
		  glutSolidSphere(0.3,40,50);
		  glPopMatrix();
		  glEnd();



}

void lsetFont(void *font)
{
 lcurrentfont=font;                      // Set the currentfont to the font
}
void ldrawstring(float x,float y,float z,char *string)
{
 char *c;
 glRasterPos3d(x,y,z);
 for(c=string;*c!='\0';c++)
 { glColor3f(0.0,0.0,0.0);
  glutBitmapCharacter(lcurrentfont,*c);
 }
}
void ctext()
{

lsetFont(GLUT_BITMAP_TIMES_ROMAN_24);
 glColor3f(0,0,0);
 ldrawstring(2.5,0.8,-6.0,"PHOSPHATE");
 glColor3f(0,0,0);
 ldrawstring(1.0,0.2,-6.0,"SUGAR");
 glColor3f(0,0,0);
 ldrawstring(-1.9,-0.1,-6.0,"NITROGEN BASES");
 glColor3f(1,0,1);
 ldrawstring(-1.0,1.7,-6.0,"NUCLEOTIDES ENLARGED VIEW");
 glColor3f(0.8,0.,0.);
 ldrawstring(2.5,-1.7,-6.0,"PRESS ENTER FOR INSTRUCTIONS !");
   glFlush();
   glutSwapBuffers();
}


void names()
{
 //glClear(GL_COLOR_BUFFER_BIT);
lsetFont(GLUT_BITMAP_TIMES_ROMAN_24);
 glColor3f(1,0,0);
 ldrawstring(0.0f, -0.2f, -6.0f,"2) ADENINE");
 glColor3f(0,1,0);
 ldrawstring(0.0f, 0.0f, -30.0f,"1) CYTOSINE");
 glColor3f(0,0,1);
 ldrawstring(0.0f, -0.6f, -6.0f,"4) THYMINE");
 glColor3f(1,1,0);
 ldrawstring(0.0f, -0.4f, -6.0f,"3) GUANINE");
 glColor3f(0,0,0);

 ldrawstring(-3.4f, -1.5f, -6.0f,"3'");
 glColor3f(0,0,0);
 ldrawstring(-1.4f, -1.5f, -6.0f,"5'");
 glColor3f(0,0,0);
 ldrawstring(-3.2f, -1.5f, -6.0f,"<----2nm---->");
 glColor3f(0.9,0.5,0.0);
 ldrawstring(0.0f, 1.4f, -6.0f,"The DNA double helix is stabilized by hydrogen bonds between");
 glColor3f(0.9,0.5,0);
 ldrawstring(0.0f, 1.2f, -6.0f,"the bases attached to the two strands. The four bases found in");
 glColor3f(0.9,0.5,0);
 ldrawstring(0.0f, 1.0f, -6.0f,"DNA are adenine(A), cytosine(C), guanine(G) and thymine (T)");
 glColor3f(0.9,0.5,0);
 ldrawstring(0.0f, 0.8f, -6.0f,"These four bases are attached to the sugar/phosphate to form ");
glColor3f(0.9,0.5,0);
 ldrawstring(0.0f, 0.6f, -6.0f,"the complete nucleotide");
 glColor3f(0.9,0.5,0);
 ldrawstring(0.0f,0.3f,-6.0f,"The two pairs are: A-T and C-G");
 glColor3f(1,0,1);
 ldrawstring(-0.5f, 1.8f, -6.0f,"DNA STRUCTURE OPEN VIEW");
glFlush();
glColor3f(1.0,0.0,0.0);
ldrawstring(0.0f,-1.0f,-6.0f,"PRESS ENTER FOR PHOSPHATE ENLARGENED VIEW!");
glutSwapBuffers();
}



void ldna(void)

{



//ladder1
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.5);
glVertex3f(-3.5,1.5,-6);
glVertex3f(-3.5,-1.3,-6);
glVertex3f(-3.2,-1.3,-6);
glVertex3f(-3.2,1.5,-6);
glEnd();
//ladder2
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.5);
glVertex3f(-1.5,1.5,-6);
glVertex3f(-1.5,-1.3,-6);
glVertex3f(-1.2,-1.3,-6);
glVertex3f(-1.2,1.5,-6);
glEnd();

//at1-
glBegin(GL_POLYGON);
glColor3f(1.0,0.0,0.0);
glVertex3f(-3.2,1.3,-6);
glVertex3f(-3.2,1.0,-6);
glVertex3f(-2.3,1.0,-6);
glVertex3f(-2.3,1.3,-6);

glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,1.0);
glVertex3f(-2.3,1.3,-6);
glVertex3f(-2.3,1.0,-6);
glVertex3f(-1.5,1.0,-6);
glVertex3f(-1.5,1.3,-6);
glEnd();

//cg1
glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
glVertex3f(-3.2,0.8,-6);
glVertex3f(-3.2,0.5,-6);
glVertex3f(-2.3,0.5,-6);
glVertex3f(-2.3,0.8,-6);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
glVertex3f(-2.3,0.8,-6);
glVertex3f(-2.3,0.5,-6);
glVertex3f(-1.5,0.5,-6);
glVertex3f(-1.5,0.8,-6);
glEnd();

//at2
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,1.0);
glVertex3f(-3.2,0.3,-6);
glVertex3f(-3.2,0.0,-6);
glVertex3f(-2.3,0.0,-6);
glVertex3f(-2.3,0.3,-6);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1.0,0.0,0.0);
glVertex3f(-1.5,0.3,-6);
glVertex3f(-1.5,0.0,-6);
glVertex3f(-2.3,0.0,-6);
glVertex3f(-2.3,0.3,-6);
glEnd();

//cg2
glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
glVertex3f(-3.2,-0.2,-6);
glVertex3f(-3.2,-0.5,-6);
glVertex3f(-2.3,-0.5,-6);
glVertex3f(-2.3,-0.2,-6);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
glVertex3f(-2.3,-0.2,-6);
glVertex3f(-2.3,-0.5,-6);
glVertex3f(-1.5,-0.5,-6);
glVertex3f(-1.5,-0.2,-6);
glEnd();

//cg3
glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
glVertex3f(-3.2,-0.7,-6);
glVertex3f(-3.2,-1,-6);
glVertex3f(-2.3,-1.0,-6);
glVertex3f(-2.3,-0.7,-6);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
glVertex3f(-1.5,-0.7,-6);
glVertex3f(-1.5,-1,-6);
glVertex3f(-2.3,-1.0,-6);
glVertex3f(-2.3,-0.7,-6);
glEnd();

}


void setFont(void *font)
{
 currentfont=font;
}

void drawstring(float x,float y,float z,char *string)
{
 char *c;
 //void *currentfont;
 glRasterPos3d(x,y,z);
 for(c=string;*c!='\0';c++)
 {
 //glColor3f(0.0,1.0,1.0);
  glutBitmapCharacter(currentfont,*c);
 }
}
void text1()
{
 //glClear(GL_COLOR_BUFFER_BIT);
setFont(GLUT_BITMAP_TIMES_ROMAN_24);
glColor3f(1,0.5,0);
 drawstring(-0.2f, 1.2f, -6.0f,"****INSTRUCTIONS****        ");
 //glColor3f(0,0,1);
 glColor3f(1,0.1,1);
 drawstring(0.0f, .8f, -6.0f,"* X:Rotate on X-axis         ");
 //glColor3f(0.7,0,1);
 drawstring(0.0f, 0.4f, -6.0f,"* Y:Rotate on Y-axis          ");
 //glColor3f(1,0.5,0);
 drawstring(0.0f, 0.6f, -6.0f,"* Z:Rotate on Z-axis          ");

 drawstring(0.0f, 0.2f, -6.0f,"* F:ZOOM IN               ");

 drawstring(0.0f, 0.0f, -6.0f,"* G:ZOOM OUT                ");

 drawstring(0.0f, -0.2f, -6.0f,"* Esc:EXIT              ");
 glColor3f(0,0,1);
 drawstring(-0.2f, -0.8f, -6.0f," NOW  PRESS  ENTER !              ");
 glFlush();
glutSwapBuffers();
}
void frontscreen()
{
 glClear(GL_COLOR_BUFFER_BIT);
setFont(GLUT_BITMAP_TIMES_ROMAN_24);
 glColor3f(0.,0.,1);
 drawstring(-0.4f, 1.4f, -6.0f,"PESIT-BANGALORE SOUTH CAMPUS");
 glColor3f(0.7,0.,1.);
 drawstring(-1.2f, 1.1f, -6.0f,"DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");
 glColor3f(1.,0.5,0.);
 drawstring(0.0f, 0.8f, -6.0f,"A MINI PROJECT ON");
 glColor3f(1,0,0);
 drawstring(-0.6f, 0.6f, -6.0f,"3-D SIMULATION OF DNA STRUCTURE");
 glColor3f(1.,0.5,0);
 drawstring(-1.5f, 0.0f, -6.0f,"BY:");
 glColor3f(0.5,0,0.5);
 drawstring(-1.5f, -0.2f, -6.0f,"CHETHAN S J                                          1PE14CS035");
 glColor3f(0.5,0,0.5);
 drawstring(-1.5f, -0.4f, -6.0f,"DASA GANGADHAR SESHADRI         1PE14CS036");
 glColor3f(1.,0.5,0);
 drawstring(-1.5f, -0.7f, -6.0f,"UNDER THE GUIDANCE OF:");
 glColor3f(0.5,0.2,0.2);
 drawstring(-1.5f, -0.9f, -6.0f,"Ms.Shubha Raj");
 glColor3f(0.5,0.2,0.2);
 drawstring(-1.5f, -1.1f, -6.0f,"Dr.Sarasvathi V");
 glColor3f(1.,0.1,1);
 drawstring(-0.6f, -1.6, -6.0f,"PRESS ENTER TO START !");
 glFlush();
glutSwapBuffers();
}
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	case 13:

	if(f<4)
	 f++;
	 glutPostRedisplay();
		break;
	case 'x':

		angleX += 10.0;
		glutPostRedisplay();
		break;
	case 'z':
		angleY += 10.0;
		glutPostRedisplay();
		break;
	case 'y':
		angleZ += 10.0;
		glutPostRedisplay();
		break;

	case 'f':
		zoom += 10.0f;
		glutPostRedisplay();
		break;

	case 'g':
		zoom -= 10.0f;
		glutPostRedisplay();
		break;

    case 27:
        exit(0);
        break;

	}
}
void computeNormals(float v[3][3],float n[3])
{
	float v1[3], v2[3];
    v1[0] = v[0][0] - v[1][0];
	v1[1] = v[0][1] - v[1][1];
	v1[2] = v[0][2] - v[1][2];
	//Vector2
	v2[0] = v[1][0] - v[2][0];
	v2[1] = v[1][1] - v[2][1];
	v2[2] = v[1][2] - v[2][2];
	//Normal
    n[0] = v1[1] * v2[2] - v1[2] * v2[1];
	n[1] = v1[2] * v2[0] - v2[2] * v1[0];
	n[2] = v1[0] * v2[1] - v1[1] * v2[0];
}
void drawHelix()
{
	GLfloat x, y, z, phi, theta, v, u, r;
	int twists = 07;
glLoadIdentity();
	gluLookAt(0, 5, 50, 0, 0, 0, 0, 1, 0);
	glPushMatrix();
glTranslatef(0, 25, zoom);
	glRotatef(angleX,1,0,0);
	glRotatef(angleY, 1, 1, 0);
	glRotatef(angleZ, 0, 0, 1);

	r = 1.5f;

	glBegin(GL_QUADS);
	glColor3f(1.0f,0.0f,0.1f);

		for (phi = 0; phi <= 360; phi += 20.0)
		{
			for (theta = 0; theta <= 360*twists ; theta += 20.0)
			{

				v = (phi / 180.0f*PI);
				u = (theta / 180.0f*PI);

				x = float(cos(u)*(2.0f + cos(v)))*r;
				y = float(sin(u)*(2.0f + cos(v)))*r;
				z = float(((u)+sin(v))*r);

				vertexes[0][0] = x;
				vertexes[0][1] = y;
				vertexes[0][2] = z;

				v = (phi / 180.0f*PI);
				u = ((theta + 20) / 180.0f*PI);

				x = float(cos(u)*(2.0f + cos(v)))*r;
				y = float(sin(u)*(2.0f + cos(v)))*r;
				z = float((u)+sin(v))*r;

				vertexes[1][0] = x;
				vertexes[1][1] = y;
				vertexes[1][2] = z;

				v = ((phi + 20) / 180.0f*PI);
				u = ((theta + 20) / 180.0f*PI);

				x = float(cos(u)*(2.0f + cos(v)))*r;
				y = float(sin(u)*(2.0f + cos(v)))*r;
				z = float((u)+sin(v))*r;

				vertexes[2][0] = x;
				vertexes[2][1] = y;
				vertexes[2][2] = z;

				v = ((phi + 20) / 180.0f*PI);
				u = ((theta) / 180.0f*PI);

				x = float(cos(u)*(2.0f + cos(v)))*r;
				y = float(sin(u)*(2.0f + cos(v)))*r;
				z = float((u)+sin(v))*r;

				vertexes[3][0] = x;
				vertexes[3][1] = y;
				vertexes[3][2] = z;

				computeNormals(vertexes, normal);

				glNormal3f(normal[0], normal[1], normal[2]);

				glVertex3f(vertexes[0][0], vertexes[0][1], vertexes[0][2]);
				glVertex3f(vertexes[1][0], vertexes[1][1], vertexes[1][2]);
				glVertex3f(vertexes[2][0], vertexes[2][1], vertexes[2][2]);
				glVertex3f(vertexes[3][0], vertexes[3][1], vertexes[3][2]);
			}
		}

		glEnd();

		glColor3f(0.0f,0.5f,1.0f);
		glTranslatef(0.0f,1.5f,71.0f);
		glBegin(GL_QUADS);

		for (phi = 0; phi <= 360; phi += 20.0)
		{
			for (theta = 0; theta >= -360 *twists; theta -= 20.0)
			{
				v = (phi / 180.0f*PI);
				u = (theta / 180.0f*PI);

				x = float(cos(u)*(2.0f + cos(v)))*r;
				y = float(sin(u)*(2.0f + cos(v)))*r;
				z = float(((u)+sin(v))*r);

				vertexes[0][0] =x;
				vertexes[0][1] = y;
				vertexes[0][2] = z;

				v = (phi / 180.0f*PI);
				u = ((theta + 20) / 180.0f*PI);

				x = float(cos(u)*(2.0f + cos(v)))*r;
				y = float(sin(u)*(2.0f + cos(v)))*r;
				z = float((u)+sin(v))*r;

				vertexes[1][0] = x;
				vertexes[1][1] = y;
				vertexes[1][2] = z;

				v = ((phi + 20) / 180.0f*PI);
				u = ((theta + 20) / 180.0f*PI);

				x = float(cos(u)*(2.0f + cos(v)))*r;
				y = float(sin(u)*(2.0f + cos(v)))*r;
				z = float((u)+sin(v))*r;

				vertexes[2][0] = x;
				vertexes[2][1] = y;
				vertexes[2][2] = z;

				v = ((phi + 20) / 180.0f*PI);
				u = ((theta) / 180.0f*PI);

				x = float(cos(u)*(2.0f + cos(v)))*r;
				y = float(sin(u)*(2.0f + cos(v)))*r;
				z = float((u)+sin(v))*r;

				vertexes[3][0] = x;
				vertexes[3][1] = y;
				vertexes[3][2] = z;

				computeNormals(vertexes, normal);

				glNormal3f(normal[0], normal[1], normal[2]);

				glVertex3f(vertexes[0][0], vertexes[0][1], vertexes[0][2]);
				glVertex3f(vertexes[1][0], vertexes[1][1], vertexes[1][2]);
				glVertex3f(vertexes[2][0], vertexes[2][1], vertexes[2][2]);
				glVertex3f(vertexes[3][0], vertexes[3][1], vertexes[3][2]);
			}
		}
		glEnd();
		glPopMatrix();
}
void handleResize(int w, int h)
{

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, (float)w / (float)h, 5, 2000);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void initRendering() {

	glEnable(GL_DEPTH_TEST);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0);
	GLfloat global_ambient[4] = { 0.2f, 0.2f, 0.2f, 1.0f };
	GLfloat light0pos[4] = { 0.0f, 5.0f, 10.0f, 1.0f };
	GLfloat light0ambient[4] = { 0.2f, 0.2f, 0.2f, 1.0f };
	GLfloat light0diffuse[4] = { 0.3f, 0.3f, 0.3f, 1.0f };
	GLfloat light0specular[4] = { 0.8f, 0.8f, 0.8f, 1.0f };

	GLfloat lmodel_ambient[] = { 0.2f, 0.2f, 0.2f, 1.0f };
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);

    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
	glLightfv(GL_LIGHT0, GL_POSITION, light0pos);
	glLightfv(GL_LIGHT0, GL_AMBIENT, light0ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light0diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light0specular);

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glShadeModel(GL_SMOOTH);
	glMateriali(GL_FRONT, GL_SHININESS, 128);

	glEnable(GL_COLOR_MATERIAL);

}

void drawScene() {


	if(f==0)
	{	glClearColor(1.f,1.f,1.f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
frontscreen();
glFlush();
glutSwapBuffers();

	}
	else if(f==3)
	{	glClearColor(0.0f,0.0f,0.0f,1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	text1();
glFlush();
glutSwapBuffers();
	}

	else if (f==4){
	glClearColor(0.0f,0.0f,0.0f,1.0f);

glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
initRendering();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glTranslatef(0.0f, 1.0f, -6.0f);
	GLfloat ambientLight[] = { 0.2f, 0.2f, 0.2f, 1.0f };
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientLight);
	GLfloat directedLight[] = { 0.7f, 0.7f, 0.7f, 1.0f };
	GLfloat directedLightPos[] = { -10.0f, 15.0f, 20.0f, 0.0f };
	glLightfv(GL_LIGHT0, GL_DIFFUSE, directedLight);
	glLightfv(GL_LIGHT0, GL_POSITION, directedLightPos);
	glColor3f(1.0f,1.0f,1.0f);
	drawHelix();
glutSwapBuffers();
glFlush();
	//glutDisplayFunc(text1);
}
if(f==2)
{
glClearColor(0.4,0.0,0.5,0.0);
glClear(GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT );

cnextpage();
     ctext();

glFlush();
glutSwapBuffers();
}
if(f==1)
{

glClearColor(0.3,0,0.5,0);
glClear(GL_COLOR_BUFFER_BIT |GL_DEPTH_BUFFER_BIT );
ldna();
names();
glFlush();
glutSwapBuffers();



}


}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1000,800);
	//mciSendString("open \"/home/seshadri/Music/Downloaded by MediaHuman/DNA - What is DNA_ - Basics of DNA.mp3.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
	//mciSendString("play mp3", NULL, 0, NULL);

system("play /home/seshadri/Downloads/DNA_-_What_is_DNA_-_Basics_of_DNA.wav &>/dev/null&");
	glutCreateWindow("DNA");
	glutFullScreen();
glutReshapeFunc(handleResize);
    //glutDisplayFunc(text1);
    glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);

	glutMainLoop();
	return 0;
}


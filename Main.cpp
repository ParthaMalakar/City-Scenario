#include <iostream>
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14

using namespace std;

GLfloat position = 0.0;
GLfloat position2 = 0.0;
GLfloat position3 = 0.0;
GLfloat speed = 3.5;
GLfloat speed2 = 2.0;
GLfloat speed3 = 30.5;
GLfloat position4 = 0.0;

GLfloat onOff;
GLfloat frd = false;
GLfloat bck = false;

GLfloat _rain = 0.0;
GLfloat _nt = 0.0;

GLfloat rainday = false;
GLfloat night = false;

void update(int value) {

    if(position > 1800.0)
        position = -1800.1;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 1);
}
void update2(int value) {

    if(position2 > 1800.0)
        position2 = -1800.0;

    position2 += speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}
void update3(int value) {

    if(position3 > 1800.0)
        position3 = -1800.0;

    position3 += speed3;

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);
}

float theta;
void wheel(int x, int y)
{
    glBegin(GL_POLYGON);
    glColor3ub(0, 0, 0);
    for(int i=0; i<360; i++)
    {
    theta = i*PI/180;

    glVertex2f(x+8*cos(theta),y+8*sin(theta));
    }
    glEnd();

}

void Cars()
{
    glPushMatrix();
glTranslatef(-position3,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(0,119,189);
    glVertex2i(300, 250);
    glVertex2i(400, 250);
    glVertex2i(400, 270);
    glVertex2i(300, 270);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,153,230);
    glVertex2i(315, 270);
    glVertex2i(385, 270);
    glVertex2i(375, 285);
    glVertex2i(325, 285);

    glEnd();






    wheel(320,250);
    wheel(375,250);


glPopMatrix();
}
void Cars2()
{
    glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(55,0,15);
    glVertex2i(300, 350);
    glVertex2i(400, 350);
    glVertex2i(400, 370);
    glVertex2i(300, 370);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,153,230);
    glVertex2i(315, 370);
    glVertex2i(385, 370);
    glVertex2i(375, 385);
    glVertex2i(325, 385);

    glEnd();






    wheel(320,350);
    wheel(375,350);


glPopMatrix();
}

void Cars3()
{
    glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(102, 153, 153);
    glVertex2i(900, 350);
    glVertex2i(1000, 350);
    glVertex2i(1000, 370);
    glVertex2i(900, 370);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(51, 153, 102);
    glVertex2i(915, 370);
    glVertex2i(985, 370);
    glVertex2i(975, 385);
    glVertex2i(925, 385);

    glEnd();






    wheel(920,350);
    wheel(975,350);


glPopMatrix();
}
void Cars4()
{
    glPushMatrix();
glTranslatef(position3,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(134, 179, 0);
    glVertex2i(1500, 350);
    glVertex2i(1600, 350);
    glVertex2i(1600, 370);
    glVertex2i(1500, 370);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255, 153, 153);
    glVertex2i(1515, 370);
    glVertex2i(1585, 370);
    glVertex2i(1575, 385);
    glVertex2i(1525, 385);

    glEnd();






    wheel(1520,350);
    wheel(1575,350);


glPopMatrix();
}

void ambulance1()
{
    glPushMatrix();
    glTranslatef(-position3,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(930, 250);
    glVertex2i(1000, 250);
    glVertex2i(1000, 270);
    glVertex2i(930, 270);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(940, 270);
    glVertex2i(1000, 270);
    glVertex2i(1000, 285);
    glVertex2i(950, 285);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2i(960, 265);
    glVertex2i(990, 265);
    glVertex2i(990, 275);
    glVertex2i(960, 275);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2i(970, 260);
    glVertex2i(980, 260);
    glVertex2i(980, 280);
    glVertex2i(970, 280);

    glEnd();


    wheel(950,250);
    wheel(985,250);

    glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(955+3*cos(theta),286+3*sin(theta));
}
glEnd();


glPopMatrix();

}

void ambulance2()
{
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(1000, 410);
    glVertex2i(1070, 410);
    glVertex2i(1070, 430);
    glVertex2i(1000, 430);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(1010, 430);
    glVertex2i(1070, 430);
    glVertex2i(1070, 445);
    glVertex2i(1020, 445);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 153, 204);
    glVertex2i(1012, 430);
    glVertex2i(1023, 430);
    glVertex2i(1023, 445);



    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2i(1033, 425);
    glVertex2i(1058, 425);
    glVertex2i(1058, 435);
    glVertex2i(1033, 435);

    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,0,0);
    glVertex2i(1040, 420);
    glVertex2i(1050, 420);
    glVertex2i(1050, 440);
    glVertex2i(1040, 440);

    glEnd();


    wheel(1020,410);
    wheel(1055,410);


    glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1026+3*cos(theta),446+3*sin(theta));
}
glEnd();



}



void schoolBus()
{

glPushMatrix();
glTranslatef(-position3,0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(1400, 250);
    glVertex2i(1500, 250);
    glVertex2i(1500, 270);
    glVertex2i(1400, 270);

    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(1405, 270);
    glVertex2i(1500, 270);
    glVertex2i(1500, 285);
    glVertex2i(1410, 285);

    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(0, 172, 230);
    glVertex2i(1412, 255);
    glVertex2i(1427, 255);
    glVertex2i(1427, 280);
    glVertex2i(1412, 280);

    glEnd();

    glBegin(GL_LINES);
glColor3ub (0, 0, 0);
glVertex2i(1419, 255);
glVertex2i(1419, 280);
glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 172, 230);
    glVertex2i(1435, 270);
    glVertex2i(1460, 270);
    glVertex2i(1460, 280);
    glVertex2i(1435, 280);

    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 172, 230);
    glVertex2i(1465, 270);
    glVertex2i(1490, 270);
    glVertex2i(1490, 280);
    glVertex2i(1465, 280);

    glEnd();


    wheel(1435,250);
    wheel(1485,250);
glPopMatrix();




}

void building()
{
    ///ground

glBegin(GL_QUADS);
glColor3ub (120, 120, 120); ///Light ash
glVertex2i(100, 400);
glVertex2i(500, 400);
glVertex2i(500, 500);
glVertex2i(100, 500);
glEnd();


///House gate
glBegin(GL_QUADS);
glColor3ub (120, 120, 120);
glVertex2i(300, 370);
glVertex2i(400, 370);
glVertex2i(400, 400);
glVertex2i(300, 400);
glEnd();


///Building1
glBegin(GL_QUADS);
glColor3ub (255, 51, 255);///pink
glVertex2i(150, 450);
glVertex2i(250, 450);
glVertex2i(250, 600);
glVertex2i(150, 600);
glEnd();

glBegin(GL_QUADS);
glColor3ub (128, 0, 128); ///roof
glVertex2i(150, 600);
glVertex2i(250, 600);
glVertex2i(250, 610);
glVertex2i(165, 610);
glEnd();

glBegin(GL_QUADS);
glColor3ub (128, 0, 128); ///roof
glVertex2i(250, 530);
glVertex2i(260, 550);
glVertex2i(260, 610);
glVertex2i(250, 610);
glEnd();

///door
glBegin(GL_QUADS);
glColor3ub (191, 191, 191);///pink
glVertex2i(180, 450);
glVertex2i(220, 450);
glVertex2i(220, 500);
glVertex2i(180, 500);
glEnd();

glBegin(GL_LINES);
glColor3ub (0, 0, 0);
glVertex2i(200, 450);
glVertex2i(200, 500);
glEnd();

///window1
glBegin(GL_QUADS);
glColor3ub (31, 61, 122);
glVertex2i(160, 565);
glVertex2i(180, 565);
glVertex2i(180, 590);
glVertex2i(160, 590);
glEnd();

///window2
glBegin(GL_QUADS);
glColor3ub (31, 61, 122);
glVertex2i(190, 565);
glVertex2i(210, 565);
glVertex2i(210, 590);
glVertex2i(190, 590);
glEnd();

///window3
glBegin(GL_QUADS);
glColor3ub (31, 61, 122);
glVertex2i(220, 565);
glVertex2i(240, 565);
glVertex2i(240, 590);
glVertex2i(220, 590);
glEnd();

///window4
glBegin(GL_QUADS);
glColor3ub (31, 61, 122);
glVertex2i(160, 525);
glVertex2i(180, 525);
glVertex2i(180, 550);
glVertex2i(160, 550);
glEnd();

///window2
glBegin(GL_QUADS);
glColor3ub (31, 61, 122);
glVertex2i(190, 525);
glVertex2i(210, 525);
glVertex2i(210, 550);
glVertex2i(190, 550);
glEnd();

///window3
glBegin(GL_QUADS);
glColor3ub (31, 61, 122);
glVertex2i(220, 525);
glVertex2i(240, 525);
glVertex2i(240, 550);
glVertex2i(220, 550);
glEnd();


///Building2

glBegin(GL_QUADS);
glColor3ub (255, 0, 0);
glVertex2i(250, 450);
glVertex2i(300, 450);
glVertex2i(300, 540);
glVertex2i(250, 540);
glEnd();

glBegin(GL_QUADS);
glColor3ub (128, 0, 0);
glVertex2i(250, 540);
glVertex2i(300, 540);
glVertex2i(300, 550);
glVertex2i(260, 550);
glEnd();

///window
glBegin(GL_QUADS);
glColor3ub (128, 0, 0);
glVertex2i(260, 480);
glVertex2i(275, 480);
glVertex2i(275, 495);
glVertex2i(260, 495);
glEnd();


glBegin(GL_QUADS);
glColor3ub (128, 0, 0);
glVertex2i(276, 480);
glVertex2i(291, 480);
glVertex2i(291, 495);
glVertex2i(276, 495);
glEnd();

glBegin(GL_QUADS);
glColor3ub (128, 0, 0);
glVertex2i(260, 496);
glVertex2i(275, 496);
glVertex2i(275, 511);
glVertex2i(260, 511);
glEnd();


glBegin(GL_QUADS);
glColor3ub (128, 0, 0);
glVertex2i(276, 496);
glVertex2i(291, 496);
glVertex2i(291, 511);
glVertex2i(276, 511);
glEnd();


///Building3

glBegin(GL_QUADS);
glColor3ub (0, 64, 128);
glVertex2i(300, 450);
glVertex2i(450, 450);
glVertex2i(450, 700);
glVertex2i(300, 700);
glEnd();


glBegin(GL_POLYGON);
glColor3ub (0, 51, 102);
glVertex2i(450, 450);
glVertex2i(470, 460);
glVertex2i(470, 720);
glVertex2i(450, 720);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (0, 38, 77);
glVertex2i(300, 700);
glVertex2i(450, 700);
glVertex2i(470, 720);
glVertex2i(320, 720);
glEnd();


///DOOR
glBegin(GL_QUADS);
glColor3ub (191, 191, 191);
glVertex2i(350, 450);
glVertex2i(400, 450);
glVertex2i(400, 520);
glVertex2i(350, 520);
glEnd();

glBegin(GL_LINES);
glColor3ub (0, 0, 0);
glVertex2i(375, 450);
glVertex2i(375, 520);
glEnd();


///Window1

glBegin(GL_QUADS);
glColor3ub (191, 191, 191);
glVertex2i(320, 560);
glVertex2i(340, 560);
glVertex2i(340, 670);
glVertex2i(320, 670);
glEnd();

glBegin(GL_QUADS);
glColor3ub (191, 191, 191);
glVertex2i(350, 560);
glVertex2i(370, 560);
glVertex2i(370, 670);
glVertex2i(350, 670);
glEnd();

glBegin(GL_QUADS);
glColor3ub (191, 191, 191);
glVertex2i(380, 560);
glVertex2i(400, 560);
glVertex2i(400, 670);
glVertex2i(380, 670);
glEnd();

glBegin(GL_QUADS);
glColor3ub (191, 191, 191);
glVertex2i(410, 560);
glVertex2i(430, 560);
glVertex2i(430, 670);
glVertex2i(410, 670);
glEnd();


glBegin(GL_LINES);
glColor3ub (0, 0, 0);
glVertex2i(320, 580);
glVertex2i(340, 580);
glVertex2i(320, 600);
glVertex2i(340, 600);
glVertex2i(320, 620);
glVertex2i(340, 620);
glVertex2i(320, 640);
glVertex2i(340, 640);
glVertex2i(320, 660);
glVertex2i(340, 660);

glBegin(GL_LINES);
glColor3ub (0, 0, 0);
glVertex2i(410, 580);
glVertex2i(430, 580);
glVertex2i(410, 600);
glVertex2i(430, 600);
glVertex2i(410, 620);
glVertex2i(430, 620);
glVertex2i(410, 640);
glVertex2i(430, 640);
glVertex2i(410, 660);
glVertex2i(430, 660);


glBegin(GL_LINES);
glColor3ub (0, 0, 0);
glVertex2i(350, 580);
glVertex2i(370, 580);
glVertex2i(350, 600);
glVertex2i(370, 600);
glVertex2i(350, 620);
glVertex2i(370, 620);
glVertex2i(350, 640);
glVertex2i(370, 640);
glVertex2i(350, 660);
glVertex2i(370, 660);

glBegin(GL_LINES);
glColor3ub (0, 0, 0);
glVertex2i(380, 580);
glVertex2i(400, 580);
glVertex2i(380, 600);
glVertex2i(400, 600);
glVertex2i(380, 620);
glVertex2i(400, 620);
glVertex2i(380, 640);
glVertex2i(400, 640);
glVertex2i(380, 660);
glVertex2i(400, 660);
//glVertex2i(400, 660);
glEnd();


}

void Garden()
{
    ///Tree1
    glBegin(GL_POLYGON);
    glColor3ub (77, 38, 0);
    glVertex2i(70, 0);
    glVertex2i(90, 0);
    glVertex2i(90, 40);
    glVertex2i(70, 40);
    glEnd();

    glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(80+30*cos(theta),60+35*sin(theta));
}
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(60+30*cos(theta),50+30*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(100+30*cos(theta),50+30*sin(theta));
}
glEnd();

///Tree2
    glBegin(GL_POLYGON);
    glColor3ub (77, 38, 0);
    glVertex2i(190, 0);
    glVertex2i(210, 0);
    glVertex2i(210, 40);
    glVertex2i(190, 40);
    glEnd();

    glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(200+30*cos(theta),60+35*sin(theta));
}
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(180+30*cos(theta),50+30*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(220+30*cos(theta),50+30*sin(theta));
}
glEnd();

///Tree3
    glBegin(GL_POLYGON);
    glColor3ub (77, 38, 0);
    glVertex2i(310, 0);
    glVertex2i(330, 0);
    glVertex2i(330, 40);
    glVertex2i(310, 40);
    glEnd();

    glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(320+30*cos(theta),60+35*sin(theta));
}
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(300+30*cos(theta),50+30*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(340+30*cos(theta),50+30*sin(theta));
}
glEnd();


///Tree4
    glBegin(GL_POLYGON);
    glColor3ub (77, 38, 0);
    glVertex2i(1400, 0);
    glVertex2i(1420, 0);
    glVertex2i(1420, 40);
    glVertex2i(1400, 40);
    glEnd();

    glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1410+30*cos(theta),60+35*sin(theta));
}
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1390+30*cos(theta),50+30*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1430+30*cos(theta),50+30*sin(theta));
}
glEnd();

///Tree5
    glBegin(GL_POLYGON);
    glColor3ub (77, 38, 0);
    glVertex2i(1520, 0);
    glVertex2i(1540, 0);
    glVertex2i(1540, 40);
    glVertex2i(1520, 40);
    glEnd();

    glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1530+30*cos(theta),60+35*sin(theta));
}
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1510+30*cos(theta),50+30*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1550+30*cos(theta),50+30*sin(theta));
}
glEnd();

///Tree6
    glBegin(GL_POLYGON);
    glColor3ub (77, 38, 0);
    glVertex2i(1640, 0);
    glVertex2i(1660, 0);
    glVertex2i(1660, 40);
    glVertex2i(1640, 40);
    glEnd();

    glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1650+30*cos(theta),60+35*sin(theta));
}
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1630+30*cos(theta),50+30*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 102, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1670+30*cos(theta),50+30*sin(theta));
}
glEnd();



}

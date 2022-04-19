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



void Field()
{

glBegin(GL_POLYGON);
glColor3ub (255, 255, 255);
glVertex2i(495, 0);
glVertex2i(1305, 0);
glVertex2i(1305, 175);
glVertex2i(495, 175);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (0, 102, 34);
glVertex2i(500, 0);
glVertex2i(1300, 0);
glVertex2i(1300, 170);
glVertex2i(500, 170);
glEnd();

glBegin(GL_POLYGON);
glColor3ub (255,255,255);
glVertex2i(898, 0);
glVertex2i(902, 0);
glVertex2i(902, 170);
glVertex2i(898, 170);
glEnd();

glBegin(GL_LINE_LOOP);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(900+120*cos(theta),0+100*sin(theta));
}
glEnd();


glBegin(GL_LINES);
glColor3ub (255,255,255);
glVertex2i(500, 80);
glVertex2i(630, 80);
glVertex2i(630, 0);
glVertex2i(630, 80);

glEnd();


glBegin(GL_LINES);
glColor3ub (255,255,255);
glVertex2i(1170, 80);
glVertex2i(1300, 80);
glVertex2i(1170, 0);
glVertex2i(1170, 80);

glEnd();

///Dustbin 3
glBegin(GL_POLYGON);
glColor3ub (0, 51, 77);
glVertex2i(720, 400);
glVertex2i(740, 400);
glVertex2i(744, 420);
glVertex2i(717, 420);
glEnd();


///Dustbin 4
glBegin(GL_POLYGON);
glColor3ub (0, 51, 77);
glVertex2i(1320, 400);
glVertex2i(1340, 400);
glVertex2i(1344, 420);
glVertex2i(1317, 420);
glEnd();

///Dustbin 5
glBegin(GL_POLYGON);
glColor3ub (0, 51, 77);
glVertex2i(1660, 400);
glVertex2i(1680, 400);
glVertex2i(1684, 420);
glVertex2i(1657, 420);
glEnd();

///Dustbin 5
glBegin(GL_POLYGON);
glColor3ub (0, 51, 77);
glVertex2i(120, 400);
glVertex2i(140, 400);
glVertex2i(144, 420);
glVertex2i(117, 420);
glEnd();


}




void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glPointSize(5.0);

glBegin(GL_QUADS);
glColor3ub (0, 153, 0); ///light green
glVertex2i(0, 0);
glVertex2i(1800, 0);
glVertex2i(1800, 500);
glVertex2i(0, 500);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (77, 26, 0); /// Hill
glVertex2i(0, 500);
glVertex2i(400, 500);
glVertex2i(200, 700);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (77, 26, 0); /// Hill
glVertex2i(400, 500);
glVertex2i(800, 500);
glVertex2i(600, 700);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (77, 26, 0); /// Hill
glVertex2i(1000, 500);
glVertex2i(1400, 500);
glVertex2i(1200, 700);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (77, 26, 0); /// Hill
glVertex2i(1400, 500);
glVertex2i(1800, 500);
glVertex2i(1600, 700);
glEnd();

glBegin(GL_QUADS);
glColor3ub (48, 48, 48); ///Ash
glVertex2i(0, 200);
glVertex2i(1800, 200);
glVertex2i(1800, 400);
glVertex2i(0, 400);
glEnd();

glBegin(GL_QUADS);
glColor3ub (198, 140, 83); ///Footpath
glVertex2i(0, 370);
glVertex2i(1800, 370);
glVertex2i(1800, 400);
glVertex2i(0, 400);
glEnd();

glBegin(GL_QUADS);
glColor3ub (198, 140, 83); ///Footpath
glVertex2i(0, 200);
glVertex2i(1800, 200);
glVertex2i(1800, 230);
glVertex2i(0, 230);
glEnd();

glBegin(GL_QUADS);
glColor3ub (153, 102, 51); ///Footpath
glVertex2i(0, 370);
glVertex2i(1800, 370);
glVertex2i(1800, 380);
glVertex2i(0, 380);
glEnd();

glBegin(GL_QUADS);
glColor3ub (153, 102, 51); ///Footpath
glVertex2i(0, 200);
glVertex2i(1800, 200);
glVertex2i(1800, 210);
glVertex2i(0, 210);
glEnd();


///Hospital_Ground
glBegin(GL_QUADS);
glColor3ub (120, 120, 120); ///Light ash
glVertex2i(700, 400);
glVertex2i(1100, 400);
glVertex2i(1100, 500);
glVertex2i(700, 500);
glEnd();

///Hospital Gate
glBegin(GL_QUADS);
glColor3ub (120, 120, 120);
glVertex2i(850, 370);
glVertex2i(950, 370);
glVertex2i(950, 400);
glVertex2i(850, 400);
glEnd();


///Hospital_Building
glBegin(GL_QUADS);
glColor3ub (255, 235, 153); ///Light Yellow
glVertex2i(750, 450);
glVertex2i(1050, 450);
glVertex2i(1050, 600);
glVertex2i(750, 600);
glEnd();

///Hospital_Building
glBegin(GL_QUADS);
glColor3ub (40,40,40); ///Dark Ash
glVertex2i(730, 600);
glVertex2i(1070, 600);
glVertex2i(1070, 620);
glVertex2i(730, 620);
glEnd();

///Hospital_Building
glBegin(GL_QUADS);
glColor3ub (255, 219, 77); /// Yellow
glVertex2i(860, 450);
glVertex2i(940, 450);
glVertex2i(940, 680);
glVertex2i(860, 680);
glEnd();

///Hospital_Building
glBegin(GL_QUADS);
glColor3ub (40,40,40); /// Dark Ash
glVertex2i(850, 680);
glVertex2i(950, 680);
glVertex2i(950, 700);
glVertex2i(850, 700);
glEnd();

///Hospital_Building
glBegin(GL_QUADS);
glColor3ub (255, 0, 0); /// Red Mark
glVertex2i(890, 620);
glVertex2i(910, 620);
glVertex2i(910, 670);
glVertex2i(890, 670);
glEnd();


///Hospital_Building
glBegin(GL_QUADS);
glColor3ub (255, 0, 0); /// Red Mark
glVertex2i(870, 635);
glVertex2i(930, 635);
glVertex2i(930, 655);
glVertex2i(870, 655);
glEnd();


///Hospital_Building
glBegin(GL_QUADS);
glColor3ub (217, 179, 255); /// Door
glVertex2i(855, 450);
glVertex2i(945, 450);
glVertex2i(945, 515);
glVertex2i(855, 515);
glEnd();

///Hospital_Building
glBegin(GL_QUADS);
glColor3ub (40,40,40); /// Door
glVertex2i(853, 515);
glVertex2i(947, 515);
glVertex2i(947, 535);
glVertex2i(853, 535);
glEnd();


///Hospital_Window1
glBegin(GL_QUADS);
glColor3ub (0, 153, 255); ///Light blue
glVertex2i(765, 470);
glVertex2i(795, 470);
glVertex2i(795, 510);
glVertex2i(765, 510);
glEnd();


///Hospital_Window2
glBegin(GL_QUADS);
glColor3ub (0, 153, 255); ///Light blue
glVertex2i(810, 470);
glVertex2i(840, 470);
glVertex2i(840, 510);
glVertex2i(810, 510);
glEnd();


///Hospital_Window3
glBegin(GL_QUADS);
glColor3ub (0, 153, 255); ///Light blue
glVertex2i(960, 470);
glVertex2i(990, 470);
glVertex2i(990, 510);
glVertex2i(960, 510);
glEnd();


///Hospital_Window4
glBegin(GL_QUADS);
glColor3ub (0, 153, 255); ///Light blue
glVertex2i(1005, 470);
glVertex2i(1035, 470);
glVertex2i(1035, 510);
glVertex2i(1005, 510);
glEnd();


///Hospital_Window5
glBegin(GL_QUADS);
glColor3ub (0, 153, 255); ///Light blue
glVertex2i(765, 540);
glVertex2i(795, 540);
glVertex2i(795, 580);
glVertex2i(765, 580);
glEnd();


///Hospital_Window6
glBegin(GL_QUADS);
glColor3ub (0, 153, 255); ///Light blue
glVertex2i(810, 540);
glVertex2i(840, 540);
glVertex2i(840, 580);
glVertex2i(810, 580);
glEnd();


///Hospital_Window7
glBegin(GL_QUADS);
glColor3ub (0, 153, 255); ///Light blue
glVertex2i(960, 540);
glVertex2i(990, 540);
glVertex2i(990, 580);
glVertex2i(960, 580);
glEnd();


///Hospital_Window8
glBegin(GL_QUADS);
glColor3ub (0, 153, 255); ///Light blue
glVertex2i(1005, 540);
glVertex2i(1035, 540);
glVertex2i(1035, 580);
glVertex2i(1005, 580);
glEnd();


///Hospital_Window_middle
glBegin(GL_QUADS);
glColor3ub (0, 153, 255); ///Light blue
glVertex2i(885, 545);
glVertex2i(915, 545);
glVertex2i(915, 585);
glVertex2i(885, 585);
glEnd();


///Hospital_Building
glBegin(GL_QUADS);
glColor3ub (51, 102, 255); /// Door
glVertex2i(875, 450);
glVertex2i(925, 450);
glVertex2i(925, 505);
glVertex2i(875, 505);
glEnd();

glBegin(GL_LINES);
glColor3ub (0, 0, 0);
glVertex2i(900, 450);
glVertex2i(900, 505);
glEnd();

///tree1
glBegin(GL_QUADS);
glColor3ub (77, 40, 0); ///wood
glVertex2i(1150, 400);
glVertex2i(1160, 400);
glVertex2i(1160, 430);
glVertex2i(1150, 430);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (0,77,0); ///leaf
glVertex2i(1120, 430);
glVertex2i(1190, 430);
glVertex2i(1155, 480);

glEnd();


///tree2
glBegin(GL_QUADS);
glColor3ub (77, 40, 0); ///wood
glVertex2i(1240, 400);
glVertex2i(1250, 400);
glVertex2i(1250, 430);
glVertex2i(1240, 430);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (0,77,0); ///leaf
glVertex2i(1210, 430);
glVertex2i(1280, 430);
glVertex2i(1245, 480);

glEnd();

///Tree3

glBegin(GL_QUADS);
glColor3ub (77, 40, 0); ///wood
glVertex2i(550, 400);
glVertex2i(560, 400);
glVertex2i(560, 430);
glVertex2i(550, 430);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (0,77,0); ///leaf
glVertex2i(520, 430);
glVertex2i(590, 430);
glVertex2i(555, 480);

glEnd();


///tree4
glBegin(GL_QUADS);
glColor3ub (77, 40, 0); ///wood
glVertex2i(640, 400);
glVertex2i(650, 400);
glVertex2i(650, 430);
glVertex2i(640, 430);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (0,77,0); ///leaf
glVertex2i(610, 430);
glVertex2i(680, 430);
glVertex2i(645, 480);

glEnd();


///tree5
glBegin(GL_QUADS);
glColor3ub (77, 40, 0); ///wood
glVertex2i(40, 400);
glVertex2i(50, 400);
glVertex2i(50, 430);
glVertex2i(40, 430);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (0,77,0); ///leaf
glVertex2i(10, 430);
glVertex2i(80, 430);
glVertex2i(45, 480);

glEnd();








///School_Ground
glBegin(GL_QUADS);
glColor3ub (120, 120, 120); ///Light ash
glVertex2i(1300, 400);
glVertex2i(1700, 400);
glVertex2i(1700, 500);
glVertex2i(1300, 500);
glEnd();


///School Gate
glBegin(GL_QUADS);
glColor3ub (120, 120, 120);
glVertex2i(1450, 370);
glVertex2i(1550, 370);
glVertex2i(1550, 400);
glVertex2i(1450, 400);
glEnd();


///School_Building
glBegin(GL_QUADS);
glColor3ub (255, 204, 153); ///Yellow
glVertex2i(1350, 450);
glVertex2i(1650, 450);
glVertex2i(1650, 570);
glVertex2i(1350, 570);
glEnd();

///Hospital_Building
glBegin(GL_QUADS);
glColor3ub (255, 0, 0); ///red
glVertex2i(1330, 570);
glVertex2i(1670, 570);
glVertex2i(1670, 590);
glVertex2i(1330, 590);
glEnd();

///School_Building
glBegin(GL_QUADS);
glColor3ub (255, 179, 102); ///Yellow
glVertex2i(1435, 450);
glVertex2i(1565, 450);
glVertex2i(1565, 640);
glVertex2i(1435, 640);
glEnd();

///School_Building
glBegin(GL_QUADS);
glColor3ub (255, 0, 0); ///red
glVertex2i(1425, 640);
glVertex2i(1575, 640);
glVertex2i(1575, 660);
glVertex2i(1425, 660);
glEnd();


///School_Building
glBegin(GL_QUADS);
glColor3ub (0, 153, 51); ///green
glVertex2i(1450, 620);
glVertex2i(1550, 620);
glVertex2i(1550, 635);
glVertex2i(1450, 635);
glEnd();


///School_Window1
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1445, 575);
glVertex2i(1470, 575);
glVertex2i(1470, 605);
glVertex2i(1445, 605);
glEnd();

///School_Window2
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1485, 575);
glVertex2i(1510, 575);
glVertex2i(1510, 605);
glVertex2i(1485, 605);
glEnd();

///School_Window3
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1525, 575);
glVertex2i(1550, 575);
glVertex2i(1550, 605);
glVertex2i(1525, 605);
glEnd();

///School_Window4
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1445, 525);
glVertex2i(1470, 525);
glVertex2i(1470, 555);
glVertex2i(1445, 555);
glEnd();

///School_Window5
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1525, 525);
glVertex2i(1550, 525);
glVertex2i(1550, 555);
glVertex2i(1525, 555);
glEnd();


///School_Window6
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1445, 475);
glVertex2i(1470, 475);
glVertex2i(1470, 505);
glVertex2i(1445, 505);
glEnd();


///School_Window7
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1525, 475);
glVertex2i(1550, 475);
glVertex2i(1550, 505);
glVertex2i(1525, 505);
glEnd();


///School_Door
glBegin(GL_QUADS);
glColor3ub (26, 83, 255);
glVertex2i(1480, 450);
glVertex2i(1515, 450);
glVertex2i(1515, 500);
glVertex2i(1480, 500);
glEnd();

glBegin(GL_LINES);
glColor3ub (0, 0, 0);
glVertex2i(1497, 450);
glVertex2i(1497, 500);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(255,255,255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1497+20*cos(theta),540+20*sin(theta));
}
glEnd();


glBegin(GL_LINES);
glColor3ub (0, 0, 0);
glVertex2i(1497, 535);
glVertex2i(1497, 555);
glEnd();

glBegin(GL_LINES);
glColor3ub (0, 0, 0);
glVertex2i(1490, 540);
glVertex2i(1510, 540);
glEnd();

///School_Window_left
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1360, 525);
glVertex2i(1385, 525);
glVertex2i(1385, 555);
glVertex2i(1360, 555);
glEnd();

///School_Window_left
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1400, 525);
glVertex2i(1425, 525);
glVertex2i(1425, 555);
glVertex2i(1400, 555);
glEnd();


///School_Window_Right
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1575, 525);
glVertex2i(1600, 525);
glVertex2i(1600, 555);
glVertex2i(1575, 555);
glEnd();

///School_Window_Right
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1615, 525);
glVertex2i(1640, 525);
glVertex2i(1640, 555);
glVertex2i(1615, 555);
glEnd();


///School_Window_left2
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1360, 475);
glVertex2i(1385, 475);
glVertex2i(1385, 505);
glVertex2i(1360, 505);
glEnd();

///School_Window_left2
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1400, 475);
glVertex2i(1425, 475);
glVertex2i(1425, 505);
glVertex2i(1400, 505);
glEnd();

///School_Window_Right2
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1575, 475);
glVertex2i(1600, 475);
glVertex2i(1600, 505);
glVertex2i(1575, 505);
glEnd();

///School_Window_Right2
glBegin(GL_QUADS);
glColor3ub (128, 229, 255);
glVertex2i(1615, 475);
glVertex2i(1640, 475);
glVertex2i(1640, 505);
glVertex2i(1615, 505);
glEnd();

///School_Flag
glBegin(GL_QUADS);
glColor3ub (0, 0, 0);
glVertex2i(1495, 660);
glVertex2i(1500, 660);
glVertex2i(1500, 700);
glVertex2i(1495, 700);
glEnd();

///School_Flag
glBegin(GL_QUADS);
glColor3ub (0, 102, 36);
glVertex2i(1500, 680);
glVertex2i(1530, 680);
glVertex2i(1530, 700);
glVertex2i(1500, 700);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1515+5*cos(theta),690+5*sin(theta));
}
glEnd();

///School_Stairs
glBegin(GL_QUADS);
glColor3ub (64, 64, 64);
glVertex2i(1450, 445);
glVertex2i(1545, 445);
glVertex2i(1545, 450);
glVertex2i(1450, 450);
glEnd();

///School_Stairs2
glBegin(GL_QUADS);
glColor3ub (38, 38, 38);
glVertex2i(1445, 440);
glVertex2i(1550, 440);
glVertex2i(1550, 445);
glVertex2i(1445, 445);
glEnd();

///School_Stairs3
glBegin(GL_QUADS);
glColor3ub (64, 64, 64);
glVertex2i(1440, 435);
glVertex2i(1555, 435);
glVertex2i(1555, 440);
glVertex2i(1440, 440);
glEnd();


///tree3
glBegin(GL_QUADS);
glColor3ub (77, 40, 0); ///wood
glVertex2i(1745, 400);
glVertex2i(1755, 400);
glVertex2i(1755, 430);
glVertex2i(1745, 430);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub (0,77,0); ///leaf
glVertex2i(1715, 430);
glVertex2i(1785, 430);
glVertex2i(1750, 480);

glEnd();

///Road Mark1
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(100, 290);
glVertex2i(200, 290);
glVertex2i(200, 310);
glVertex2i(100, 310);
glEnd();


///Zebra Cross1
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 355);
glVertex2i(270, 355);
glVertex2i(270, 360);
glVertex2i(230, 360);
glEnd();

///Zebra Cross2
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 345);
glVertex2i(270, 345);
glVertex2i(270, 350);
glVertex2i(230, 350);
glEnd();

///Zebra Cross3
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 335);
glVertex2i(270, 335);
glVertex2i(270, 340);
glVertex2i(230, 340);
glEnd();

///Zebra Cross4
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 325);
glVertex2i(270, 325);
glVertex2i(270, 330);
glVertex2i(230, 330);
glEnd();

///Zebra Cross5
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 315);
glVertex2i(270, 315);
glVertex2i(270, 320);
glVertex2i(230, 320);
glEnd();

///Zebra Cross6
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 305);
glVertex2i(270, 305);
glVertex2i(270, 310);
glVertex2i(230, 310);
glEnd();

///Zebra Cross7
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 295);
glVertex2i(270, 295);
glVertex2i(270, 300);
glVertex2i(230, 300);
glEnd();


///Zebra Cross8
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 285);
glVertex2i(270, 285);
glVertex2i(270, 290);
glVertex2i(230, 290);
glEnd();

///Zebra Cross9
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 275);
glVertex2i(270, 275);
glVertex2i(270, 280);
glVertex2i(230, 280);
glEnd();


///Zebra Cross10
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 265);
glVertex2i(270, 265);
glVertex2i(270, 270);
glVertex2i(230, 270);
glEnd();

///Zebra Cross11
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 255);
glVertex2i(270, 255);
glVertex2i(270, 260);
glVertex2i(230, 260);
glEnd();

///Zebra Cross12
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 245);
glVertex2i(270, 245);
glVertex2i(270, 250);
glVertex2i(230, 250);
glEnd();

///Zebra Cross13
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(230, 235);
glVertex2i(270, 235);
glVertex2i(270, 240);
glVertex2i(230, 240);
glEnd();


///Road Mark2
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(300, 290);
glVertex2i(400, 290);
glVertex2i(400, 310);
glVertex2i(300, 310);
glEnd();


///Road Mark3
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(500, 290);
glVertex2i(600, 290);
glVertex2i(600, 310);
glVertex2i(500, 310);
glEnd();

///Road Mark4
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(700, 290);
glVertex2i(800, 290);
glVertex2i(800, 310);
glVertex2i(700, 310);
glEnd();


///Zebra Cross1
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 355);
glVertex2i(870, 355);
glVertex2i(870, 360);
glVertex2i(830, 360);
glEnd();

///Zebra Cross2
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 345);
glVertex2i(870, 345);
glVertex2i(870, 350);
glVertex2i(830, 350);
glEnd();

///Zebra Cross3
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 335);
glVertex2i(870, 335);
glVertex2i(870, 340);
glVertex2i(830, 340);
glEnd();

///Zebra Cross4
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 325);
glVertex2i(870, 325);
glVertex2i(870, 330);
glVertex2i(830, 330);
glEnd();

///Zebra Cross5
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 315);
glVertex2i(870, 315);
glVertex2i(870, 320);
glVertex2i(830, 320);
glEnd();

///Zebra Cross6
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 305);
glVertex2i(870, 305);
glVertex2i(870, 310);
glVertex2i(830, 310);
glEnd();

///Zebra Cross7
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 295);
glVertex2i(870, 295);
glVertex2i(870, 300);
glVertex2i(830, 300);
glEnd();


///Zebra Cross8
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 285);
glVertex2i(870, 285);
glVertex2i(870, 290);
glVertex2i(830, 290);
glEnd();

///Zebra Cross9
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 275);
glVertex2i(870, 275);
glVertex2i(870, 280);
glVertex2i(830, 280);
glEnd();


///Zebra Cross10
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 265);
glVertex2i(870, 265);
glVertex2i(870, 270);
glVertex2i(830, 270);
glEnd();

///Zebra Cross11
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 255);
glVertex2i(870, 255);
glVertex2i(870, 260);
glVertex2i(830, 260);
glEnd();

///Zebra Cross12
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 245);
glVertex2i(870, 245);
glVertex2i(870, 250);
glVertex2i(830, 250);
glEnd();

///Zebra Cross13
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(830, 235);
glVertex2i(870, 235);
glVertex2i(870, 240);
glVertex2i(830, 240);
glEnd();


///Road Mark5
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(900, 290);
glVertex2i(1000, 290);
glVertex2i(1000, 310);
glVertex2i(900, 310);
glEnd();

///Road Mark6
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1100, 290);
glVertex2i(1200, 290);
glVertex2i(1200, 310);
glVertex2i(1100, 310);
glEnd();


///Road Mark7
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1300, 290);
glVertex2i(1400, 290);
glVertex2i(1400, 310);
glVertex2i(1300, 310);
glEnd();


///Road Mark8
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1500, 290);
glVertex2i(1600, 290);
glVertex2i(1600, 310);
glVertex2i(1500, 310);
glEnd();

///Zebra Cross1
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 355);
glVertex2i(1670, 355);
glVertex2i(1670, 360);
glVertex2i(1630, 360);
glEnd();

///Zebra Cross2
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 345);
glVertex2i(1670, 345);
glVertex2i(1670, 350);
glVertex2i(1630, 350);
glEnd();

///Zebra Cross3
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 335);
glVertex2i(1670, 335);
glVertex2i(1670, 340);
glVertex2i(1630, 340);
glEnd();

///Zebra Cross4
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 325);
glVertex2i(1670, 325);
glVertex2i(1670, 330);
glVertex2i(1630, 330);
glEnd();

///Zebra Cross5
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 315);
glVertex2i(1670, 315);
glVertex2i(1670, 320);
glVertex2i(1630, 320);
glEnd();

///Zebra Cross6
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 305);
glVertex2i(1670, 305);
glVertex2i(1670, 310);
glVertex2i(1630, 310);
glEnd();

///Zebra Cross7
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 295);
glVertex2i(1670, 295);
glVertex2i(1670, 300);
glVertex2i(1630, 300);
glEnd();


///Zebra Cross8
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 285);
glVertex2i(1670, 285);
glVertex2i(1670, 290);
glVertex2i(1630, 290);
glEnd();

///Zebra Cross9
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 275);
glVertex2i(1670, 275);
glVertex2i(1670, 280);
glVertex2i(1630, 280);
glEnd();


///Zebra Cross10
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 265);
glVertex2i(1670, 265);
glVertex2i(1670, 270);
glVertex2i(1630, 270);
glEnd();

///Zebra Cross11
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 255);
glVertex2i(1670, 255);
glVertex2i(1670, 260);
glVertex2i(1630, 260);
glEnd();

///Zebra Cross12
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 245);
glVertex2i(1670, 245);
glVertex2i(1670, 250);
glVertex2i(1630, 250);
glEnd();

///Zebra Cross13
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1630, 235);
glVertex2i(1670, 235);
glVertex2i(1670, 240);
glVertex2i(1630, 240);
glEnd();



///Road Mark9
glBegin(GL_QUADS);
glColor3ub (255, 255, 255); ///White
glVertex2i(1700, 290);
glVertex2i(1800, 290);
glVertex2i(1800, 310);
glVertex2i(1700, 310);
glEnd();



///Sun
float theta;

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(500+45*cos(theta),800+40*sin(theta));
}
glEnd();


///cloud1
glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(150+50*cos(theta),800+45*sin(theta));

}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(100+40*cos(theta),790+35*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(200+40*cos(theta),790+35*sin(theta));
}
glEnd();
glPopMatrix();

///cloud2
glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(550+70*cos(theta),800+35*sin(theta));

}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(450+60*cos(theta),790+25*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(400+60*cos(theta),790+20*sin(theta));
}
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(450+60*cos(theta),800+25*sin(theta));
}
glEnd();
glPopMatrix();


///cloud3
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(850+40*cos(theta),790+35*sin(theta));
}
glEnd();


glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(950+40*cos(theta),790+35*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(900+50*cos(theta),800+45*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(810+25*cos(theta),780+20*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(990+25*cos(theta),780+20*sin(theta));
}
glEnd();
glPopMatrix();

///cloud4
glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1350+40*cos(theta),790+35*sin(theta));
}
glEnd();


glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1450+40*cos(theta),790+35*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1400+50*cos(theta),800+45*sin(theta));
}
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1310+25*cos(theta),780+20*sin(theta));
}
glEnd();


glBegin(GL_POLYGON);
glColor3ub(255, 255, 255);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(1490+25*cos(theta),780+20*sin(theta));
}
glEnd();
glPopMatrix();


///rail line
glColor3ub(150, 150, 144);
	glBegin(GL_QUADS);
    glVertex2i(0,180);
    glVertex2i(0,205);
    glVertex2i(1800,205);
    glVertex2i(1800,180);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(0,202);
    glVertex2i(1800,202);
    glVertex2i(1800,205);
    glVertex2i(0,205);

    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(0,180);
    glVertex2i(1800,180);
    glVertex2i(1800,184);
    glVertex2i(0,184);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    float j;
    for(j=0;j<=1800;j+=20) //rail line
   {
        glVertex2i(10+j,180);
        glVertex2i(15+j,205);

    }
    glEnd();
ambulance1();
ambulance2();
schoolBus();
Cars();


///Making of Rail Body

    glPushMatrix();
glTranslatef(position4,0.0f, 0.0f);

    glColor3f(0.192, 0.576, 0.705);
    glBegin(GL_QUADS);
    glVertex2i(100, 200);
    glVertex2i(170, 200);
	glVertex2i(170, 250);
	glVertex2i(100, 250);
	glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(110, 225);
    glVertex2i(120, 225);
	glVertex2i(120, 240);
	glVertex2i(110, 240);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(130, 225);
    glVertex2i(140, 225);
	glVertex2i(140, 240);
	glVertex2i(130, 240);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(150, 225);
    glVertex2i(160, 225);
	glVertex2i(160, 240);
	glVertex2i(150, 240);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
    glVertex2i(100, 210);
    glVertex2i(170, 210);
	glVertex2i(170, 215);
	glVertex2i(100, 215);
	glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(170, 200);
    glVertex2i(176, 210);
	glVertex2i(176, 260);
	glVertex2i(170, 250);
	glEnd();


	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(101, 250);
    glVertex2i(170, 250);
	glVertex2i(176, 260);
	glVertex2i(105, 260);
	glEnd();

	glPushMatrix();
    glTranslatef(115, 192, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(109, 109, 115);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();


    glPushMatrix();
    glTranslatef(155, 192, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(109, 109, 115);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();


    glPushMatrix();
    glTranslatef(75, 0, 0);

    glColor3f(0.192, 0.576, 0.705);
    glBegin(GL_QUADS);
    glVertex2i(100, 200);
    glVertex2i(170, 200);
	glVertex2i(170, 250);
	glVertex2i(100, 250);
	glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(110, 225);
    glVertex2i(120, 225);
	glVertex2i(120, 240);
	glVertex2i(110, 240);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(130, 225);
    glVertex2i(140, 225);
	glVertex2i(140, 240);
	glVertex2i(130, 240);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(150, 225);
    glVertex2i(160, 225);
	glVertex2i(160, 240);
	glVertex2i(150, 240);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
    glVertex2i(100, 210);
    glVertex2i(170, 210);
	glVertex2i(170, 215);
	glVertex2i(100, 215);
	glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(170, 200);
    glVertex2i(176, 210);
	glVertex2i(176, 260);
	glVertex2i(170, 250);
	glEnd();


	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(101, 250);
    glVertex2i(170, 250);
	glVertex2i(176, 260);
	glVertex2i(105, 260);
	glEnd();

	glPushMatrix();
    glTranslatef(115, 192, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(109, 109, 115);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();


   glPushMatrix();
    glTranslatef(155, 192, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(109, 109, 115);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPopMatrix();



    glPushMatrix();
    glTranslatef(-75, 0, 0);

    glColor3f(0.192, 0.576, 0.705);
    glBegin(GL_QUADS);
    glVertex2i(100, 200);
    glVertex2i(170, 200);
	glVertex2i(170, 250);
	glVertex2i(100, 250);
	glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(110, 225);
    glVertex2i(120, 225);
	glVertex2i(120, 240);
	glVertex2i(110, 240);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(130, 225);
    glVertex2i(140, 225);
	glVertex2i(140, 240);
	glVertex2i(130, 240);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(150, 225);
    glVertex2i(160, 225);
	glVertex2i(160, 240);
	glVertex2i(150, 240);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
    glVertex2i(100, 210);
    glVertex2i(170, 210);
	glVertex2i(170, 215);
	glVertex2i(100, 215);
	glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(170, 200);
    glVertex2i(176, 210);
	glVertex2i(176, 260);
	glVertex2i(170, 250);
	glEnd();


	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(101, 250);
    glVertex2i(170, 250);
	glVertex2i(176, 260);
	glVertex2i(105, 260);
	glEnd();

	glPushMatrix();
    glTranslatef(115, 192, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(109, 109, 115);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();


    glPushMatrix();
    glTranslatef(155, 192, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(109, 109, 115);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(150, 0, 0);

    glColor3f(0.192, 0.576, 0.705);
    glBegin(GL_QUADS);
    glVertex2i(100, 200);
    glVertex2i(170, 200);
	glVertex2i(170, 250);
	glVertex2i(100, 250);
	glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(110, 225);
    glVertex2i(120, 225);
	glVertex2i(120, 240);
	glVertex2i(110, 240);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(130, 225);
    glVertex2i(140, 225);
	glVertex2i(140, 240);
	glVertex2i(130, 240);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(150, 225);
    glVertex2i(160, 225);
	glVertex2i(160, 240);
	glVertex2i(150, 240);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
    glVertex2i(100, 210);
    glVertex2i(170, 210);
	glVertex2i(170, 215);
	glVertex2i(100, 215);
	glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(170, 200);
    glVertex2i(176, 210);
	glVertex2i(176, 260);
	glVertex2i(170, 250);
	glEnd();


	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2i(101, 250);
    glVertex2i(170, 250);
	glVertex2i(176, 260);
	glVertex2i(105, 260);
	glEnd();

	glPushMatrix();
    glTranslatef(115, 192, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(109, 109, 115);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
   glPopMatrix();


   glPushMatrix();
    glTranslatef(155, 192, 0.0);
    glBegin(GL_POLYGON);
    glColor3ub(109, 109, 115);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPopMatrix();

    glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
    glVertex2i(322, 245);
    glVertex2i(330, 245);
	glVertex2i(330, 232);
	glVertex2i(322, 232);
	glEnd();

	glColor3f(0.325, 0.101, 0.619);
	glBegin(GL_QUADS);
    glVertex2i(310, 253);
    glVertex2i(300, 253);
	glVertex2i(300, 258);
	glVertex2i(310, 258);
	glEnd();

	glPushMatrix();
    glTranslatef(303, 267, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.709, 0.701, 0.717);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=3;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(293, 270, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.709, 0.701, 0.717);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=4;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(283, 272, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(0.709, 0.701, 0.717);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPopMatrix();

///End of Making of Rail Body


///Helicopter
    glPushMatrix();
    glTranslatef(position3, 0.0, 0.0);

   glBegin(GL_POLYGON);
    glBegin(GL_POLYGON);
    glColor3ub(325,355,75);
    glVertex2i(115,850);
    glVertex2i(20,850);
    glVertex2i(20,820);
    glVertex2i(100,820);
    glVertex2i(130,800);
    glVertex2i(200,800);
    glVertex2i(200,830);
    glVertex2i(170,860);
    glVertex2i(155,860);
    glVertex2i(155,870);
    glVertex2i(130,870);
    glEnd();


    glColor3ub(225, 19, 14);
    glBegin(GL_TRIANGLES);
    glVertex2i(200,800);
    glVertex2i(200,815);
    glVertex2i(215,808);
    glEnd();

     glPushMatrix();
     glTranslatef(28, 850, 0);

    glBegin(GL_LINE_LOOP);
    glColor3ub(225, 19, 14);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
     glTranslatef(28, 850, 0);

    glBegin(GL_LINE_LOOP);
    glColor3ub(225, 19, 14);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=16;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glColor3ub(225, 19, 14);
    glBegin(GL_TRIANGLES);
    glVertex2i(200,800);
    glVertex2i(200,830);
    glVertex2i(215,808);
    glEnd();

     glPushMatrix();
     glTranslatef(142, 870, 0);

    glBegin(GL_LINE_LOOP);
    glColor3ub(225, 19, 14);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(142, 870, 0);

    glBegin(GL_LINE_LOOP);
    glColor3ub(225, 19, 14);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=29;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(130, 790, 0);

    glBegin(GL_POLYGON);
    glColor3ub(44, 42, 45);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=8;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(165, 790, 0);

    glBegin(GL_POLYGON);
    glColor3ub(44, 42, 45);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=8;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();
glPopMatrix();
//End Helicopter




building();
Field();
Garden();
Cars2();
Cars3();
Cars4();

glFlush ();
}
///Train
void railForward(int value){

if(frd){

    position4 += 2.0;

    if (position4 > 1800) {
		position4 -= 1800;
	}

	glutPostRedisplay();
	glutTimerFunc(25, railForward, 0);
}
}

void railBackward(int value){
if(bck){

    position4 -= 2.0;

     if (position4 < -1800) {
		position4 = 1800;
	}
	glutPostRedisplay();
	glutTimerFunc(25, railBackward, 0);
}
}
void myInit (void)
{
glClearColor(0.0,0.5,0.8,1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1800.0, 0.0, 900.0);
}
/// Rain
void Rain(int value){

if(rainday){

    _rain += 0.01f;

    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
        int x=rand(),y=rand();
        x%=1800; y%=1800;
        glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }

	glutPostRedisplay();
	glutTimerFunc(5, Rain, 0);

    glFlush();

}
}
/// Night
void Night(int value){
if(night){


    glClearColor(0.0,0.0,0.0,0.0);
	glutPostRedisplay();
    glutTimerFunc(5, Night, 0);

    float theta;

glBegin(GL_POLYGON);
glColor3ub(204, 204, 204);
for(int i=0; i<360; i++)
{
    theta = i*PI/180;
    glVertex2f(500+45*cos(theta),800+40*sin(theta));
}
glEnd();

    glFlush();

}
}
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed3 += 5.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}
if (button == GLUT_RIGHT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed3 -= 5.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}
void myKeyboard(unsigned char key, int x, int y){
	switch (key)
	{
	case 'a':
        frd = false;
	    bck = true;
	    railBackward(position4);
	break;

	case 'd':
	     frd = true;
	     bck = false;
         railForward(position4);
	    break;

    case 's':
        frd = false;
        bck = false;
        break;

    case 'r':
        rainday = true;
        Rain(_rain);

        break;

    case 'e':
        rainday = false;

        break;

    case 'n':
        night = true;
        Night(_nt);
        break;

    case 'b':
        night = false;
        glClearColor(0.0,0.5,0.8,1.0);
        break;

    case 27:     // ESC key
        exit(0);
        break;

	default:
	break;
	}
}
int main(int argc, char** argv)
{
   cout << endl << "*********** Natural View of a Town ********************" << endl << endl;

    cout << "Press D : To Forward the Train" << endl << endl;
    cout << "Press A : To Backward the Train" << endl << endl;
    cout << "Press S : To Stop the Train" << endl << endl;

    cout << "Press R : For Rain " << endl << endl;
    cout << "Press E : For Stop Rain" << endl << endl;

    cout << "Press N : For Night " << endl << endl;
    cout << "Press B : For Day" << endl << endl;

    cout << "Press LEFT Button on Mouse : For Increase Speed" << endl << endl;
    cout << "Press RIGHT Button on Mouse : For Decrease Speed" << endl << endl;

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1800, 900);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Natural View of a Town");
glutDisplayFunc(myDisplay);
glutMouseFunc(handleMouse);
glutKeyboardFunc(myKeyboard);
myInit ();
glutTimerFunc(1000, update, 0);
glutTimerFunc(1000, update2, 0);
glutTimerFunc(1000, update3, 0);
glutMainLoop();
}


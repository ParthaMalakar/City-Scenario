#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14

GLfloat position = 0.0;
GLfloat position2 = 0.0;
GLfloat position3 = 0.0;
GLfloat speed = 3.5f;
GLfloat speed2 = 4.5f;
GLfloat speed3 = 30.5f;

void update(int value) {

    if(position > 1800.0)
        position = -1800.1f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void update2(int value) {

    if(position2 > 1800.0)
        position2 = -1800.0f;

    position2 += speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}
void update3(int value) {

    if(position3 > 1800.0)
        position3 = -1800.1f;

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





void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glPointSize(5.0);
glBegin(GL_QUADS);
glColor3ub (102, 179, 255); ///sky blue
glVertex2i(0, 0);
glVertex2i(1800, 0);
glVertex2i(1800, 900);
glVertex2i(0, 900);
glEnd();

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
ambulance1();
ambulance2();

Cars();

Cars2();
Cars3();


glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1800.0, 0.0, 900.0);
}
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1800, 900);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutTimerFunc(1000, update, 0);
glutTimerFunc(1000, update2, 0);
glutTimerFunc(1000, update3, 0);
glutMainLoop();
}


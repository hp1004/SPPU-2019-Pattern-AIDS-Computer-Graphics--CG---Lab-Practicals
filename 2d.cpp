#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
    int gd = DETECT,gm, ch, tx, ty, sx, sy,x1,x2,y1,y2,x,y,x3,x4,y3,y4;
    float theta;
    initgraph(&gd,&gm,NULL);
    cout << "TRANSFORMATION ARE:\n 1. TRANSLATION\n 2. ROTATION\n 3. SCALING" << endl;
    cout << "ENTER YOUR CHOICE" << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
    {
        cout << "TRANSLATION" << endl;
        rectangle(200,200,300,300);
        cout << "ENTER TRANSLATION AMOUNT: " << endl;
        cin >> tx >> ty;
        rectangle(200+tx,300+ty,200+tx,300+ty);
        break;
    }
        
    case 2:
    {
        cout << "ROTATION" << endl;
        x1=200;
        x2=300;
        y1=200;
        y2=300;
        rectangle(x1,y1,x2,y2);
        cout << "ENTER THE ANGLE OF ROTATION: " << endl;
        cin>>theta;
        theta=theta*3.14/180;
        x=x1+((x2-x1)*cos(theta)-(y2-y1)*sin(theta));
        y=y1+((y2-y1)*cos(theta)+(x2-x1)*sin(theta));
        x3=x1+((x1-x1)*cos(theta)-(y2-y1)*sin(theta));
        y3=y1+((y2-y1)*cos(theta)+(x1-x1)*sin(theta));
        x4=x1+((x2-x1)*cos(theta)-(y1-y1)*sin(theta));
        y4=y1+((y1-y1)*cos(theta)+(x2-x1)*sin(theta));
        line(x1+200,y1,x3+200,y3);
        line(x1+200,y1,x4+200,y4);
        line(x+200,y,x3+200,y3);
        line(x+200,y,x4+200,y4);
        break;
    }

    case 3:
    {
        cout << "SCALING" << endl;
        rectangle(100,100,200,200);
        cout << "ENTER SCALING FACTOR" << endl;
        cin >> sx;
        rectangle(200+20,200+20,200*sx+20,200*sx+20);
        break;
    }

    default:
    {
        cout << "WRONG CHOICE" << endl;
        break;
    }
    }
    getch();
    closegraph();
}
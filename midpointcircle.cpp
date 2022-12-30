#include<iostream>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<conio.h>
using namespace std;
int main()
{
    int r,xc,yc,x,y,d,gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    cout<<"Enter radius:"<<endl;
    cin>>r;
    cout<<"Enter value of xc and yc:"<<endl;
    cin>>xc>>yc;
    x=0;
    y=r;
    d=1-r;
    do
    {
        putpixel(xc+x,yc+y,5);
        putpixel(xc-x,yc+y,5);
        putpixel(xc+x,yc-y,5);
        putpixel(xc-x,yc-y,5);
        putpixel(xc+y,yc+x,5);
        putpixel(xc-y,yc+x,5);
        putpixel(xc+y,yc-x,5);
        putpixel(xc-y,yc-x,5);
    
    if(d<0)
    {
        x++;
        d=d+2*x+2;
    }
    else
    {
        x++;
        y--;
        d=d+2*x-2*y+1;
    }
    }while(x<y);
    getch();
    closegraph();
    return 0;

}
    


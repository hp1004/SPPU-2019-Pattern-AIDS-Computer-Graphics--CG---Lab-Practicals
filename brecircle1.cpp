#include<iostream>
#include<math.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	int xc,yc,x,y,r,d;
	initgraph(&gd,&gm,NULL);
	cout<<"Enter radius:"<<endl;
	cin>>r;
	cout<<"Enter xc and yc :"<<endl;
	cin>>xc>>yc;
	x=0;
	y=r;
	d=3-2*r;
	while(x<=y)
	{
		putpixel(xc+x,yc+y,5);
		putpixel(xc+y,yc+x,5);
		putpixel(xc-y,yc-x,5);
		putpixel(xc+y,yc-x,5);
		putpixel(xc-y,yc+x,5);
		putpixel(xc-x,yc-y,5);
		putpixel(xc+x,yc-y,5);
		putpixel(xc-x,yc+y,5);
		
		if(d<=0)
		{
			d=d+4*x+6;
		}
		else
		{
			d=d+(4*x)-(4*y)+10;
			y=y-1;
		}
		x=x+1;
	}
	getch();
	closegraph();
	return 0;
	
}

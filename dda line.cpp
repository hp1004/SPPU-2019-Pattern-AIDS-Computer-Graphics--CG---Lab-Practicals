#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	int x1,y1,x2,y2,dx,dy,xincr,yincr,steps,i;
	initgraph(&gd,&gm,NULL);
	cout<<"Enter values of x1 and y1"<<endl;
	cin>>x1>>y1;
	cout<<"Enter values of x2 and y2:"<<endl;
	cin>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
	{
		steps=dx;
	}
	else
	{
		steps=dy;
	}
	xincr=dx/steps;
	yincr=dy/steps;
	for(i=0;i<steps;i++)
	{
		putpixel(x1,y1,3);
		x1=x1+xincr;
		y1=y1+yincr;
	}
	closegraph();
	return 0;
}

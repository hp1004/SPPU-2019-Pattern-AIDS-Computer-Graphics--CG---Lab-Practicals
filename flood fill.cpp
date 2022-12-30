#include<iostream>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
void floodfill(int x,int y,int fillcolor,int oldcolor)
{
	if(getpixel(x,y)==oldcolor)
	{
		setcolor(oldcolor);
		putpixel(x,y,fillcolor);
		floodfill(x+1,y,fillcolor,oldcolor);
		floodfill(x-1,y,fillcolor,oldcolor);
		floodfill(x,y+1,fillcolor,oldcolor);
		floodfill(x,y-1,fillcolor,oldcolor);
		delay(50);
	}
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	rectangle(50,50,100,100);
	floodfill(55,55,12,0);
	getch();
	closegraph();
	return 0;
}

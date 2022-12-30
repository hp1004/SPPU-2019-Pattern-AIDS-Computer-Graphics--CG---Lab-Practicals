#include<iostream>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
using namespace std;
void boundryfill(int x,int y,int f_color,int o_color)
{
	if(getpixel(x,y)!=f_color && getpixel(x,y)!=o_color)
	{
		setcolor(f_color);
		putpixel(x,y,f_color);
		boundryfill(x+1,y,f_color,o_color);
		boundryfill(x-1,y,f_color,o_color);
		boundryfill(x,y+1,f_color,o_color);
		boundryfill(x,y-1,f_color,o_color);
	}
}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	rectangle(50,50,100,100);
	boundryfill(55,55,12,15);
	getch();
	closegraph();
	return 0;
}

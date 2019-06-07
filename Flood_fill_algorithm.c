#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void flood(int,int,int,int);

void main()
{
int gd=DETECT, gm;

initgraph(&gd, &gm,"C:\\TC\\bgi");
setcolor(RED);

line(100, 100, 120, 100);
setcolor(GREEN);
line(120, 100, 120, 120);
setcolor(YELLOW);
line(120,120,100,120);
setcolor(MAGENTA);
line(100,120,100,100);
flood(105,105,MAGENTA,BLACK);

getch();
closegraph();
}



void flood(int x,int y, int fill ,int oldcolor)
{
if(getpixel(x,y)==oldcolor)
{
putpixel(x,y,fill);
flood(x+1,y,fill,oldcolor);
flood(x-1,y,fill,oldcolor);
flood(x,y+1,fill,oldcolor);
flood(x,y-1,fill,oldcolor);
}
}


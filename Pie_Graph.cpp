#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void boundary(int,int,int,int);

void main()
{
int gd=DETECT,gm,x,y;
int arr[]={100,100,150,200,250,270,100,100};

initgraph(&gd,&gm,"C:\\TC\\bgi");
drawpoly(4,arr);
//putpixel(140,150,RED);
boundary(140,150,RED,WHITE);

getch();
closegraph();
}

void boundary(int xc,int yc,int fill,int bcolor)
{
if(getpixel(xc,yc)!=fill && getpixel(xc,yc)!=bcolor)
{
putpixel(xc,yc,fill);
boundary(xc+1,yc,fill,bcolor);
boundary(xc-1,yc,fill,bcolor);
boundary(xc,yc+1,fill,bcolor);
boundary(xc,yc-1,fill,bcolor);
}
}


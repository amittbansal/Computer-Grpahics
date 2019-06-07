#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
int x1,y1,x2,y2,dx,dy,x,y,p,xend;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");

printf("enter the value of coordinate");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
dx = abs (x2 - x1);
dy = abs (y2 - y1);
p = (2*dy) -dx;

if (x1<x2)
{
x=x1;
y=y1;
xend = x2;
}
else
{ 
x=x2;
y=y2;
xend=x1;
}

putpixel(x,y,7);

while (x<=xend)
{
x=x+1;
if (p<0)
{
p=p+(2*dy);
}
else
{
p=p+2*(dy-dx);
y++;
}
putpixel (x,y,7);
}

getch();
closegraph();
}


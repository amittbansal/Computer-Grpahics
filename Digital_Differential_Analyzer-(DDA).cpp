#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
#define Round(a) int((a+0.5))

void main()
{
float x1,x2,y1,y2,x,y,xinc,yinc,step,dx,dy;
int gd=DETECT,gm;
initgraph(&gd,&gm,"k:\\bgi");

cout<<"Enter 1st coordinates of line";
cin>>x1>>y1;
cout<<"Enter 2nd coordinates";
cin>>x2>>y2;
dx=(x2-x1);
dy=(y2-y1);
if (abs(dx) >= abs(dy))
{
step=abs(dx);
  }
else
  {
step=abs(dy);
}
xinc=(dx/step);
yinc=(dy/step);
x=x1;
y=y1;
putpixel(x,y,7);
while (x<=x2)
{
x=(x+xinc);
y=(y+yinc);
putpixel(Round(x),Round(y),6);
}

getch();
closegraph();
}


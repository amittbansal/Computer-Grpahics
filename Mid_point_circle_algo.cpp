#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>

void main()
{
float x,y,p,r,xc,yc;
int gd=DETECT,gm;
initgraph(&gd,&gm,"k:\\bgi");

cout<<"Enter Radius of circle";
cin>>r;
cout<<"Enter Value of Xc & Yc";
cin>>xc>>yc;
x=0;
y=r;
p=(5/4)-r;
while (x <= y)
{
putpixel(xc+x,yc+y,7);
putpixel(xc+y,yc+x,6);
putpixel(xc-x,yc-y,2);
putpixel(xc-y,yc-x,6);
putpixel(xc-x,yc+y,5);
putpixel(xc+y,yc-x,3);
putpixel(xc+x,yc-y,5);
putpixel(xc-y,yc+x,7);
if (p<0)
{
p=p+(2*x)+1;
x=x+1;
}
else
{
p=p+2*(x-y)+1;
x=x+1;
y=y-1;
}
}
getch();
closegraph();
}


#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 	int gd=DETECT, gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 float r,d,x,y,xc,yc;
 
cout<<"Enter radius:";
 cin>>r;
 cout<<"Enter xc,yc: ";
 cin>>xc>>yc;
 x=r;
 	y=0;
 d=3-2*r;
 	while(x>=y)
 {
  putpixel(xc+x,yc+y,1);
  putpixel(xc+y,yc+x,2);
  putpixel(xc-x,yc+y,3);
  putpixel(xc+y,yc-x,4);
  putpixel(xc-x,yc-y,5);
  putpixel(xc-y,yc-x,6);
  putpixel(xc+x,yc-y,7);
 		 putpixel(xc-y,yc+x,8);
  if(d>0)
  {
   d=d-(4*x)+(4*y)+10;
   x=x-1;
 			  y=y+1;
  }
  else
  {
   d=d+(4*y)+6;
   y=y+1;
  }
 }

 getch();
 closegraph();
}


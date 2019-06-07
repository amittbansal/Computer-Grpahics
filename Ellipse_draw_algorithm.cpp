#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT, gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 float a,b;
 float pk1, pk2, x, y, xc, yc;
 
cout<<"Enter major axis:" ;
 cin>>a;
 cout<<"Enter minor axis: ";
 cin>>b;
  cout<<"Enter xc,yc: ";
 cin>>xc>>yc;
  pk1=(b*b)-(b*a*a)+(a*a);
  x=0;
  y=b;
 putpixel(x+xc,y+yc,1);
  putpixel(-x+xc,y+yc,2);
  putpixel(x+xc,-y+yc,3);
  putpixel(-x+xc,-y+yc,4);
  

while((2*x*b*b)<=(2*y*a*a))
 {
     if(pk1<0
     {
         x=x+1;
         y=y;
         pk1=pk1+(2*x*b*b)+(3*b*b);
     }
  else
     {
        x=x+1;
        y=y-1;
        pk1=pk1+(2*x*b*b)+(3*b*b)-(2*y*a*a)+(2*a*a);
  }
      putpixel(x+xc,y+yc,1);
     putpixel(-x+xc,y+yc,2);
     putpixel(x+xc,-y+yc,3);
      putpixel(-x+xc,-y+yc,4);
  }
  pk2=(x*x*b*b)+((y-1)*(y-1)*a*a)-(a*a*b*b);
 putpixel(x+xc,y+yc,1);
 putpixel(-x+xc,y+yc,2);
  putpixel(x+xc,-y+yc,3);
  putpixel(-x+xc,-y+yc,4);
 while(y>0)
 {
  if(pk2>0)
     {
        y=y-1;
         x=x;
         pk2=pk2-(2*y*a*a)+(3*a*a);
     }
     else
     {
        x=x+1;
        y=y-1;
         pk2=pk2-(2*y*a*a)+(3*a*a)+(2*x*b*b)+(2*b*b);
      }
      putpixel(x+xc,y+yc,1);
      putpixel(-x+xc,y+yc,2);
      putpixel(x+xc,-y+yc,3);
      putpixel(-x+xc,-y+yc,4);
 }

 getch();
 closegraph();
}


#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<graphics.h>

void shearing(float [][2], float [][2]);
void draw(float, float, float, float, float, float, float, float);

void main()
{
 int gd=DETECT, gm;
  float sx, sy, x1, x2, x3, x4, y1, y2, y3, y4;
  initgraph(&gd, &gm, "C:\\TC\\BGI");
  
cout<<"\n Enter ist coordinate: ";
  cin>>x1>>y1;
  cout<<"\n Enter 2nd coordinate: ";
  cin>>x2>>y2;
  cout<<"\n Enter 3rd coordinate: ";
  cin>>x3>>y3;
  cout<<"\n Enter 4th coordinate: ";
  cin>>x4>>y4;

 float object[][2]={ {x1,y1}, {x2,y2},{x3,y3},{x4,y4} };
 draw(x1,y1,x2,y2,x3,y3,x4,y4);
  cout<<"\nEnter shearing factor along x-axis: ";
 cin>>sx;
  cout<<"\nEnter sharing factor along y-axis: ";
  cin>>sy;
 float shear[][2]={ {1,sx},{sy,1} };
  shearing(object,shear);

 getch();
 closegraph();
}

void draw(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
 line(x1,y1,x2,y2);
  line(x2,y2,x3,y3);
  line(x3,y3,x4,y4);
 line(x4,y4,x1,y1);
}

void shearing(float object [][2], float shear[][2])
{
 float c[4][2];
 int i,j,k;
 for(i=0; i<=3; i++)
  {
     for(j=0; j<=1; j++)
     {
         c[i][j]=0;
         for(k=0; k<=1; k++)
         {
        c[i][j]=c[i][j]+(object[i][k]*shear[k][j]);
         }
     }
 }
 draw(c[0][0],c[0][1],c[1][0],c[1][1],c[2][0],c[2][1],c[3][0], c[3][1]
}


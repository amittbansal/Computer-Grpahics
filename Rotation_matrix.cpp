#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>

void draw(float,float,float, float, float, float);
void rotation(int[][2], float[][2]);

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\bgi");
int x1=0,y1=0,x2=200,y2=120,x3=100,y3=30;
float angle;
float a1,a2,a3;
int object [][2]={ {x1,y1},{x2,y2},{x3,y3} };

draw(x1,y1,x2,y2,x3,y3);
cout<<"enter rotation angle";
scanf("%f",&angle);
angle=angle*(3.14/180);
a1=cos(angle);
a2=-sin(angle);
a3=sin(angle);
float rotate[][2]={{a1,a3},{a2,a1}};
rotation(object,rotate);

getch();
closegraph();
}

void rotation(int object[][2],float rotate[][2])
{
float c[3][2];
int i,j,k;
for(i=0;i<=2;i++)
{
for(j=0;j<=1;j++)
{
c[i][j]=0;
for(k=0;k<=1;k++)
{
c[i][j]=c[i][j]+object[i][k]*rotate[k][j];
}
}
}
draw(c[0][0],c[0][1],c[1][0],c[1][1],c[2][0],c[2][1]);
}

void draw(float x1,float y1,float x2,float y2,float x3,float y3)
{
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
}



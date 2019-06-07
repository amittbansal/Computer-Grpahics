#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<iostream.h>

void draw(float,float,float, float, float, float);
void reflection(int[][2], float[][2]);

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"k:\\bgi");
int x1,y1,x2,y2,x3,y3;
printf("Enter coordinates of triangle");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
int object [][2]={ {x1,y1},{x2,y2},{x3,y3} };
draw(x1,y1,x2,y2,x3,y3);
float refl[][2]={{0,1},{1,0}};
reflection(object,refl);

getch();
closegraph();
}

void reflection(int object[][2],float refl[][2])
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
c[i][j]=c[i][j]+object[i][k]*refl[k][j];
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


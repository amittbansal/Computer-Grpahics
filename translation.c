#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void draw(int,int,int,int,int,int);
void translation(int[][3],int[][3]);

void main()
{
int x1,y1,x2,y2,x3,y3,tx,ty;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\bgi");

printf("enter cordinates of triangle");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
int object[][3]={{x1,y1,1},
      {x2,y2,1},
      {x3,y3,1} };
draw(x1,y1,x2,y2,x3,y3);
printf("enter translation factor");
scanf("%d%d",&tx,&ty);
int trans[][3]={{1,0,0},
      {0,1,0},
      {tx,ty,1}};
translation (object,trans);

getch();
closegraph();
}
void translation(int object[][3],int trans[][3])
{
int c[3][3];
for(int i=0;i<=2;i++)
{
for(int j=0;j<=2;j++)
{
c[i][j]=0;
for(int k=0;k<=2;k++)
{
c[i][j]+=object[i][k]*trans[k][j];
}
}
}
draw(c[0][0],c[0][1],c[1][0],c[1][1],c[2][0],c[2][1]);
}

void draw(int x1,int y1,int x2,int y2,int x3,int y3)
{
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
}

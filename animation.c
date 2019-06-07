#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
int gd=DETECT,gm;
int size,left=25,top=75,temp1,temp2;
void *P;
initgraph(&gd,&gm,"C:\\tc\\bgi");

circle(50,100,25);
size=imagesize(left,top,left+50,top+50);
P=malloc(size);
while(!kbhit())
{
temp1=random(588);
temp2=random(388);
getimage(left,top,left+50,top+50,P);
putimage(left,top,P,XOR_PUT);
putimage(temp1,temp2,P,XOR_PUT);
delay(100);
left=temp1;
top=temp2;
}

getch();
closegraph();
}


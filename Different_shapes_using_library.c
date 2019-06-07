#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
clrscr();
int gd=DETECT,gm;
initgraph (&gd ,&gm , "k:\\bgi");
outtextxy(10,10,"SHAPES");
line(335,50,266,50);
outtextxy(280,60,"Line");

circle(250,250,60);
outtextxy(230,320,"Circle");

rectangle(100,50,150,290);
outtextxy(90,300,"Rectangle");

pieslice(500,150,0,120,80);
outtextxy(500,160,"Pie");

sector(550,400,0,100,50,60);
outtextxy(550,420,"Sector");

ellipse(350,390,0,360,100,50);
outtextxy(330,450,"Ellipse");

arc(350,190,40.330,100,60);
outtextxy(350,180,"Arc");

bar(50,40,80,100);
outtextxy(55,110,"Bar");

getch();
closegraph();
}


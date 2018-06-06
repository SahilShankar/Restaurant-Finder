#include<dos.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
void main()
 {
 randomize();
 int d=DETECT,m;
 initgraph(&d,&m,"c:\tc\bgi");
 clrscr();
 cleardevice();
 char fact[9][107]={"The oldest evidence of soup is from 6,000 B.C. and calls for     hippopotamus and sparrow meat.","Pringles once had a lawsuit trying to prove that they weren't    really potato chips","Ripe cranberries will bounce like rubber balls.","An average ear of corn has an even number of rows, usually 16.","The most expensive pizza in the world costs $12,000 and takes    72 hours to make.","Chocolate was once used as currency","There is an amusement park in Tokyo that offers Raw Horse Flesh- flavoured ice cream","McDonald's sells 75 hamburgers every second of every day.","The popsicle was invented by an 11-year-old in 1905."};
 float x=1,y=0.00000,j=.5,count=.1;
 float r=15;
 settextstyle(4,0,5);
 outtextxy(200,300,"LOADING...");
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nDID YOU KNOW? : "<<fact[random(10)];
 setcolor(RED);
 line(0,215,650,215);
 sleep(1);
 for(int k=0;k<=7;k++)
 {
  for(float i=90;i<270;i+=10)
  {
   y=cos(((i*22/7)/180))/j;
   if(y>0)
    y=-y;
   x+=5;
   setcolor(14);
   setfillstyle(1,14);
   circle(x,y*100+200,r);
   floodfill(x,y*100+200,14);
   delay(100);
   setcolor(0);
   setfillstyle(1,0);
   circle(x,y*100+200,r);
   floodfill(x,y*100+200,0);
  }
  j+=count;
  count+=.1;
 }
}

#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream.h>
#include<stdlib.h>
void main()
{
 int x,y,i;
 int g=DETECT, d;
 initgraph(&g, &d,"C:\\TC\\BGI");
 cleardevice();
 x=getmaxx()/2;
 y=getmaxy()/2;
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
 setbkcolor(rand());
 setcolor(4);
 int c=150;
for(int e=0;e<15;e++)
 {
  for(int i=50;i<100;i++)
  {
   settextstyle(SMALL_FONT, HORIZ_DIR, 10);
   outtextxy(x,y,"Loading...");
   settextstyle(SMALL_FONT, HORIZ_DIR, 5);
   outtextxy(x+5,y+5,"Redirecting.. ");
   setcolor(3);
   circle(x,y,i);
   circle(x,y,c);
   c--;
   cleardevice();
  }
 }
 setcolor(6);
 getch();
 closegraph();
}


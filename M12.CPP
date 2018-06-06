#include"intro.cpp"
union REGS in, out;
void detectmouse()
{
 in.x.ax=0;
 int86(0X33,&in,&out);
 if(out.x.ax==0)
  printf("\nMouse Fail To Initialize");
 else
  printf("\nMouse Succesfully Initialize");
}
int rect(int color,int x,int y,int x2,int y2)
{
 int i,j;
 for(i=x;i<x2;i++)
 {
  for(j=y;j<y2;j++)
  {
   putpixel(i,j,color);
  }
 }
 return 0;
}
int button(int color,int x,int y,int x2,int y2,char caption[20],int cx,int cy)
{
 setcolor(RED);
 rectangle(x,y-1,x2,y2-1);
 rect(color,x,y,x2,y2);
 setcolor(0);
 outtextxy(x+cx,y+cy,caption);
 in.x.ax=0;
 int86(0x33,&in,&in);
 in.x.ax=1;
 int86(0x33,&in,&in);
 while(!kbhit())
 {
  in.x.ax=3;
  x=in.x.cx;
  y=in.x.dx;
  int86(0x33,&in,&in);
  if(x>199&&x<281&&y>199&&y<223&&in.x.bx==1)
  {
   intro();
  }
 }
 return 0;
}
void showmousetext()
{
 in.x.ax=1;
 int86(0X33,&in,&out);
}
void showmousegraphics()
{
 int g=DETECT,d;
 initgraph(&g,&d,"c:\\tc\\bgi");
 cleardevice();
 setbkcolor(0);
 button(8,200,200,280,222,"LOG IN",17,6);
 setcolor(0);
 in.x.ax=1;
 int86(0X33,&in,&out);
 getch();
 closegraph();
}
#include<iostream.h>
#include<dos.h>
#include<conio.h>
void main()
{
 clrscr();
 cout<<"\naksdhfgka";
 cout<<"\njakshasf";
 cout<<"\nHEY";
 for(int j=0;j<=3;j++)
 {
  for(int i=0;i<=4;i++)
  {
   delay(500);
   cout<<".";
  }
  gotoxy(4,4);
  clreol();
 }
 getch();
}

#include<iostream.h>
#include<conio.h>
void main()
{
 PG1:
 clrscr();
 char p,q;
 cout<<"\na)THIS";
 cout<<"\nb)THAT";
 cout<<"\nPRESS '>' for next page: ";
 p=getch();
 if(p==46)
 {
  clrscr();
  cout<<"\nc)THAN";
  cout<<"\nd)THOSE";
  cout<<"\nPress '<' for previous page: ";
  q=getch();
 }
 if(q==44)
  goto PG1;
}
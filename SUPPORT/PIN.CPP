#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float pin,con;
  PIN:
  cout<<"\nEnter PIN: ";
  cin>>pin;
  if(cin.fail())
  {
   cin.clear();
   cin.ignore();
   clrscr();
   cout<<"\nEnter only digits!";
   goto PIN;
  }
  else if(pin<1000||pin>9999)
  {
   cout<<"\nEnter only 4 DIGITS";
   goto PIN;
  }
  cout<<"\nConfirm PIN: ";
  cin>>con;
  if(cin.fail())
  {
   cin.clear();
   cin.ignore();
   clrscr();
   cout<<"\nEnter only digits!";
   goto PIN;
  }
  else if(con<1000||con>9999)
  {
   cout<<"\nEnter only 4 DIGITS";
   goto PIN;
  }
  if(con==pin)
  {
   cout<<"\nIDIOT!";
  }
  else
   {cout<<"\nIDIOT IDIOT MOST IDIOT!";}
 getch();
}
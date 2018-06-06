#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<stdio.h>
class cust
{
 public:
  char name[30];
  char email[60];
  char pass[10];
  void enter()
  {
   cout<<"\nEnter name: ";
   gets(name);
   cout<<"\nEnter your email ID: ";
   gets(email);
   cout<<"\nEnter password(10 characters): ";
   gets(pass);
  }
  void display()
  {
   cout<<"\nName: "<<name;
   cout<<"\nEmail: "<<email;
  }
};
void main()
{
 clrscr();
 cust s[2];
 char nam[30];
 fstream file;
 file.open("cust.txt",ios::out);
 for(int i=0;i<2;i++)
 {
  s[i].enter();
  file.write((char*)&s[i],sizeof(cust));
 }
 cout<<"\nEnter customer to be searched: ";
 gets(nam);
 for(i=0;i<2;i++)
 {
  while(!file.eof())
  {
   file.read((char*)&s[i],sizeof(cust));
   if(strcmp(nam,s[i].name)==0)
   {
    s[i].display();
    break;
   }
   else
    cout<<"\nCustomer "<<nam<<" "<<"does not exist!";
  }
 }
 getch();
}

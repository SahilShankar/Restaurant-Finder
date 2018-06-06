#include<stdio.h>
#include<iostream.h>
#include<ctype.h>
#include<dos.h>
#include<stdlib.h>
#include<fstream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
class ctmr
{
 public:
  char name[50];
  char email[40];
  char contact[11];
  long pin;
  int s,d;
  float pinc,con;
  void enter();
  void display()
  {
   randomize();
   setcolor((random(14))+1);
   settextstyle(5,0,2);
   rectangle(420,60,120,85);
   outtextxy(122,53,"My name is:");
   gotoxy(33,5);
   puts(name);
   rectangle(500,130,120,100);
   outtextxy(122,100,"My Email is: ");
   gotoxy(33,8);
   puts(email);
   rectangle(370,150,120,180);
   outtextxy(122,147,"My Contact is: ");
   gotoxy(34,11);
   puts(contact);
 }
 char* retname()
 {
  return name;
 }
 float retpin()
 {
  return pinc;
 }
 char* retemail()
 {
  return email;
 }
}uno1;//end class
void ctmr::enter()
{
 NAM:
 randomize();
 clrscr();
 cleardevice();
 do
 {
  setcolor(YELLOW);
  settextstyle(3,0,4);
  outtextxy(100,5,"PALATE-THE OFFLINE SEARCH");
  do
  {
   d=0;
   setcolor(random(14)+1);
   rectangle(420,60,120,85);
   settextstyle(5,0,2);
   outtextxy(122,53,"My Name is: ");
   gotoxy(33,5);
   gets(name);
   for(int i=0;name[i]!='\0';i++)
    if(!isalpha(name[i]))
     d++;
   if(d!=0)
   {
    clrscr();
    cleardevice();
    cout<<"\nPls, Enter only Alphabets (NO SPACES)";
   }
   else if(strlen(name)==0||strlen(name)>30)
   {
    clrscr();
    cleardevice();
    cout<<"\nMaximum 30 Characters!";
   }
   else
   {
    break;
   }
  }
  while(d!=0);
 }
 while(strlen(name)==0||strlen(name)>30);
 int flag=1;
 fstream file;
 file.open("XI.dat",ios::in);
 while(file.read((char*)&uno1,sizeof(ctmr)))
 {
  if(strcmpi(name,uno1.retname())==0)
  {
   settextstyle(1,0,1);
   outtextxy(122,95,"USER ALREADY EXISTS !!!");
   flag=0;
   delay(500);
   goto NAM;
  }
 }
 file.close();
 rectangle(520,130,120,100);
 settextstyle(5,0,2);
 outtextxy(122,100,"My Email is: ");
 gotoxy(33,8);
 gets(email);
 int flow=1;
 for(int i=0;email[i]!='\0';i++)
 {
  if(email[i]=='@')
  {
   flow=0;
   break;
  }
 }
 if(flow==1)
 {
  settextstyle(1,0,1);
  outtextxy(122,140,"INVALID!");
  outtextxy(122,160,"PLS ENTER AGAIN!..");
  delay(500);
  goto NAM;
 }
 file.open("XI.dat",ios::in);
 while(file.read((char*)&uno1,sizeof(ctmr)))
 {
  if(strcmpi(email,uno1.retemail())==0)
  {
   settextstyle(1,0,1);
   outtextxy(122,140,"EMAIL ALREADY IN USE !!!");
   flag=0;
   delay(1000);
   goto NAM;
  }
 }
 file.close();
 do
 {
  do
  {
   s=0;
   rectangle(370,150,120,180);
   settextstyle(5,0,2);
   outtextxy(122,147,"My Contact is: ");
   gotoxy(34,11);
   gets(contact);
   for(int i=0;contact[i]!='\0';i++)
    if(!isdigit(contact[i]))
     s++;
   if(s!=0)
   {
    clrscr();
    cleardevice();
    cout<<"\nPls, Enter numbers only";
   }
   else if(strlen(contact)==0||strlen(contact)!=8&&strlen(contact)!=10)
   {
    clrscr();
    cleardevice();
    cout<<"\t\t\tPls, Enter 8 or 10 digit phone number!";
   }
   else
   {
    break;
   }
  }
  while(s!=0);
 }
 while(strlen(contact)==0||strlen(contact)!=8&&strlen(contact)!=10);
 PIN:
 rectangle(400,200,120,225);
 settextstyle(5,0,2);
 outtextxy(122,195,"My area PIN code: ");
 gotoxy(40,14);
 cin>>pin;
 if(cin.fail())
 {
  cin.clear();
  cin.ignore();
  clrscr();
  cleardevice();
  cout<<"\t\t\tEnter only digits!";
  goto PIN;
 }
 else if(pin<559999||pin>570000)
 {
  cin.clear();
  cin.ignore();
  clrscr();
  cleardevice();
  cout<<"\t\t\tAvailable only in Bangalore\n";
  goto PIN;
 }
 PINC:
 rectangle(450,250,120,275);
 settextstyle(5,0,2);
 outtextxy(122,245,"Desired login PIN (4 digits): ");
 gotoxy(51,17);
 cin>>pinc;
 if(cin.fail())
 {
  cin.clear();
  cin.ignore();
  clrscr();
  cleardevice();
  cout<<"\nEnter only digits!";
  goto PINC;
 }
 else if(pinc<1000||pinc>9999)
 {
  clrscr();
  cleardevice();
  cin.clear();
  cin.ignore();
  cout<<"\t\t\tEnter only 4 DIGITS\n";
  goto PINC;
 }
 rectangle(400,300,120,325);
 settextstyle(5,0,2);
 outtextxy(122,292,"Confirm PIN: ");
 gotoxy(33,20);
 cin>>con;
 if(cin.fail())
 {
  cin.clear();
  cin.ignore();
  clrscr();
  cleardevice();
  cout<<"\nEnter only digits!";
  goto PINC;
 }
 else if(con<1000||con>9999)
 {
  clrscr();
  cleardevice();
  cin.clear();
  cin.ignore();
  cout<<"\t\t\tEnter only 4 DIGITS\n";
  goto PINC;
 }
 if(con==pinc)
 {
  cout<<"\n\t\tPLS WAIT";
 }
 else
 {
  clrscr();
  cleardevice();
  cin.clear();
  cin.ignore();
  cout<<"\n\t\tPINS DONT MATCH";
  delay(300);
  goto PINC;
 }
}

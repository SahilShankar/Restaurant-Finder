#include"class.cpp"
#include<fstream.h>
#include"inc.cpp"
#include"hotel.cpp"
#include<iostream.h>
void write_cust();
void check_cust();
void graph()
{
 int g=DETECT,d;
 initgraph(&g,&d,"c:\\tc\\bgi");
}
void intro()
{
 char a,b;
 load();
 USER:
 clrscr();
 cleardevice();
 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
 setcolor(WHITE);
 rectangle(270,140,120,165);
 setcolor(WHITE);
 rectangle(290,170,120,195);
 setcolor(WHITE);
 rectangle(190,200,120,225);
 setcolor(WHITE);
 rectangle(260,235,120,260);
 outtextxy(250,5,"LOG IN");
 settextstyle(2,0,5);
 outtextxy(125,145,"1)LOGIN AS ADMIN");
 settextstyle(2,0,5);
 outtextxy(125,175,"2)LOGIN AS CUSTOMER");
 settextstyle(2,0,5);
 outtextxy(125,205,"3)EXIT");
 settextstyle(2,0,5);
 outtextxy(125,239,"ENTER CHOICE: ");
 gotoxy(30,16);
 cin>>b;
 if(cin.fail())
 {
  cin.clear();
  cin.ignore();
  goto USER;
 }
 if(b=='1'||b=='2'||b=='3')
 {
  if(b=='3')
   exit(0);
  if(b=='2')
  {
   lalt1();
   CS:
   randomize();
   clrscr();
   cleardevice();
   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
   setcolor(random(14)+1);
   rectangle(400,190,140,240);
   outtextxy(200,5,"LOG IN CUSTOMER");
   settextstyle(3,0,4);
   outtextxy(0,400,"AVAILABLE ON IOS,ANDROID & WINDOWS");
   settextstyle(2,0,7);
   outtextxy(160,202,"NEW USER?(Y/N):");
   gotoxy(44,14);
   cin>>a;
   if(cin.fail())
   {
    cin.clear();
    cin.ignore();
    clrscr();
    cleardevice();
    cout<<"\n\tEnter (y/n) only!";
    delay(2000);
    goto CS;
   }
   if(a=='y'||a=='Y')
    write_cust();
   else if(a=='n'||a=='N')
    check_cust();
   else
    goto CS;
  }//b2.close
  if(b=='1')
  {
   lalt();
   int key;
   char uname[10];
   US:
   clrscr();
   cleardevice();
   settextstyle(3,0,5);
   outtextxy(300,5,"ADMIN");
   cout<<"\n\n\n\n\n\n\n\n\n\t\tNOTE: INCORRECT KEY LEADS TO TERMINATION OF PROGRAM";
   cout<<"\n\n\t\tGateway Username: ";
   gets(uname);
   cout<<"\n\t\tAuthorization KEY(1 attempt): ";
   cin>>key;
   if(strcmpi(uname,"deladmin")==0&&(key==4274))
   {
    load();
    ADMIN:
    char ab;
    clrscr();
    cleardevice();
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
    setcolor(4);
    outtextxy(230,5,"LOG IN ADMIN");
    cout<<"\n\n\n\n\n\n\n\n\n\t\tADMIN";
    cout<<"\n\t\t1)ADD NEW RESTAURANT";
    cout<<"\n\t\t2)DISPLAY RECENTLY ADDEED";
    cout<<"\n\t\t3)SEARCH RESTAURANT VIA SERIAL NO";
    cout<<"\n\t\t4)MODIFY DETAILS OF RESTAURANT";
    cout<<"\n\t\t5)DELETE EXISTING RESATAURANT VIA SERIAL NO";
    cout<<"\n\t\t6)LOG OUT";
    cout<<"\n\t\t7)EXIT";
    cout<<"\n\t\tEnter Choice: ";
    cin>>ab;
    if(cin.fail())
    {
     cin.clear();
     cin.ignore();
     goto ADMIN;
    }
    switch(ab)
    {
     case '1':write_hotel();
	      goto ADMIN;

     case '2':display_all();
	      goto ADMIN;

     case '3':display_sp();
	      goto ADMIN;

     case '4':modify_hotel();
	      goto ADMIN;

     case '5':delete_hotel();
	      goto ADMIN;

     case '6':goto USER;

     case '7':exit(0);

     default: goto ADMIN;
    }//sw
   }//strcmmp
   else
   {
    cout<<"\n\t\tTerminating!";
    delay(500);
    exit(0);
   }//else
  }//b1
 }//b1.b2.close
 else
  goto USER;
}
fstream file;
ctmr uno;
void write_cust()
{
 char con;
 clrscr();
 cleardevice();
 load();
 NEW:
 clrscr();
 cleardevice();
 file.open("XI.dat",ios::out|ios::app);
 uno.enter();
 CON_DISP:
 clrscr();
 cleardevice();
 uno.display();
 cout<<"\n\t\tConfirm(y/n): ";
 con=getch();
 if(con=='y'||con=='Y')
  file.write((char*)&uno,sizeof(ctmr));
 else if(con=='n'||con=='N')
  goto NEW;
 else
  goto CON_DISP;
 file.close();
 cout<<"\n\t\tMaking a new friend";
 for(int j=0;j<=3;j++)
 {
  for(int i=0;i<=4;i++)
  {
   delay(500);
   cout<<".";
  }
  gotoxy(36,14);
  clreol();
 }
 swich();
}
void check_cust()
{
 clrscr();
 cleardevice();
 load();
 CHECK:
 clrscr();
 cleardevice();
 char nam[50];
 float p;
 int flag=0,d;
 do
 {
  settextstyle(3,0,4);
  setcolor(random(14)+1);
  outtextxy(100,5,"PALATE-THE OFFLINE SEARCH");
  do
  {
   d=0;
   setcolor(random(14)+1);
   settextstyle(3,0,1);
   rectangle(325,105,115,130);
   outtextxy(120,103,"Enter Login Credentials");
   rectangle(325,155,115,180);
   settextstyle(3,0,1);
   outtextxy(120,153,"NAME:");
   gotoxy(23,11);
   gets(nam);
   for(int i=0;nam[i]!='\0';i++)
    if(!isalpha(nam[i]))
     d++;
   if(d!=0)
   {
    clrscr();
    cleardevice();
    cout<<"\nPls, Enter only Alphabets (NO SPACES)";
   }
   else if(strlen(nam)==0||strlen(nam)>30)
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
 while(strlen(nam)==0||strlen(nam)>30);
 /*outtextxy(120,153,"NAME:");
 gotoxy(23,11);
 gets(nam);*/
 rectangle(325,205,115,230);
 outtextxy(120,203,"LOGIN PIN:");
 gotoxy(28,14);
 cin>>p;
 if(cin.fail())
 {
  cin.clear();
  cin.ignore();
  cout<<"\n\t\tEnter only digits!";
  delay(1000);
  goto CHECK;
 }
 else if(p<1000||p>9999)
 {
  cin.clear();
  cin.ignore();
  cout<<"\n\t\tEnter only 4 DIGITS\n";
  delay(1000);
  goto CHECK;
 }
 file.open("XI.dat",ios::in);
 while(file.read((char*)&uno,sizeof(ctmr)))
 {
  if((strcmpi(nam,uno.retname())==0)&&(p==uno.retpin()))
  {
   lalt();//xp
   swich();
   flag=1;
  }
 }
 file.close();
 if(flag==0)
 {
  cout<<"\n\t\tName or Email entered is incorrect";
  delay(1000);
  goto CHECK;
 }
}
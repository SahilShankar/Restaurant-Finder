#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include"lod.cpp"
#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include<process.h>
void swich()
{
 int a=DETECT,b;
 initgraph(&a,&b,"c:\\tc\\bgi");
 char c;
 char dine,dine1,del,del1,lux,lux1,des,des1;
 BEG:
 randomize();
 clrscr();
 cleardevice();
 settextstyle(3,0,4);
 setcolor(random(14)+1);
 outtextxy(100,5,"PALATE-THE OFFLINE SEARCH");
 settextstyle(5,1,4);
 outtextxy(500,120,"YUMMY!");
 rectangle(440,95,110,130);
 rectangle(440,135,110,320);
 setcolor(random(14)+1);
 settextstyle(2,0,6);
 outtextxy(115,100,"WHAT WOULD YOU LIKE TO DO TODAY?");
 outtextxy(115,140,"1.GO OUT FOR A MEAL"); //done
 outtextxy(115,170,"2.GET HOME DELIVERY"); //done
 outtextxy(115,200,"3.LUXURY DINING");     //done
 outtextxy(115,230,"4.DESSERTS & BAKES");  //done
 outtextxy(115,260,"5.REVIEW THE APP");    //done
 outtextxy(115,290,"6.EXIT");
 outtextxy(115,420,"ENTER CHOICE(No Need For Enter):");
 c=getch();
 if(cin.fail())
 {
  cin.clear();
  cin.ignore();
  cout<<"\nEnter digits only!";
  goto BEG;
 }
 if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6')
 {
  if(c=='1')
  {
	  lalt();
	  MEA:
	  randomize();
	  clrscr();
	  cleardevice();
	  setcolor(random(14)+1);
	  settextstyle(3,0,5);
	  outtextxy(70,5,"DINE-OUT RESTAURANTS");
	  rectangle(270,100,1,205);
	  rectangle(613,100,305,205);
	  rectangle(270,213,1,315);
	  rectangle(613,213,305,315);
	  settextstyle(3,0,1);
	  setcolor(random(14)+1);
	  outtextxy(10,100,"1.AB's-Absolute Barbecues");    outtextxy(310,100,"2.TIOT");
	  outtextxy(10,119,"90/4, 3rd flour");              outtextxy(310,119,"298,Namma Metro Pillar 62");
	  outtextxy(10,137,"Munnekollaly Village, B'Lore"); outtextxy(310,137,"100 Ft. Road, Indiranagar, B'lore");
	  outtextxy(10,156,"PHONE:+91 8880099992");         outtextxy(310,155,"PHONE:+91 9019713388");
	  outtextxy(10,175,"RATING: 4.4");                  outtextxy(310,175,"RATING: 4.2");

	  outtextxy(10,213,"3.High Ultra Lounge");          outtextxy(310,213,"4.Barbeque Nation");
	  outtextxy(10,231,"26/1, 31st Street");            outtextxy(310,231,"4005,HAL,2nd Stage,100 Ft.Rd.");
	  outtextxy(10,250,"Malleshwaram West,Bangalore");  outtextxy(310,250,"Indiranagar, Bangalore");
	  outtextxy(10,270,"PHONE: 080 45674567");          outtextxy(310,270,"PHONE:080 60600000");
	  outtextxy(10,290,"RATING: 4.2");                  outtextxy(310,290,"RATING: 4.1");
	  outtextxy(10,320,"Press '>' for next page or '<' for previous");
	  outtextxy(270,400,"Page 1");
	  dine=getch();
	  if(dine==44||dine==46||dine=='1'||dine=='2'||dine=='3'||dine=='4')
	  {
	   if(dine==44)
	    goto BEG;
	   if(dine=='1')
	   {
	    clrscr();
	    cleardevice();
	    settextstyle(3,0,5);
	    outtextxy(50,5,"AB's-ABSOLUTE BARBEQUE");
	    cout<<"\n\n\n\n\n\n\nHIGHLIGHTS";
	    cout<<"\n\nNO HOME DELIVERY\t\t\tDine-In Available";
	    cout<<"\nServes Non Veg\t\t\t\tServes Alcohol";
	    cout<<"\nAir Conditioned";
	    cout<<"\n\nCUISINES";
	    cout<<"\nEuropean, Mediterranean, North Indian";
	    cout<<"\n\nCOST";
	    cout<<"\nRs.1300 for two(approx)";
	    cout<<"\n\nOPENING HOURS";
	    cout<<"\n12 Noon to 3 PM, 6:30 PM to 11 PM";
	    cout<<"\n\nPress any key to return to previous screen";
	    getch();
	    goto MEA;
	   }
	   if(dine=='2')
	   {
	    clrscr();
	    cleardevice();
	    outtextxy(275,5,"TOIT");
	    cout<<"\n\n\n\n\nHIGHLIGHTS";
	    cout<<"\n\nNO HOME DELIVERY\t\t\tDine-In Available";
	    cout<<"\nServes Non Veg\t\t\t\tServes Alcohol";
	    cout<<"\nAir Conditioned\t\t\t\tWiFi Available";
	    cout<<"\n\nCUISINES";
	    cout<<"\nItalian, American";
	    cout<<"\n\nCOST";
	    cout<<"\nRs.1800 for two(approx)";
	    cout<<"\n\nOPENING HOURS";
	    cout<<"\n12 Noon to 11:30 PM(MON-THU,SUN),12 Noon to 1 AM(FRI-SAT)";
	    cout<<"\n\nPress any key to return to previous screen";
	    getch();
	    goto MEA;
	   }
	   if(dine=='3')
	   {
	    clrscr();
	    cleardevice();
	    outtextxy(150,5,"HIGH ULTRA LOUNGE");
	    cout<<"\n\n\n\n\nHIGHLIGHTS";
	    cout<<"\n\nNO HOME DELIVERY\t\t\tDine-In Available";
	    cout<<"\nServes Non Veg\t\t\t\tServes Alcohol";
	    cout<<"\nAir Conditioned\t\t\t\tWiFi Available";
	    cout<<"\n\nCUISINES";
	    cout<<"\nJapanese,Thai,Chinese,Korean";
	    cout<<"\n\nCOST";
	    cout<<"\nRs.2600 for two(approx)";
	    cout<<"\n\nOPENING HOURS";
	    cout<<"\n5:30 PM to 11:30 PM (MON-THU,SUN), 5:30 PM to 1 AM (FRI-SAT)";
	    cout<<"\n\nPress any key to return to previous screen";
	    getch();
	    goto MEA;
	   }
	   if(dine=='4')
	   {
	    clrscr();
	    cleardevice();
	    outtextxy(150,5,"BARBEQUE NATION");
	    cout<<"\n\n\n\n\nHIGHLIGHTS";
	    cout<<"\n\nNO HOME DELIVERY\t\t\tDine-In Available";
	    cout<<"\nServes Non Veg\t\t\t\tServes Alcohol";
	    cout<<"\nAir Conditioned";
	    cout<<"\n\nCUISINES";
	    cout<<"\nNorth Indian,European, Mediterranean";
	    cout<<"\n\nCOST";
	    cout<<"\nRs.1800 for two(approx)";
	    cout<<"\n\nOPENING HOURS";
	    cout<<"\n12 Noon to 3 PM, 6:30 PM to 11 PM";
	    cout<<"\n\nPress any key to return to previous screen";
	    getch();
	    goto MEA;
	   }
	   if(dine==13)
	    goto MEA;
	   if(dine==46)
	   {
	    PG2:
	    randomize();
	    clrscr();
	    cleardevice();
	    setcolor(random(14)+1);
	    settextstyle(3,0,5);
	    outtextxy(70,5,"DINE-OUT RESTAURANTS");
	    rectangle(270,100,1,205);
	    rectangle(613,100,305,205);
	    settextstyle(3,0,1);
	    setcolor(random(14)+1);
	    outtextxy(10,100,"5.Church Street Socail");       outtextxy(310,100,"6.Chutney Chang");
	    outtextxy(10,119,"46/1, Cobolt Building");        outtextxy(310,119,"HM Eleganza, 31 Museum Road");
	    outtextxy(10,137,"Church Street, bangalore");     outtextxy(310,137,"Church Street, Bangalore");
	    outtextxy(10,156,"PHONE:080 41713016");           outtextxy(310,155,"PHONE:080 43692934");
	    outtextxy(10,175,"RATING: 3.9");                  outtextxy(310,175,"RATING: 3.8");
	    outtextxy(10,320,"Press '<' for previous page");
	    outtextxy(270,400,"Page 2");
	    dine1=getch();
	    if(dine1==44||dine1==46||dine1=='5'||dine1=='6')
	    {
	    if(dine1==44)
	     goto MEA;
	    if(dine1=='6')
	    {
	     clrscr();
	     cleardevice();
	     outtextxy(150,5,"CHUTNEY CHANG");
	     cout<<"\n\n\n\n\nHIGHLIGHTS";
	     cout<<"\n\nNO HOME DELIVERY\t\t\tDine-In Available";
	     cout<<"\nServes Non Veg\t\t\t\tBar Not Available";
	     cout<<"\nAir Conditioned\t\t\t\tOutdoor Seating";
	     cout<<"\n\nCUISINES";
	     cout<<"\nNorth Indian, Chinese";
	     cout<<"\n\nCOST";
	     cout<<"\nRs.1200 for two(approx)";
	     cout<<"\n\nOPENING HOURS";
	     cout<<"\n12 Noon to 3:30 PM, 7 PM to 11 PM (MON-THU,SUN),12 NOON to 3:30 PM";
	     cout<<"\n7 PM to 1 AM (FRI-SAT)";
	     cout<<"\n\nPress any key to return to previous screen";
	     getch();
	     goto MEA;
	    }
	    if(dine1=='5')
	    {
	     clrscr();
	     cleardevice();
	     outtextxy(90,5,"CHURCH STREET SOCIAL");
	     cout<<"\n\n\n\n\nHIGHLIGHTS";
	     cout<<"\n\nNO HOME DELIVERY\t\t\tDine-In Available";
	     cout<<"\nServes Non Veg\t\t\t\tServes Alcohol";
	     cout<<"\nAir Conditioned\t\t\t\tOutdoor Seating";
	     cout<<"\n\nCUISINES";
	     cout<<"\nContinental, American, Cafe, Desserts, Mediterranean";
	     cout<<"\n\nCOST";
	     cout<<"\nRs.1400 for two(approx)";
	     cout<<"\nRs.100 for a pint of beer(approx)";
	     cout<<"\n\nOPENING HOURS";
	     cout<<"\n9 AM to 11:30 PM (MON-THU,SUN), 9 AM to 1 AM (FRI-SAT)";
	     cout<<"\n\nPress any key to return to previous screen";
	     getch();
	     goto MEA;
	    }
	    if(dine1==46)
	    {
	     outtextxy(270,350,"END OF PAGE!");
	     delay(350);
	     goto PG2;
	    }
	    if(dine1==13)
	     goto PG2;
	   }
	   else
	    goto PG2;
	  }//pg2 *ch=46.
	 }//if typematch
	 else
	  goto MEA;
  }
  if(c=='2')
  {
	  lalt();
	  DEL:
	  randomize();
	  clrscr();
	  cleardevice();
	  setcolor(random(14)+1);
	  settextstyle(3,0,5);
	  outtextxy(70,5,"DELIVERY RESTAURANTS");
	  rectangle(270,100,1,205);
	  rectangle(613,100,305,205);
	  rectangle(270,213,1,315);
	  rectangle(613,213,305,315);
	  settextstyle(3,0,1);
	  setcolor(random(14)+1);
	  outtextxy(10,100,"1.TRUFFLES");                   outtextxy(310,100,"2.MEGHANA FOODS");
	  outtextxy(10,119,"28,4th 'B'Cross,5th Block");    outtextxy(310,119,"24,KHB Colony,5th BLK");
	  outtextxy(10,137,"Kormangala,Bangalore");         outtextxy(310,137,"Kormangala,Bangalore");
	  outtextxy(10,156,"PHONE:080 43692852");           outtextxy(310,155,"PHONE:080 41463738");
	  outtextxy(10,175,"RATING: 4.1");                  outtextxy(310,175,"RATING: 3.8");

	  outtextxy(10,213,"3.The Fisherman's Wharf");      outtextxy(310,213,"4.Punjabi Grill");
	  outtextxy(10,231,"26,Ambalipura Village,haralur");outtextxy(310,231,"SJR Primus,Ground Floor,7th Block");
	  outtextxy(10,250,"Off Sarjapur Road,Bangalore");  outtextxy(310,250,"Kormangala, Bangalore");
	  outtextxy(10,270,"PHONE: 080 4362907");           outtextxy(310,270,"PHONE:080 4369232");
	  outtextxy(10,290,"RATING: 3.7");                  outtextxy(310,290,"RATING: 3.8");
	  outtextxy(10,320,"Press '>' for next page or '<' for previous");
	  outtextxy(270,400,"Page 1");
	  del=getch();
	  if(del=='4'||del=='3'||del=='2'||del=='1'||del==44||del==46)
	  {
	   if(del=='4')
	   {
	   clrscr();
	   cleardevice();
	   outtextxy(200,5,"PUNJABI GRILL");
	   cout<<"\n\n\n\n\nHIGHLIGHTS";
	   cout<<"\n\nHOME DELIVERY\t\t\t\tDine-In Available";
	   cout<<"\nServes Non Veg\t\t\t\tServes Alcohol";
	   cout<<"\nAir Conditioned\t\t\t\tWiFi Available";
	   cout<<"\n\nCUISINES";
	   cout<<"\nNorth Indian";
	   cout<<"\n\nCOST";
	   cout<<"\nRs.1500 for two(approx)";
	   cout<<"\n\nOPENING HOURS";
	   cout<<"\n12 NOON to 11:30 PM (MON-THU,SUN), 12 NOON to 1 AM (FRI-SAT)";
	   cout<<"\n\nPress any key to return to previous screen";
	   getch();
	   goto DEL;
	  }
	  if(del=='3')
	  {
	   clrscr();
	   cleardevice();
	   outtextxy(50,5,"THE FISHERMAN'S WHARF");
	   cout<<"\n\n\n\n\nHIGHLIGHTS";
	   cout<<"\n\nHOME DELIVERY\t\t\t\tDine-In Available";
	   cout<<"\nServes Non Veg\t\t\t\tServes Alcohol";
	   cout<<"\nOutdoor Seating";
	   cout<<"\n\nCUISINES";
	   cout<<"\nNorth Indian,Japanese,Mexican,Goan,Seafood";
	   cout<<"\n\nCOST";
	   cout<<"\nRs.1800 for two(approx)";
	   cout<<"\n\nOPENING HOURS";
	   cout<<"\n12 NOON to 10:30 PM (MON-THU,SUN), 12 NOON to 1 AM (FRI-SAT)";
	   cout<<"\nHappy Hours: 12 PM - 8 PM (MON-SUN)";
	   cout<<"\n\nPress any key to return to previous screen";
	   getch();
	   goto DEL;
	  }
	  if(del=='2')
	  {
	   clrscr();
	   cleardevice();
	   outtextxy(200,5,"MEGHANA FOODS");
	   cout<<"\n\n\n\n\nHIGHLIGHTS";
	   cout<<"\n\nHOME DELIVERY\t\t\t\tDine-In Available";
	   cout<<"\nServes Non Veg\t\t\t\tBar Nor Available";
	   cout<<"\nAir Conditioned";
	   cout<<"\n\nCUISINES";
	   cout<<"\nChinese,Biryani,Andhra,Seafood";
	   cout<<"\n\nCOST";
	   cout<<"\nRs.550 for two(approx)";
	   cout<<"\n\nOPENING HOURS";
	   cout<<"\n12 NOON to 4 PM, 7 PM to 11:15 PM";
	   cout<<"\n\nPress any key to return to previous screen";
	   getch();
	   goto DEL;
	  }
	  if(del=='1')
	  {
	   clrscr();
	   cleardevice();
	   outtextxy(30,5,"TRUFFLES (ICE AND SPICE)");
	   cout<<"\n\n\n\n\nHIGHLIGHTS";
	   cout<<"\n\nHOME DELIVERY\t\t\t\tDine-In Available";
	   cout<<"\nServes Non Veg\t\t\t\tBar Nor Available";
	   cout<<"\nAir Conditioned";
	   cout<<"\n\nCUISINES";
	   cout<<"\nCafe, American, Italian, Desserts, Fast Food";
	   cout<<"\n\nCOST";
	   cout<<"\nRs.650 for two(approx)";
	   cout<<"\n\nOPENING HOURS";
	   cout<<"\n12 NOON to 11 PM";
	   cout<<"\n\nPress any key to return to previous screen";
	   getch();
	   goto DEL;
	  }
	  if(del==44)
	   goto BEG;
	  if(del==13)
	   goto DEL;
	  if(del==46)
	  {
	   DEL2:
	   randomize();
	   clrscr();
	   cleardevice();
	   setcolor(random(14)+1);
	   settextstyle(3,0,5);
	   outtextxy(70,5,"DElIVERY RESTAURANTS");
	   rectangle(270,100,1,205);
	   rectangle(613,100,305,205);
	   settextstyle(3,0,1);
	   setcolor(random(14)+1);
	   outtextxy(10,100,"5.Ji Hazoor");                  outtextxy(310,100,"6.The oriental Kitchen");
	   outtextxy(10,119,"9,4th Floor,EPIP Zone");        outtextxy(310,119,"612/1,Lotus Building,4th Block");
	   outtextxy(10,137,"Whitefield, bangalore");        outtextxy(310,137,"Kormnagala, Bangalore");
	   outtextxy(10,156,"PHONE:+91 9964651107");         outtextxy(310,155,"PHONE:080 43692885");
	   outtextxy(10,175,"RATING: 3.7");                  outtextxy(310,175,"RATING: 4.1");
	   outtextxy(10,320,"Press '<' for previous page");
	   outtextxy(270,400,"Page 2");
	   del1=getch();
	   if(del1==46)
	   {
	    outtextxy(270,350,"END OF PAGE!");
	    delay(350);
	    goto DEL2;
	   }
	   if(del1==44)
	    goto DEL;
	   if(del1=='6')
	   {
	    clrscr();
	    cleardevice();
	    outtextxy(230,5,"JI HAZOOR");
	    cout<<"\n\n\n\n\n\nHIGHLIGHTS";
	    cout<<"\n\nHOME DELIVERY\t\t\t\tDine-In Available";
	    cout<<"\nServes Non Veg\t\t\t\tServes Alcohol";
	    cout<<"\nAir Conditioned\t\t\t\tWiFi Available";
	    cout<<"\n\nCUISINES";
	    cout<<"\nMughlai, North Indian, Afghani";
	    cout<<"\n\nCOST";
	    cout<<"\nRs.1000 for two(approx)";
	    cout<<"\n\nOPENING HOURS";
	    cout<<"\n12 NOON to 3:30 PM, 7 PM to 11 PM";
	    cout<<"\n\nPress any key to return to previous screen";
	    getch();
	    goto DEL2;
	   }
	   if(del1=='5'||del1=='6'||del1==44||del1==46)
	   {
	    if(del1=='5')
	    {
	    clrscr();
	    cleardevice();
	    outtextxy(100,5,"THE ORIENTAL KITCHEN");
	    cout<<"\n\n\n\n\n\nHIGHLIGHTS";
	    cout<<"\n\nHOME DELIVERY\t\t\t\tDine-In Available";
	    cout<<"\nServes Non Veg\t\t\t\tBar Not Available";
	    cout<<"\nAir Conditioned\t\t\t\tWiFi Available";
	    cout<<"\n\nCUISINES";
	    cout<<"\nChinese, Thai";
	    cout<<"\n\nCOST";
	    cout<<"\nRs.950 for two(approx)";
	    cout<<"\n\nOPENING HOURS";
	    cout<<"\n12:30 PM to 3:30 PM, 7:30 PM to 11 PM";
	    cout<<"\n\nPress any key to return to previous screen";
	    getch();
	    goto DEL2;
	   }
	   if(del1==13)
	    goto DEL2;
	  }
	  else
	   goto DEL2;
	  }
	 }
	 else
	  goto DEL;

  }

  if(c=='3')
  {
	  lalt();
	  LUX:
	  randomize();
	  clrscr();
	  cleardevice();
	  setcolor(random(14)+1);
	  settextstyle(3,0,5);
	  outtextxy(70,5,"LUXURY DINING");
	  rectangle(270,100,1,205);
	  rectangle(613,100,305,205);
	  rectangle(270,213,1,315);
	  rectangle(613,213,305,315);
	  settextstyle(3,0,1);
	  setcolor(random(14)+1);
	  outtextxy(10,100,"1.The Glass House");            outtextxy(310,100,"2.Grasshopper");
	  outtextxy(10,119,"25/2,Lavelle Road");            outtextxy(310,119,"145,Kalena Agrahara");
	  outtextxy(10,137,"Bangalore");                    outtextxy(310,137,"Bannerghatta Road,Bangalore");
	  outtextxy(10,156,"PHONE:080 61344868");           outtextxy(310,155,"PHONE:080 61344925");
	  outtextxy(10,175,"RATING: 3.9");                  outtextxy(310,175,"RATING: 4.4");

	  outtextxy(10,213,"3.JW-Marriott");                outtextxy(310,213,"4.Le Jardin-The Oberoi");
	  outtextxy(10,231,"24/1,Vittal Mallya Road");      outtextxy(310,231,"The Oberoi, 37-39");
	  outtextxy(10,250,"Lavelle Road, Bangalore");      outtextxy(310,250,"MG Road, Bangalore");
	  outtextxy(10,270,"PHONE: 080 67188950");          outtextxy(310,270,"PHONE:080 25585858");
	  outtextxy(10,290,"RATING: 3.9");                  outtextxy(310,290,"RATING: 4.5");
	  outtextxy(10,320,"Press '>' for next page or '<' for previous");
	  outtextxy(270,400,"Page 1");
	  lux=getch();
	  if(lux==44||lux==46||lux=='1'||lux=='2'||lux=='3'||lux=='4')
	  {
	  if(lux==44)
	   goto BEG;
	  if(lux=='4')
	  {
	   clrscr();
	   cleardevice();
	   outtextxy(90,5,"LE JARDIN, THE OBEROI");
	   cout<<"\n\n\n\n\nHIGHLIGHTS";
	   cout<<"\n\nNO HOME DELIVERY\t\t\tDine-In Available";
	   cout<<"\nServes Non Veg\t\t\t\tBar Nor Available";
	   cout<<"\nAir Conditioned\t\t\t\tWiFi Available";
	   cout<<"\n\nCUISINES";
	   cout<<"\nEuropean, Mediterranean, North Indian";
	   cout<<"\n\nCOST";
	   cout<<"\nRs.3000 for two(approx)";
	   cout<<"\nRs.275 for a pint of beer(approx)";
	   cout<<"\n\nOPENING HOURS";
	   cout<<"\n7 AM to 12:30 AM";
	   cout<<"\n\nPress any key to return to previous screen";
	   getch();
	   goto LUX;
	  }
	  if(lux=='3')
	  {
	   clrscr();
	   cleardevice();
	   outtextxy(80,5,"JW KITCHEN, JW MARRIOTT");
	   cout<<"\n\n\n\n\nHIGHLIGHTS";
	   cout<<"\n\nNO HOME DELIVERY\t\tDine-In Available";
	   cout<<"\nServes Non Veg\t\t\t\Wine and Beer Only";
	   cout<<"\nAir Conditioned\t\t\tOutdoor Seating";
	   cout<<"\nLive Music";
	   cout<<"\n\nCUISINES";
	   cout<<"\nNorth Indian, Continental, Italian";
	   cout<<"\n\nCOST";
	   cout<<"\nRs.2200 for two(approx)";
	   cout<<"\n\nOPENING HOURS";
	   cout<<"\n24 Hours";
	   cout<<"\n\nPress any key to return to previous screen";
	   getch();
	   goto LUX;
	  }
	  if(lux=='2')
	  {
	   clrscr();
	   cleardevice();
	   outtextxy(200,5,"THE GRASSHIPPER");
	   cout<<"\n\n\n\n\nHIGHLIGHTS";
	   cout<<"\n\nNO HOME DELIVERY\t\tDine-In Available";
	   cout<<"\nServes Non Veg\t\t\t\Bar Not Available";
	   cout<<"\nOutdoor Seating";
	   cout<<"\n\nCUISINES";
	   cout<<"\nEuropean";
	   cout<<"\n\nCOST";
	   cout<<"\nRs.4400 for two(approx)";
	   cout<<"\n\nOPENING HOURS";
	   cout<<"\n7:30 PM to 11:30 PM (TUE-FRI),12:30 PM to 4 PM";
	   cout<<"\n7:30 PM to 11:30 PM (SAT-SUN), Monday Closed";
	   cout<<"\n\nPress any key to return to previous screen";
	   getch();
	   goto LUX;
	  }
	  if(lux=='1')
	  {
	   clrscr();
	   cleardevice();
	   outtextxy(150,5,"THE GLASS HOUSE");
	   cout<<"\n\n\n\n\nHIGHLIGHTS";
	   cout<<"\n\nNO HOME DELIVERY\t\tDine-In Available";
	   cout<<"\nServes Non Veg\t\t\t\Serves Alcohol";
	   cout<<"\nAir Conditioned\t\t\tWiFi Available";
	   cout<<"\nLounge";
	   cout<<"\n\nCUISINES";
	   cout<<"\nContinental";
	   cout<<"\n\nCOST";
	   cout<<"\nRs.2500 for two(approx)";
	   cout<<"\n\nOPENING HOURS";
	   cout<<"\n11 AM to 11 PM (MON-THU,SUN), 11 AM to 1 AM (FRI-SAT)";
	   cout<<"\n\nPress any key to return to previous screen";
	   getch();
	   goto LUX;
	  }
	  if(lux==13)
	   goto LUX;
	  if(lux==46)
	  {
	   LUX1:
	   randomize();
	   clrscr();
	   cleardevice();
	   setcolor(random(14)+1);
	   settextstyle(3,0,5);
	   outtextxy(70,5,"LUXURY DINING");
	   rectangle(270,100,1,205);
	   rectangle(613,100,305,205);
	   settextstyle(3,0,1);
	   setcolor(random(14)+1);
	   outtextxy(10,100,"5.The Tao Terraces");           outtextxy(310,100,"6.Sanctum");
	   outtextxy(10,119,"5thFloor,1 MG Mall");           outtextxy(310,119,"The Chancery Pavillion,Comm Block");
	   outtextxy(10,137,"MG Road, bangalore");           outtextxy(310,137,"Residency Road, Bangalore");
	   outtextxy(10,156,"PHONE:+91 9986911444");         outtextxy(310,155,"PHONE:080 61344864");
	   outtextxy(10,175,"RATING: 3.7");                  outtextxy(310,175,"RATING: 4.0");
	   outtextxy(10,320,"Press '<' for previous page");
	   outtextxy(270,400,"Page 2");
	   lux1=getch();
	   if(lux1==44||lux1==46||lux1=='5'||lux1=='6')
	   {
	   if(lux1==44)
	    goto LUX;
	   if(lux1==46)
	   {
	    outtextxy(270,350,"END OF PAGE!");
	    delay(350);
	    goto LUX1;
	   }
	   if(lux1=='6')
	   {
	    clrscr();
	    cleardevice();
	    outtextxy(250,5,"SANCTUM");
	    cout<<"\n\n\n\n\n\nHIGHLIGHTS";
	    cout<<"\n\nNO HOME DELIVERY\t\t\tDine-In Available";
	    cout<<"\nServes Non Veg\t\t\t\tServes Alcohol";
	    cout<<"\nAir Conditioned\t\t\t\tWiFi Available";
	    cout<<"\n\nCUISINES";
	    cout<<"\nNorth Indian, Mediterranean";
	    cout<<"\n\nCOST";
	    cout<<"\nRs.2500 for two(approx)";
	    cout<<"\n\nOPENING HOURS";
	    cout<<"\n12 NOON to  12 AM";
	    cout<<"\nHAPPY HOURS: 5 PM to 9 PM (TUE-SAT)";
	    cout<<"\n\nPress any key to return to previous screen";
	    getch();
	    goto LUX1;
	   }
	   if(lux1=='5')
	   {
	    clrscr();
	    cleardevice();
	    outtextxy(130,5,"THE TAO TERRACES");
	    cout<<"\n\n\n\n\n\nHIGHLIGHTS";
	    cout<<"\n\nHOME DELIVERY\t\t\t\tDine-In Available";
	    cout<<"\nServes Non Veg\t\t\t\tServes Alcohol";
	    cout<<"\nAir Conditioned\t\t\t\tWiFi Available";
	    cout<<"\n\nCUISINES";
	    cout<<"\nJapanese, Thai, Korean, Burmese, Asian";
	    cout<<"\n\nCOST";
	    cout<<"\nRs.2000 for two(approx)";
	    cout<<"\nRs.170 for a pint of beer(approx)";
	    cout<<"\n\nOPENING HOURS";
	    cout<<"\n12 NOON to 11 PM (MON-THU), 12 NOON to 1 AM (FRI-SUN)";
	    cout<<"\n\nPress any key to return to previous screen";
	    getch();
	    goto LUX1;
	   }
	   if(lux1==13)
	    goto LUX1;
	   }
	   else
	    goto LUX1;
	   }
	  }
	  else
	   goto LUX;

  }

  if(c=='4')
  {
	  lalt();
	  DES:
	  randomize();
	  clrscr();
	  cleardevice();
	  setcolor(random(14)+1);
	  settextstyle(3,0,5);
	  outtextxy(70,5,"DESSERTS AND BAKES");
	  rectangle(270,100,1,205);
	  rectangle(613,100,305,205);
	  rectangle(270,213,1,315);
	  rectangle(613,213,305,315);
	  settextstyle(3,0,1);
	  setcolor(random(14)+1);
	  outtextxy(10,100,"1.Berry'd Alive");              outtextxy(310,100,"2.Bite me Cupcakes");
	  outtextxy(10,119,"1079,12th Main Road");          outtextxy(310,119,"383,HAL 2nd Stage,100 Ft Road");
	  outtextxy(10,137,"Indiranagar,Bangalore");        outtextxy(310,137,"Indiranagar,Bangalore");
	  outtextxy(10,156,"PHONE:+91 9611348003");         outtextxy(310,155,"PHONE:+91 888024863");
	  outtextxy(10,175,"RATING: 4.2");                  outtextxy(310,175,"RATING: 3.9");

	  outtextxy(10,213,"3.Cake Walk");                  outtextxy(310,213,"4.Spoonful of Sugar");
	  outtextxy(10,231,"437,8th Main Road,HAL");        outtextxy(310,231,"421-G,1st Main,3rd Cross");
	  outtextxy(10,250,"2nd stage,indiranagar,B'lore"); outtextxy(310,250,"indiranagar,B'lore");
	  outtextxy(10,270,"PHONE:080 43692775");           outtextxy(310,270,"PHONE:080 25255534");
	  outtextxy(10,290,"RATING: 4.0");                  outtextxy(310,290,"RATING: 3.8");
	  outtextxy(10,320,"Press '>' for next page or '<' for previous");
	  outtextxy(270,400,"Page 1");
	  des=getch();
	  if(des==44||des==46||des=='1'||des=='2'||des=='3'||des=='4')
	  {
	  if(des==44)
	   goto BEG;
	  if(des=='4')
	  {
	   clrscr();
	   cleardevice();
	   outtextxy(130,5,"SPOONFUL OF SUGAR");
	   cout<<"\n\n\n\n\n\nHIGHLIGHTS";
	   cout<<"\n\nHOME DELIVERY\t\t\t\tDine-In Available";
	   cout<<"\nServes Non Veg\t\t\t\tServes Alcohol";
	   cout<<"\nAir Conditioned\t\t\t\tOutdoor Seating";
	   cout<<"\n\nCUISINES";
	   cout<<"\nDesserts, Bakery";
	   cout<<"\n\nCOST";
	   cout<<"\nRs.500 for two(approx)";
	   cout<<"\n\nOPENING HOURS";
	   cout<<"\n9:30 AM to 10:30 PM";
	   cout<<"\n\nPress any key to return to previous screen";
	   getch();
	   goto DES;
	  }
	  if(des=='3')
	  {
	   clrscr();
	   cleardevice();
	   outtextxy(250,5,"CAKE WALK");
	   cout<<"\n\n\n\n\n\nHIGHLIGHTS";
	   cout<<"\n\nNO HOME DELIVERY\t\t\tDine-In Available";
	   cout<<"\nServes Non Veg\t\t\t\tBar Not Available";
	   cout<<"\n\nCUISINES";
	   cout<<"\nDesserts, Bakery";
	   cout<<"\n\nCOST";
	   cout<<"\nRs.200 for two(approx)";
	   cout<<"\n\nOPENING HOURS";
	   cout<<"\n9:30 AM to 9:30 PM";
	   cout<<"\n\nPress any key to return to previous screen";
	   getch();
	   goto DES;
	  }
	  if(des=='2')
	  {
	   clrscr();
	   cleardevice();
	   outtextxy(150,5,"BITE ME CUPCAKES");
	   cout<<"\n\n\n\n\n\nHIGHLIGHTS";
	   cout<<"\n\nHOME DELIVERY\t\t\t\tDine-In NOT Available";
	   cout<<"\nVegetarian Only\t\t\t\tBar Not Available";
	   cout<<"\n\nCUISINES";
	   cout<<"\nDesserts, Bakery";
	   cout<<"\n\nCOST";
	   cout<<"\nRs.150 for two(approx)";
	   cout<<"\n\nOPENING HOURS";
	   cout<<"\n11 AM to 9:30 PM";
	   cout<<"\n\nPress any key to return to previous screen";
	   getch();
	   goto DES;
	  }
	  if(des=='1')
	  {
	   clrscr();
	   cleardevice();
	   outtextxy(200,5,"BERRY'D ALIVE");
	   cout<<"\n\n\n\n\n\nHIGHLIGHTS";
	   cout<<"\n\nHOME DELIVERY\t\t\t\tDine-In Available";
	   cout<<"\nServes Non Veg\t\t\t\tBar Not Available";
	   cout<<"\nAir Conditioned\t\t\t\tWiFi Available";
	   cout<<"\n\nCUISINES";
	   cout<<"\nDesserts, Bakery";
	   cout<<"\n\nCOST";
	   cout<<"\nRs.300 for two(approx)";
	   cout<<"\n\nOPENING HOURS";
	   cout<<"\n11:30 AM to 10:30 PM";
	   cout<<"\n\nPress any key to return to previous screen";
	   getch();
	   goto DES;
	  }
	  if(des==46)
	  {
	   DES1:
	   randomize();
	   clrscr();
	   cleardevice();
	   setcolor(random(14)+1);
	   settextstyle(3,0,5);
	   outtextxy(70,5,"DESSERTS AND BAKES");
	   rectangle(270,100,1,205);
	   rectangle(613,100,305,205);
	   settextstyle(3,0,1);
	   setcolor(random(14)+1);
	   outtextxy(10,100,"5.Glen's Bakehouse");           outtextxy(310,100,"6.Cafe Noir");
	   outtextxy(10,119,"297,100 Ft Road");              outtextxy(310,119,"2nd Floor,UB City");
	   outtextxy(10,137,"Indiranagar, bangalore");       outtextxy(310,137,"Lavelle Road, Bangalore");
	   outtextxy(10,156,"PHONE:080 41228773");           outtextxy(310,155,"PHONE:080 40982050");
	   outtextxy(10,175,"RATING: 4.0");                  outtextxy(310,175,"RATING: 3.9");
	   outtextxy(10,320,"Press '<' for previous page");
	   outtextxy(270,400,"Page 2");
	   des1=getch();
	   if(des1==44||des1==46||des1=='5'||des1=='6')
	   {
	   if(des1==44)
	    goto DES;
	   if(des1==46)
	   {
	    outtextxy(270,350,"END OF PAGE!");
	    delay(350);
	    goto DES1;
	   }
	   if(des1=='5')
	   {
	    clrscr();
	    cleardevice();
	    outtextxy(180,5,"GLEN'S BAKEHOUSE");
	    cout<<"\n\n\n\n\n\nHIGHLIGHTS";
	    cout<<"\n\nNO HOME DELIVERY\t\t\tDine-In Available";
	    cout<<"\nServes Non Veg\t\t\t\tBar Not Available";
	    cout<<"\nAir Conditioned\t\t\t\tOutdoor Seating";
	    cout<<"\n\nCUISINES";
	    cout<<"\nDesserts, Bakery, Cafe, American";
	    cout<<"\n\nCOST";
	    cout<<"\nRs.800 for two(approx)";
	    cout<<"\n\nOPENING HOURS";
	    cout<<"\n10:30 AM to 10:30 PM";
	    cout<<"\n\nPress any key to return to previous screen";
	    getch();
	    goto DES1;
	   }
	   if(des1=='6')
	   {
	    clrscr();
	    cleardevice();
	    outtextxy(250,5,"CAFE NOIR");
	    cout<<"\n\n\n\n\n\nHIGHLIGHTS";
	    cout<<"\n\nNO HOME DELIVERY\t\t\tDine-In Available";
	    cout<<"\nServes Non Veg\t\t\t\tWine Only";
	    cout<<"\nOutdoor Seating";
	    cout<<"\n\nCUISINES";
	    cout<<"\nCafe, French";
	    cout<<"\n\nCOST";
	    cout<<"\nRs.1200 for two(approx)";
	    cout<<"\n\nOPENING HOURS";
	    cout<<"\n10:30 AM to 11 PM";
	    cout<<"\n\nPress any key to return to previous screen";
	    getch();
	    goto DES1;
	   }
	   if(des1==13)
	    goto DES1;
	  }
	  else
	   goto DES1;
	  }
	 }
	 else
	  goto DES;

  }
  if(c=='5')
  {
	  lalt();
	  REV:
	  cleardevice();
	  randomize();
	  setcolor(random(14)+1);
	  settextstyle(3,0,5);
	  outtextxy(250,5,"REVIEWS");
	  rectangle(230,105,120,130);
	  rectangle(230,155,120,180);
	  rectangle(230,205,120,230);
	  rectangle(290,265,120,290);
	  int ch;
	  setcolor(random(14)+1);
	  settextstyle(2,0,6);
	  outtextxy(125,107,"1.WRITE");
	  outtextxy(125,157,"2.VIEW");
	  outtextxy(125,207,"3.RETURN");
	  outtextxy(124,267,"ENTER CHOICE:");
	  gotoxy(33,18);
	  cin>>ch;
	  if(cin.fail())
	  {
	   cin.ignore();
	   cin.clear();
	   goto REV;
	  }
	  if(ch==1||ch==2||ch==3)
	  {
	   switch(ch)
	   {
	    case 1 :write_rev();
		    display_rev();

	    case 2 :display_rev();
		    goto REV;

	    case 3 :goto BEG;
	   }
	  }
	  else
	   goto REV;
  }
  if(c=='6')
   exit(0);
 }
 else
  goto BEG;
}


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("color 20");
    int hour,minute,sec;
    int i,j,k=0;
    int z,l,c;
    int ch,y;
    mainhome:
     printf("\n\t\t\t*****************************************");
     printf("\n\t\t\t<<<<<-- WELCOME  TO  CLOCK  WATCH -->>>>>");
     printf("\n\t\t\t.........................................");
     printf("\n\t\t\t.                                       .");
     printf("\n\t\t\t.    1. D I G I T A L   C L O C K       .");
     printf("\n\t\t\t.                                       .");
     printf("\n\t\t\t.    2. S T O P   W A T C H             .");
     printf("\n\t\t\t.                                       .");
     printf("\n\t\t\t.    3. T I M E R                       .");
     printf("\n\t\t\t.                                       .");
     printf("\n\t\t\t.    4. R E S E T                       .");
     printf("\n\t\t\t.                                       .");
     printf("\n\t\t\t.    5. E N D                           .");
     printf("\n\t\t\t.                                       .");
     printf("\n\t\t\t.........................................");
     sleep(1);
     printf("\n\n\n\n\t\t\t      P L E A S E    W A I T\n \n \t\t\t\tL O A D I N G");
     sleep(1);
     printf(".");
     sleep(1);
     printf(".");
     sleep(1);
     printf(".");

printf("\n\n\t\t\t S U C C E S S F U L L Y      L O A D E D.");

printf("\n\n\t ENTER YOUR CHOICE:");
scanf("%d",&ch);
sleep(1);
 printf("\n\n\t\n     --- o ----------  oo --------- ooo ------- ooooooooo ---------ooo------ oo ------- o ---");
printf("\n\n\t\t  OOO-O-O-O-  PRESS ' ENTER KEY 'TO START STOP WATCH... -O-O-O-OOO");
 printf("\n\t\n     --- o ----------  oo --------- ooo ------- ooooooooo ---------ooo------ oo ------- o ---");
getch();
 system("cls");
     switch(ch)
     {
     case 1:

 break;


 case 2:

 system("color 1F");
    printf("\n\tEnter the Hour :");
    scanf("%d",&hour);

    printf("\n\tEnter the Minute :");
    scanf("%d",&minute);

    printf("\n\tEnter the second :");
    scanf("%d",&sec);
system("cls");
    int h=0,m=0,s=0;

    while(1)
{


  system("color B0");
    printf("  \n\n\t ++++++++++++++++++++++++++++++++++++++++++++++");

printf(" \n\n\n\tHOUR : MINUTE : SECOND:-  %.2d : %.2d : %.2d\n",h,m,s);


    printf("  \n  ++++++++++++++++++++++++++++++++++++++++++++++");

if(h==hour && m==minute && s==sec)
{


    // Sound for rest of the tone

    Beep(523, 500);
    Sleep(5);
    Beep(659, 400);
    Sleep(5);
    Beep(440, 400);
    Sleep(5);
    Beep(494, 400);
     Sleep(5);
    Beep(523, 750);
    Sleep(5);
    Beep(600, 400);
    Sleep(5);
    Beep(600, 350);
break;
}
    s++;
    sleep(1);
    if(s==60)
    {
        m++;
        s=0;
    }
     if(m==60)
    {

        h++;
        m=0;
        s=0;
    }
    if(h==24)
    {

        h=0;
        m=0;
        s=0;
    }

    system("cls");

}

system("cls");
 sleep(1);
 printf("\n DO YOU WANT TO RESET IT AGAIN?");
  printf("\n\n IF YES PRESS 1");
  printf("\n\n\n ENTER YOUR CHOICE:");
  scanf("%d",&y);
  if(y==1)
  {
      goto mainhome;
  }
break;

 case 3:
    printf("\n\tEnter the Hour :");
    scanf("%d",&hour);

    printf("\n\tEnter the Minute :");
    scanf("%d",&minute);

    printf("\n\tEnter the second :");
    scanf("%d",&sec);
system("cls");
    int ho,se,mi;
     ho=hour;
     mi=minute;
     se=sec;


    while(1)
{


  system("color B0");
    printf("  \n\n\t ++++++++++++++++++++++++++++++++++++++++++++++");

printf(" \n\n\n\tHOUR : MINUTE : SECOND:-  %.2d : %.2d : %.2d\n",hour,minute,sec);


    printf("  \n  ++++++++++++++++++++++++++++++++++++++++++++++");

if(sec!=0)
{


    sec--;
}
    sleep(1);
    if(sec==0 && minute!=0)
    {
      sec=59;
        minute--;

    }
     if(sec==0 && minute==0 && hour!=0)
    {

        hour--;
        minute=59;
        sec=59;
    }
    if( sec==0 && minute==0 && hour==0 )
    {



    // Sound for rest of the tone

    Beep(523, 500);
    Sleep(5);
    Beep(659, 400);
    Sleep(5);
    Beep(440, 400);
    Sleep(5);
    Beep(494, 400);
     Sleep(5);
    Beep(523, 750);
    Sleep(5);
    Beep(600, 400);
    Sleep(5);
    Beep(600, 350);


exit(0);
    }
        system("cls");

}



break;
}
return 0;
}

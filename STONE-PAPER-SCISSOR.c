//GAME -- SNAKE ,WATER ,GUN WITH  C PROGRAMMING


#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int you,computer;        //GLOBAL DECLARATION
int count_c=0;
int count_y=0;
int menu();
void computer_choice();
void your_choice();
void score();
int main()

   {
while(1)
       {
system("cls");
computer_choice();
your_choice();

getch();
       }
    return 0;
}
int menu(){
int ch;

system("color B0");
printf("\n\t\t\t\t ________________________________________________________    ");
                  printf("\n\t\t\t\t|                                                       |    ");
                  printf("\n\t\t\t\t|        WELCOME TO STONE,PAPER,SCISSOR GAME            |    ");
                  printf("\n\t\t\t\t|                                                       |    ");
                  printf("\n\t\t\t\t|_______________________________________________________|    ");

                  printf("\n\n\t\t\t\t\t players--1.you and 2.computer\n");
                  printf("\n\t\t\t\t\t\t TOTAL POINTS 10 ");
printf("\n\n\t\t\t\t\t _________ SELECT ONE ________");
printf("\n\n\t\t\t\t\t\t (1)STONE");
printf("\n\n\t\t\t\t\t\t (2)PAPER");
printf("\n\n\t\t\t\t\t\t (3)SCISSOR");
printf("\n\n\t\t\t\t\t\t (4)EXIT");
printf("\n\n\t\t\t\t\t _____________________________");
printf("\n\n\n\t\t\t\t\t Enter your choice:");
scanf("%d",&ch);

return(ch);
}
void computer_choice()
{
    home:
    computer=rand()%4;
    if(computer==0)
        goto home;
        you=menu();

}
void your_choice()
{
switch(you)
{

case 1:printf("\n\t\t\t\t\t  your choice: STONE");
       if(computer==1)
       {
            printf("\n\t\t\t\t\t computer choice: STONE");
       printf("\n\t\t\t\t\t  GAME DRAW");
       printf("\n\t\t\t\t\t computer=%d ,your score=%d",count_c,count_y);
       score();
       }
       else if(computer==2)
       {
           printf("\n\t\t\t\t\t computer choice: PAPER");
       printf("\n\t\t\t\t\t  COMPUTER WIN");
       count_c++;
       printf("\n\t\t\t\t\t computer=%d ,your score=%d",count_c,count_y);
     score();
       }
       else{
         printf("\n\t\t\t\t\t computer choice: SCISSOR");
       printf("\n\t\t\t\t\t  YOU WIN.");
       count_y++;
       printf("\n\t\t\t\t\t computer=%d ,your score=%d",count_c,count_y);
       score();
       }
  break;


case 2: printf("\n\t\t\t\t\t your choice: PAPER");

       if(computer==1)
       {
            printf("\n\t\t\t\t\t computer choice: STONE");
       printf("\n\t\t\t\t\t YOU WIN.");
        count_y++;
       printf("\n\t\t\t\t\t computer=%d ,your score=%d",count_c,count_y);
      score();
       }
       else if(computer==2)
       {
           printf("\n\t\t\t\t\t computer choice: PAPER");
       printf("\n\t\t\t\t\t GAME DRAW");

       printf("\n\t\t\t\t\t computer=%d ,your score=%d",count_c,count_y);
      score();
       }
       else{
         printf("\n\t\t\t\t\t computer choice: SCISSOR");
       printf("\n\t\t\t\t\t COMPUTER WIN.");
        count_c++;
       printf("\n\t\t\t\t\t computer=%d ,your score=%d",count_c,count_y);
       score();
       }

  break;



case 3:printf("\t\t\t\t\t your choice: SCISSOR");
       if(computer==1)
       {
            printf("\n\t\t\t\t\t computer choice: STONE");
       printf("\n\t\t\t\t\t COMPUTER WIN.");
        count_c++;
       printf("\n\t\t\t\t\t computer=%d ,your score=%d",count_c,count_y);
      score();
       }
       else if(computer==2)
       {
           printf("\n\t\t\t\t\t computer choice: PAPER");
       printf("\n\t\t\t\t\t YOU WIN.");
        count_y++;
       printf("\n\t\t\t\t\t computer=%d ,your score=%d",count_c,count_y);
      score();
       }
       else{
         printf("\n\t\t\t\t\t computer choice: SCISSOR");
       printf("\n\t\t\t\t\t GAME DRAW.");

       printf("\n\t\t\t\t\t computer=%d ,your score=%d",count_c,count_y);
        score();
       }
  break;


case 4:printf("\t\t\t\t\t your choice: EXIT");
exit(0);
       break;

default:
    printf("\t\t\t\t\t wrong user input...");

}
}
void score()
{

   if(count_c==10 || count_y==10)
   {
       if(count_c==10)
       {
  printf("\n\n\t\t\t\t\tGAME OVER");
           printf("\n\t\t\t\t\tCOMPUTER WIN THE GAME");
             printf("\n\n\n");
   exit(0);
       }
       else{
             printf("\n\n\t\t\t\t\tGAME OVER");
           printf("\n\t\t\t\t\tCONGRATULATION ! YOU WIN THE GAME");
       printf("\n\n\n");
           exit(0);
       }
   }

}

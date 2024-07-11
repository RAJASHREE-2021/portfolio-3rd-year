#include <conio.h>
#include <stdio.h>
#include <strings.h>
int main()
{
system("cls");
int z,l,c;
printf("\n\n\n\n\t\t\t     P L E A S E    W A I T\n \n \t\t\t\tL O A D I N G");

for( z=0;z<=6;z++)
{

    for(l=0;l<100000000;l++)
        c=l;
    printf(".");
}
printf("\n\n\n\n\t\t\t successfully loaded");
      int i,j,w;
      int sum=0,count=0;
      char in,k,r,q,v,m,n,o;
      int  x, y, space;
      char first_name[20];
      char second_name[20];
      int score;
      mainhome:
      printf("     \n\n\n       ....................welcome to quiz game.....................\n\n\n");
      printf("                      ------Rules of the game-------");
      printf("\n -------------------------------------------------------------------------");
      printf("\n ......................... C program Quiz Game...........");
      printf("\n -->> There are two rounds in the game, BASIC ROUND &  ADVANCE ROUND");
      printf("\n\n -->> In basic round you will be asked a total of 5 questions to test your general");
      printf("\n knowledge. You will be eligible to play the game if you can give atleast 3 ");
      printf("\n right answers otherwise you can't play the Game...........");
      printf("\n\n -->> Your game starts with the ADVANCE ROUND. In this round you will be asked");
      printf("\n total 5 questions each right answer will be awarded 5 POINTS.");
      printf("\n By this way you can win upto 25 POINTS...............");
      printf("\n \n-->> You will be given 4 options and you have to press A, B ,C or D for the");
      printf("\n right option");
      printf("\n \n-->> You will be asked questions continuously if you keep giving the right answers.");
      printf("\n\n -->> No negative marking for wrong answers");
      printf("\n\n\t           *BEST OF LUCK*\n\n\n");
    getch();
      system("cls");
      printf("(i)press 1 for start quiz       (ii)press  2 for reload \n\n(iii)press 3 for help           (iv)press 4 for quit game .\n\n ");


      printf("<<<press 1 or 2 or 3 or 4(any one number)>>>: ");
         scanf("%d",&i);


      switch(i)
      {
          case 1:
              printf("   ....................welcome to quiz game.....................\n");
              printf("                        ---loading---");



              break;
       case 2:printf("reload:");
       printf("\n\n\n\n\t\t\t     P L E A S E    W A I T\n \n \t\t\t\t R E L O A D I N G");

for( z=0;z<=6;z++)
{

    for(l=0;l<100000000;l++)
        c=l;
    printf(".");
}
goto mainhome;
       break;

       case 3:
              printf("\n\n HELP");
printf("\n -------------------------------------------------------------------------");
printf("\n ......................... C program Quiz Game...........");
printf("\n -->> There are two rounds in the game, BASIC ROUND &  ADVANCE ROUND");
printf("\n -->> In basic round you will be asked a total of 5 questions to test your general");
printf("\n knowledge. You will be eligible to play the game if you can give atleast 3 ");
printf("\n right answers otherwise you can't play the Game...........");
printf("\n -->> Your game starts with the ADVANCE ROUND. In this round you will be asked");
printf("\n total 5 questions each right answer will be awarded 5 POINTS.");
printf("\n By this way you can win upto 25 POINTS...............");
printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
printf("\n right option");
printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
printf("\n >> No negative marking for wrong answers");
printf("\n\n\t            *BEST OF LUCK*\n\n");
     goto mainhome;
   break;
           case 4: printf(" \n\n-----    quit game   -----");
           printf(" \n\n-----    EXIT   -----");
                  break;

        default:printf("invalid input");

        goto mainhome;
        break;

      }

      if(i==1)
      {
        printf("\n\n Enter your first name:");
      scanf("%s",&first_name);
      printf("\n Enter your last name:");
      scanf("%s",&second_name);
getch();
  system("cls");
      printf("\n\nwelcome %s %s to play the quiz\n\n",first_name,second_name);

           printf("-----BASIC ROUND-----\n\n");

      {
         for(j=1;j<=5;j++)
          {
          in=j;
      {
 switch(in)
 {

 case 1:printf("1. The World Largest desert is ?\n\n");
           printf("A. Thar\nB.Kalahari\nC.Sahara\nD.Sonoran\n\n");
           printf("Enter your choice:");
           scanf(" %c",&k);
           {

           if(k=='c'||k=='C')
           {

            printf("the answer is corect.\n\n");
            count=count+1;
           }
           else

           printf("the answer is wrong. option c is the corect option.\n\n");
           break;

           }

 case 2:

    printf("2. Country that has the highest in Barley Production ? ?\n\n");
           printf("A. China\nB.Russia\nC. India\nD.France\n\n");
           printf("Enter your choice:\n\n");
           scanf(" %c",&k);
           {

           if(k=='B'||k=='b'){
            printf("the answer is corect.\n\n");
            count=count+1;
           }
           else

           printf("the answer is wrong. option B is the corect option.\n\n");
           break;
           }

 case 3: printf("3. The metal whose salts are sensitive to light is ? ?\n\n");
           printf("A. Zinc\nB.copper\nC. Aluminium\nD.silver\n\n");
           printf("Enter your choice:\n\n");
           scanf(" %c",&k);
           {

           if(k=='D'||k=='d')
           {
    printf("the answer is corect.\n\n");
            count=count+1;
           }
           else

           printf("the answer is wrong. option D is the corect option.\n\n");
           break;
           }

 case 4: printf("4. The Central Rice Research Station is situated in ? ?\n\n");
           printf("A. Chennai\nB. Cuttack\nC. Bangalore\nD. Quilon\n\n");
           printf("Enter your choice:\n\n");
           scanf(" %c",&k);
           {

if(k=='B'||k=='b')
           {
          printf("the answer is corect.\n\n");
            count=count+1;
           }
           else

           printf("the answer is wrong. option B is the corect option.\n\n");
           break;
           }

 case 5:
     printf("5. Which of the following Environmentalists first gave the concept of Biodiversity 'hotspots'? ?\n\n");
           printf("A. Norman Myers\nB. Gaylord Nelson\nC.John Muir \nD.Julia Butterfly\n\n");
           printf("Enter your choice:\n\n");
           scanf(" %c",&k);
           {
         if(k=='A'||k=='a')
           {
       printf("the answer is corect.");
            count=count+1;
           }
           else

           printf("the answer is wrong. option A is the corect option.\n\n");
           break;
           }
 }
}
getch();
  system("cls");
      }
if(count>=3)
           {

               printf("\n\n \n\n\n\n                       CONGRATULATION|you are eligible for ADVANCE ROUND\n \n\n");

   getch();
  system("cls");

{

for(x=9;x>=1;x--){
		    for(y=1;y<=9-x;y++){
                        printf(" ");
		    }
		    for(space=1;space<=2*x-1;space++){
		        printf("*");
		    }
		printf("\n");
	    }


   printf("\n\n \n A D V A N C E    R O U N D\n\n");
for(m=1;m<=9; ++m)
               {
          printf(" ");
                   for(n=1;n<=9-m; ++n)
                    printf(" ");

                     for(o=1;o<= 2 * m- 1; ++o)
                        printf("*");

           printf("\n");
               }
               getch();
  system("cls");
   for(w=1;w<=5;w++)
   {
      r=w;
       {
         switch(r)
           {
               case 1:printf("1. Which country operationalized world’s largest radio telescope?\n\n");
           printf("A. USA\nB.China\nC.Russia\nD.India\n\n");
           printf("Enter your choice:");
           scanf(" %c",&q);
           {
       if(q=='b'||q=='B')
           {
        printf("the answer is corect.\n\n");
            printf("\n\n you have earned 5 points");
            sum=sum+5;
           }
           else

           printf("the answer is wrong. option B is the corect option.\n\n");
           break;

           case 2:printf("2. Which of the following is the capital of Arunachal Pradesh?\n\n");
           printf("A. Itanagar\nB. Dispur\nC.Imphal\nD.Panaji\n\n");
           printf("Enter your choice:");
           scanf(" %c",&q);
           {

           if(q=='a'||q=='A')
           {
           printf("the answer is corect.\n\n");
            printf("\n\n you have earned 5 points");
            sum=sum+5;
           }
           else

           printf("the answer is wrong. option A is the corect option.\n\n");
           break;

           case 3:printf("3. Which one among the following radiations carries maximum energy?\n\n");
           printf("A. Ultraviolet rays\nB. Gamma rays\nC.X- raysl\nD.fra-red rays\n\n");
           printf("Enter your choice:");
           scanf(" %c",&q);
           {
          if(q=='b'||q=='B')
           {
            printf("the answer is corect.\n\n");
            printf("\n\n you have earned 5 points");
            sum=sum+5;
           }
           else

           printf("the answer is wrong. option B is the corect option.\n\n");
           break;

           case 4:printf("4.  The 2014 football world cup is scheduled to be held in \n\n");
           printf("A. China\nB.  Australia\nC.Japan\nD.Brazil\n\n");
           printf("Enter your choice:");
           scanf(" %c",&q);
           {

         if(q=='d'||q=='D')
           {
            printf("the answer is corect.\n\n");
            printf("\n\n you have earned 5 points");
            sum=sum+5;
           }
           else

           printf("the answer is wrong. option D is the corect option.\n\n");
           break;
    case 5:printf("5.  In which field is the B.C. Roy Award given? \n\n");
           printf("A. Environment\nB.  Journalism\nC.Medicine\nD.Music\n\n");
           printf("Enter your choice:");
           scanf(" %c",&q);
           {
           if(q=='c'||q=='C')
           {
            printf("the answer is corect.\n\n");
            printf("\n\n you have earned 5 points");
            sum=sum+5;
           }
           else

           printf("the answer is wrong. option C is the corect option.\n\n");
           break;
}}}}}}}
            getch();
           system("cls");
}
           printf("\n\n  you have earned %d points",sum);
           printf("\n\n\n \n\n\n              T H A N K    Y O U  ");
           }
           if(sum<=10)
            printf("\n\n\nyou play well");
            else if(sum<=20)
                 printf("\n\n\n           GRADE:Excellent");
            else if(sum<=25)
                 printf("\n\n\nOutstanding");

            printf("\n\n\n  if you wants to play game again?\n 1 FOR YES\n 0 FOR No\n\n YOUR ANSWER:");
            scanf(" %s",&v);
            if(v==1)
            {
                getch();
         }goto mainhome;
      }}}
        else
            printf("\n\n\n\n\n\n                sorry you are not eiligible TO CONTINUE THE GAME\n\n\n");

    return 0;
      }

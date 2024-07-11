#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int i=0 ;
int count=0;
int sum=0;
struct login
{
  char fname[30];
  char lname[30];
  char username[30];
  char password[20];
};
                  //some variable declaration
struct student{                 //structure student
	char first_name[30];
	char last_name[30];
	int age;
	char city[80];
	 int mobile;
	 int phone[11];
	char course[5];                 //using typedef
	char depart[10];
	};

void gotoxy(int ,int );
void menu();
void studentinfo();                //function
void studentview();
void total();
void update();
void del();

int main()
                       //main function
{
int choice;

    system("color 0B");



printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t ________________________________________________________    ");
                  printf("\n\t\t\t\t|                                                       |    ");
                  printf("\n\t\t\t\t|        WELCOME TO STUDENT RECORD SYSTEM               |    ");
                  printf("\n\t\t\t\t|                                                       |    ");
                  printf("\n\t\t\t\t|_______________________________________________________|    ");

    printf("\n\n\n\n\t\t\t\t PRESS ENTER TO CONTINUE.....   \n");
    getch();
    system("cls");
 printf("\n\n\t\t\t\t   1.REGISTER TO THE SYSTEM");
 printf("\n\n\t\t\t\t   2.LOGIN TO THE SYSTEM");
 printf("\n\n\n\t\t\t\t   ENTER YOUR CHOICE : ");
scanf("%d",&choice);
    if(choice==1)
    {
        system("cls");
        printf("\n\n\n\n\n\n\t\t\t\t ________________________________________________________     ");
                  printf("\n\t\t\t\t|                                                       |    ");
                  printf("\n\t\t\t\t|               REGISTER TO THE SYSTEM                  |    ");
                  printf("\n\t\t\t\t|                                                       |    ");
                  printf("\n\t\t\t\t|_______________________________________________________|    ");
   regist();

    }
else if(choice==2){
        system("cls");

    printf("\n\n\n\n\n\n\t\t\t\t ________________________________________________________     ");
              printf("\n\t\t\t\t|                                                       |    ");
              printf("\n\t\t\t\t|                  LOGIN TO THE SYSTEM                  |    ");
              printf("\n\t\t\t\t|                                                       |    ");
              printf("\n\t\t\t\t|_______________________________________________________|    ");
   login();



}


    return 0;

}
 regist()
{

    FILE *log;
    log=fopen("login.txt","w");

    struct login l;
    printf("\n\n\t\t\t    ENTER THE FIRST NAME : ");
    scanf("%s",l.fname);
    printf("\n\n\t\t\t    ENTER THE LAST NAME : ");
    scanf("%s",l.lname);
     printf("\n\n\t\t\t    ENTER THE USERNAME : ");
    scanf("%s",l.username);
     printf("\n\n\t\t\t    ENTER THE PASSWORD : ");
    scanf("%s",l.password);
  fwrite(&l,sizeof(l),1,log);
  fclose(log);

  printf("\n\n\t\t\t   THANK YOU FOR LOGIN ... ");
  printf("\n\t\t\t  YOUR USER NAME IS USERID. LOGIN TO YOUR SYSTEM USING USER ID AND PASSWORD");
  printf("\n\n\t\t\t    PRESS ENTER TO CONTINUE TO LOGIN .......");
  getch();
  system("cls");
  login();
}

     login()
{
    int r,s=0;
    char username[30],password[20];
    FILE *log;
    log=fopen("login.txt","r");
    struct login l;

    printf("\n\n\t\t\t\t Please Enter your login credentials below\n\n");
    printf("\n\t\t\t\t\t Username:  ");
    scanf("%s",username);
    printf("\n\t\t\t\t\t Password: ");
    scanf("%s",password);

    while(fread(&l,sizeof(l),1,log))
        {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)

            {
                printf("\n\t\t\t\t\t Successful Login\n");
                menu();
            }
        else
            {
                printf("\n\t\t\t\t\t Incorrect Login Details\n\t\t\t\t\t Please enter the correct credentials\n");
                printf("\n\t\t\t\t\t if you wants to retry press 1 : ");
                scanf("%d",&r);




               if(r==1)
                    {


                    system("cls");
                    printf("\n\n\n\n\n\n\t\t\t\t ________________________________________________________     ");
                              printf("\n\t\t\t\t|                                                       |    ");
                              printf("\n\t\t\t\t|                  LOGIN TO THE SYSTEM                  |    ");
                              printf("\n\t\t\t\t|                                                       |    ");
                              printf("\n\t\t\t\t|_______________________________________________________|    ");

                    login();


                }


}}

fclose(log);

}


void menu()
{
int a,i;
	int ch;
getch();
system("cls");
mainhome:
    printf("\n\n\n\n\n\n\t\t\t\t _______________________________________________     ");
              printf("\n\t\t\t\t|            ...M A I N   M E N U...           |");
              printf("\n\t\t\t\t|______________________________________________|    ");
	printf("\n\t\t\t\t------------------------------------------------\n");
	printf("\t\t\t\t|       WELCOME TO STUDENT RECORD SYSTEM       |\n");
	printf("\t\t\t\t------------------------------------------------\n");
	printf("\t\t\t\t------------------------------------------------\n");
	printf("\t\t\t\t|       [1]  ADD RECORD OF STUDENT             |\n");
	printf("\t\t\t\t|       [2]  VIEW RECORD OF STUDENT            |\n");
	printf("\t\t\t\t|       [3]  SEARCH RECORD OF THE STUDENT      |\n");
	printf("\t\t\t\t|       [4]  MODIFY RECORD OF THE STUDENT      |\n");
	printf("\t\t\t\t|       [5]  DELETE RECORD OF THE STUDENT      |\n");
	printf("\t\t\t\t|       [6]  TOTAL RECORD OF THE STUDENT       |\n");
	printf("\t\t\t\t|       [7]  EXIT                              |\n");
	printf("\t\t\t\t------------------------------------------------\n");

	printf("\n\n\n\t\t\t\t     enter your choice:       ");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
			{
                system("cls");
			      printf(" \n\n\t\t\t\t     Add Record of the student :");

				studentinfo();
      system("cls");


             printf("\n\n Do you wants to go to main menu ? (if yes press 1)):");
				scanf("%d",&ch);

				if(ch==1)
                {
            goto mainhome;
                }

				break;
			}
		case 2:
			{
			    system("cls");
            printf(" \n\n\t\t \t\t View Record of the student :");
            printf("\n\t\t\t------------------------------------------------\n");
             studentview();
             getch();
                system("cls");
             printf("\n\n Do you wants to go to main menu ? (if yes press 1)):");
				scanf("%d",&ch);

				if(ch==1)
                {
            goto mainhome;
                }


             break;
			}
		case 3:
			{
			    system("cls");

			    printf("\n\n\t\t\t\t  SEARCH RECORDS OF THE STUDENTS");
			    printf("\n\t\t\t------------------------------------------------\n");
                 findroll();
                  getch();
                     system("cls");
                 printf("\n\n Do you wants to go to main menu ? (if yes press 1)):");
				scanf("%d",&ch);

				if(ch==1)
                {
            goto mainhome;
                }
                break;
			}
		case 4:
		    {


               system("cls");
                printf("\n\n\t\t\t\t  MODIFY RECORDS OF THE STUDENTS");
                printf("\n\t\t\t------------------------------------------------\n");
               update();
                  getch();
                     system("cls");
                 printf("\n\n Do you wants to go to main menu ? (if yes press 1)):");
				scanf("%d",&ch);

				if(ch==1)
                {
            goto mainhome;
                }
        break;
		    }

		case 5: {
		    system("cls");
		     printf("\n\n\t\t\t\t DELETE RECORDS OF THE STUDENTS");
		     printf("\n\t\t\t------------------------------------------------\n");
		     del();
		      getch();
		         system("cls");
		     printf("\n\n Do you wants to go to main menu ? (if yes press 1)):");
				scanf("%d",&ch);

				if(ch==1)
                {
            goto mainhome;
                }
break;
		}

		case 6:
            {
               system("color 0B");
                system("cls");

               total();
               sleep(1);

               printf("\n\n \t Do you wants to go  to main menu ? (if yes press 1)):");
				scanf("%d",&ch);

				if(ch==1)
                {
            system("cls");
            ;
            goto mainhome;
                }


               break;
            }
		case 7:
			{
                system("color 0B");
            printf("\n\n\t\t\t\t\t\t _____________\n");
				printf("\t\t\t\t\t\t |           |\n");
				printf("\t\t\t\t\t\t |  E X I T  |\n");
				printf("\t\t\t\t\t\t |___________|\n");
				break;
			}


    default:{
        printf("\n \n\n \t\t\t  INVALID INPUT ");
        printf("\n\n\n");
    break;
    }
	}



	}

	void studentinfo()              //add record of student function
	{
 FILE *add;
  struct student s;
 add = fopen("record.txt","ab+");
    if(add == NULL){

        printf("Error opening file");
        exit(1);
    }

char q;
	char city[80];

do
		 {
             printf("\n\n\t\t\t   --------------------------------------------");
		 	printf("\n\n\t\t\t\t    STUDENT INFORMATION :");
            printf("\n\n\t\t\t   ----------------------------------------------");
		 	printf("\n\n\n \t\t\t      FIRST NAME :");
		 	scanf("%s",s.first_name );
			printf("\n \t\t\t      LAST NAME :");
			scanf("%s",s.last_name );
			printf("\n \t\t\t      AGE :");
			scanf("%d", &s.age );
			printf("\n \t\t\t      ADDRESS  :");
			scanf("%s",s.city );
             printf("\n \t\t\t      STUDENT ID.(4 digit) :2022/");
		 	scanf("%d", &s.mobile );
		 	printf("\n  \t\t\t      COURSE NAME  :");
			 scanf("%s",s.course );
		 	printf("\n  \t\t\t      DEPARTMENT NAME :");
		 	scanf("%s",s.depart );

           printf("\n\n \t\t\t    RECORD ADDED SUCESSFULLY");
           fflush(stdin);
count++;
i=i+1;
 fwrite(&s,sizeof(s),1,add);
 printf("\n\n Do you wants to add more record ? (Y/N)):");
				scanf("%c",&q);
				    system("cls");
			    }while(q=='y' || q=='Y');
 fclose(add);

}
void studentview()                  // view all records
{
    FILE *add;
     struct student s;
int j;

    add = fopen("record.txt","rb+");
    if(add == NULL){

        printf("Error opening file.");
        exit(1);
    }

      while(fread(&s,sizeof(s),1,add) == 1){



        printf("\n\n\t\t \t\t     STUDENT INFORMATION :");
            printf("\n\t\t\t\t ----------------------------");
            printf("\n\t\t\t   NAME : %s %s",s.first_name,s.last_name);
            printf("\n\t\t\t   AGE :%d",s.age);
			printf("\n\t\t\t   ENTER THE NAME OF CITY :%s",s.city);
			printf("\n\t\t\t   STUDENT ID : 2022/%d",s.mobile);
		 	printf("\n\t\t\t   COURSE NAME  :%s",s.course);
			printf("\n\t\t\t   DEPARTMENT NAME :%s",s.depart);
           printf("\n\t\t\t   ---------------------------------------");
fflush(stdin);
    }
    printf("\n");
       fclose(add);
}
void total()         //total no of student
{
    FILE *add;
     struct student s;
 add = fopen("record.txt","r");
    if(add == NULL){

        printf("Error opening file");
        exit(1);
    }

fread(&s,sizeof(s),1,add);
{

      printf("\n\t\t\t------------------------------------------------\n");
               printf("\n\t\t\t \t    TOTAL NO OF STUDENT ");
               printf("\n\t\t\t------------------------------------------------\n");
    printf("\n\n\t\t\t  The total number of  Student is %d\n",i);
    printf("\n\n\t\t\t  you can have a max of 50 students\n");

    printf("\n\n\t\t\t  you can add %d more students\n",50 -i);
}
fclose(add);
}
void findroll()      //find student by fname
{
    char r;
    FILE *add;
     struct student s;

    char a[50];
    printf("\n\n\t\t   Enter the First Name of the student:");
    scanf("%s", a);
    int c ;
add = fopen("record.txt","r");
    if(add == NULL){

        printf("Error opening file");
        exit(1);
    }
     while(fread(&s,sizeof(s),1,add ) == 1)
     {

        c=strcmp(s.first_name, a);
        if(c==0){
          printf("\n\n\t\t \t\t\t   STUDENT INFORMATION :");
            printf("\n\n\t\t\t\t\t  --------------------");
            printf("\n\t\t\t    NAME : %s %s",s.first_name,s.last_name);
			printf("\n\t\t\t    ROLL :%d",s.age);
			printf("\n\t\t\t    ENTER THE NAME OF CITY :%s",s.city);
			printf("\n\t\t\t    STUDENT ID : 2022/%d",s.mobile);
		 	printf("\n\t\t\t    COURSE NAME  :%s",s.course);
			printf("\n\t\t\t    DEPARTMENT NAME :%s",s.depart);
}
}
    fclose(add);
   }
void update()           //modify records
{
     FILE *add;
 struct student s;
    char b[50],q;
    int v,p,c;
    printf("\n\n\t\t\t   ENTER THE FIRST NAME OF THE STUDENT :");
      fflush(stdin);
    gets(b);
    add = fopen("record.txt","rb+");
    if(add == NULL){

        printf("Error opening file");
        exit(1);
    }
    rewind(add);
    while(fread(&s,sizeof(s),1,add ) == 1)
     {


      v = strcmp(s.first_name, b);{
            if(v==0){

                printf("\n\t\t\t Enter the new first name : ");
                scanf("%s", s.first_name);

                printf("\n\t\t\t Enter the last name : ");
                scanf("%s", s.last_name);

               printf("\n\t\t\t Enter the new AGE : ");
                scanf("%d", &s.age);

              printf("\n\t\t\t Enter the new ADDRESS  :");
                             scanf("%s",&s.city);

             printf("\n\t\t\t Enter the new STUDENT ID:");
                            scanf("%d",&s.mobile);

             printf("\n\t\t\t enter the new course name :");
                              scanf ("%s",&s.course);

              printf("\n\t\t\t enter the new department:");
                scanf("%s",&s.depart);
       fseek(add ,-sizeof(s),SEEK_CUR);
            fwrite(&s,sizeof(s),1,add);
 break;
    }
}
}
fclose(add);
printf("\n\t\t\tPress any key to continue.");

}
void del()            //delete data
{
     FILE *add,*temp;
      struct student s;
    char b[50];
    int v;
    printf("\n\n\t\t\t   ENTER THE FIRST NAME OF THE STUDENT :");
    scanf("%s",&b);
add = fopen("record.txt","rb+");
    if(add== NULL){

        printf("Error opening file");
        exit(1);
    }
    temp = fopen("temp.txt","wb+");
    if(temp == NULL){

        printf("Error opening file");
        exit(1);
    }
 while(fread(&s,sizeof(s),1,add) == 1){
      v = strcmp(s.first_name, b);
            if(v!=0){
            fwrite(&s,sizeof(s),1,temp);
            }
    }
    fclose(add);
    fclose(temp);
    remove("record.txt");
    rename("temp.txt","record.txt");
    printf("\n\n \t\t\t  The recoeds "
           " is removed Successfully\n");
}

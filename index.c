#include<time.h>
#include<fstream.h>
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
 clrscr();
 FILE *f= NULL;
 time_t t; // Time k liye
 time(&t);
   int c,date,year,adult,child,infant,age;
   char o[100],d[100],month[50],meal[10];
   struct passanger
   {
     char name[50];
     int age;
   };
    gotoxy(37,2);
     printf("Welcome To\n");
    gotoxy(33,4);
     printf("SRM Booking Portal \n");
    printf("--------------------------------------------------------------------------------\n");
     gotoxy(56,7);
     printf("%s\n",ctime(&t));
    printf ("\n ");
     printf("Select Booking Preffrence :-\n\n\n");
     printf("1 - Flight Booking Service\n\n");
     printf("2 - SRM Hotel/Hostel Booking\n\n\n\n");
    gotoxy(27,20);
     printf("Please Enter Your Choice = ");
     scanf("%d",&c);
      if(c==1)
       {
	 clrscr();
	 gotoxy(22,2);
	 printf("SRM Welcomes You to Flight Booking Gateway\n\n");
	 printf("--------------------------------------------------------------------------------\n");
	 f=fopen("flight.txt","a");
	 fprintf(f,"\n");
	 printf("Enter Origin = ");
	 scanf("%s",o);
	 fprintf(f,"%s\t",o);
	 printf("\n\n");
	 gotoxy(46,6);
	 printf("Enter Destination = ");
	 scanf("%s",d);
	 fprintf(f,"%s\t",d);
	 printf("\n\n");
	 printf("Enter Date Of Journey = ");
	 scanf("%d",&date);
	 fprintf(f,"%d",date);
	 printf("Enter Month Of Journey = ");
	 scanf("%s",month);
	 fprintf(f,"%s",month);
	 printf("Enter Year Of Journey = ");
	 scanf("%d",&year);
	 fprintf(f,"%d\t",year);
	 printf("\n");
	 printf("    Number Of Adults = ");
	 scanf("%d",&adult);
	 fprintf(f,"%d\t",adult);
	 printf("\n");
	 printf("    Number Of Childs = ");
	 scanf("%d",&child);
	 fprintf(f,"%d\t",child);
	 printf("\n");
	 printf("    Number Of Infants = ");
	 scanf("%d",&infant);
	 fprintf(f,"%d\t",infant);
	 printf("\n");
	 fclose(f);
	 int total=adult+child+infant;
	 printf("Do u Want Flight Meal for +900 (yes/no)? = ");
	 scanf("%s",meal);
	 clrscr();
	 printf("Passanger Details : - \n");
	 printf("--------------------------------------------------------------------------------\n");
	 printf("Number of Total Traveler = %d\n\n",total);
      /*	 struct passanger q;
	 for(int i=0;i<total;i++)
	 {
	    printf("Enter Name of Traveler = ");
	    scanf("%s",q[i].name);
	    printf("Enter Age = ");
	    scanf("%d",&q[i].age);
	 } */
       }
       if(c==2)
       { clrscr();
	 gotoxy(33,2);                //  hotel booking systel chalu hoga..
	   printf("SRM Booking Portal \n\n");
	 printf("--------------------------------------------------------------------------------\n");
	 gotoxy(56,6);
	  printf("%s\n",ctime(&t));
	 printf("Weclome Back Student\n");
	 printf("Please Login With SRM Student ID\n");
    char username[15];
    char password[12];
    gotoxy(25,12);
    printf("Enter your username: ");
    scanf("%s",&username);
    gotoxy(25,14);
    printf("Enter your password: ");
    scanf("%s",&password);
    if(strcmp(username,"studentofsrm")==0)
	{
	if(strcmp(password,"SRM0203")==0)
	{
	gotoxy(25,20);
	printf("\n\n                           Welcome Login Success!\n");
	printf("                       Press 1 to redirect to Student profile\n");
	int a;
	scanf("%d",a);
	clrscr();
	gotoxy(22,2);
	printf("\nWelcome Back SRM Student \n");
	printf("--------------------------------------------------------------------------------\n");
	gotoxy(56,6);
	printf("%s\n",ctime(&t));
	  printf("Select Hostel/n/n/n");
	  printf("A Hostel 1\nB Hostel 2\nC Hostel 3\nD Hostel 4\n\n");
	  char c;
	  printf("Enter Your Choice = ");
	}
	else
	{
	 printf("\nWrong password");
	}
    }
else
{
    printf("\nUser doesn't exist");
}

       }
   getch();
   return 0;
}

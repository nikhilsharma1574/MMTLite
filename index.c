#include<time.h>
#include<fstream.h>
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void choose()
{
  gotoxy(6,22);
     printf("                      Press 1 to Continue Next Step\n");
  gotoxy(6,23);
     printf("                      Press 0 to Choose Again\n");
}
int main()
{
 clrscr();
 ofstream f;
 time_t t; // Time k liye
 time(&t);
   int c,date,year,adult,child,infant,month;
   char o[100],d[100];
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
     printf("Enter Origin = ");
     scanf("%s",o);
     printf("\n");
     gotoxy(45,6);
     printf("Enter Destination = ");
     scanf("%s",d);
     printf("\n\n");
     printf("Enter Date Of Journey = ");
     scanf("%d",&date);
     printf("Enter Month Of Journey = ");
     scanf("%d",&month);
     printf("Enter Year Of Journey = ");
     scanf("%d",&year);
     printf("\n");
     printf("Number Of Adults = ");
     scanf("%d",&adult);
     printf("\n");
     printf("Number Of Childs = ");
     scanf("%d",&child);
     printf("\n");
     printf("Number Of Infants = ");
     scanf("%d",&infant);
     printf("\n");
     }
   getch();
   return 0;
}

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main()
{  clrscr();
   char c;
   gotoxy(37,2);
   printf("Welcome to \n");
   gotoxy(30,4);
   printf("OYO - Hotel Booking System \n");
   printf("--------------------------------------------------------------------------------\n");
   printf("Choose Hotel Preferencr:-\n\n\n");
   printf("A - Hotel Grand Dhillon (5*****)\n");
   printf("B - Royal Emperior      (3***)\n");
   printf("C - Babylon             (4****)\n");
   printf("D - Indian Coffe House  (2**)\n");
   printf("E - Hyatt Residences    (4****)\n\n\n");
   printf("Choose Your Hotel Preference = ");
   scanf("%c",&c);
   //Yeha se Switch Case Chalu Hoga
   getch();
   return 0;
}
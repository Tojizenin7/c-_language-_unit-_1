#include<stdio.h>
#include<conio.h>
int main()
{
int hours,minutes;
clrscr();
printf("\n Enter time in minutes:");
scanf("%d",&minutes);
  hours=minutes/60;
  printf("\n %d minutes= %d hours",minutes,hours);
  return 0;
}
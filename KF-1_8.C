#include<stdio.h>
#include<conio.h>
int main()
{
float dollar,rupee;
clrscr();
printf("\n Enter amount in dollar:");
scanf("%f",&dollar);
  rupee=dollar*48;
  printf("\n %.2f dollars= %.2f rupees",dollar,rupee);
  return 0;
}
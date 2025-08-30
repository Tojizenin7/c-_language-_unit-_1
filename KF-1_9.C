#include<stdio.h>
#include<conio.h>
int main()
{
float dollar,rupee;
clrscr();
printf("\n Enter amount in rupee:");
scanf("%f",&rupee);
  dollar=rupee/48;
  printf("\n %.2f rupees= %.2f dollars",rupee,dollar);
  return 0;
}
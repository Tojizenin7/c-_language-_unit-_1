#include<stdio.h>
#include<conio.h>
int main()
{
  float C,F;
  clrscr();

  printf("Enter temperature in celcius:");
  scanf("%f",&C);

  F=1.8*C+32;

  printf("The temperature in Fahrenheit = %f F",F);
  getch();
  return 0;
}













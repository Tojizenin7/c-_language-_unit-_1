#include<stdio.h>
#include<conio.h>
int main()
{
  float C,F;
  clrscr();

  printf("Enter temperature in fahrenheit:");
  scanf("%f",&F);

  C=(F-32) * 5/9;

  printf("The temperature in Celcius = %f F",C);
  getch();
  return 0;
}





#include<stdio.h>
#include<conio.h>
int main()
{
float dollar,pound;
const float rs_per_dollar=48.0;
const float rs_per_pound=70.0;
clrscr();
printf("\n Enter amount in dollar:");
scanf("%f",&dollar);
  pound=(dollar*rs_per_dollar)/rs_per_pound;
  printf("\n %.2f dollars= %.2f pounds",dollar,pound);
  return 0;
}
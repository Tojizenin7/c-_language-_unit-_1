#include<stdio.h>
#include<conio.h>
int main()
{
float g,kg;
clrscr();
printf("\n Enter weight in kilograms:");
scanf("%f",&kg);
g=kg*1000;
printf("\n %.2f kilograms=%.2f grams",kg,g);
getch();
return 0;
}

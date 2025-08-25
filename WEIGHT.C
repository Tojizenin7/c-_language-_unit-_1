#include<stdio.h>
#include<conio.h>
int main()
{
float g,kg;
clrscr();
printf("\n Enter weight in grams:");
scanf("%f",&g);
kg=g/1000;
printf("\n %f grams=%f kilograms",g,kg);
getch();
return 0;
}

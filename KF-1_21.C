#include<stdio.h>
#include<conio.h>
int main()
{
  float ns,gs,al,de;
  clrscr();

  printf("\n Enter gross salary :");
  scanf("%f",&gs);

  al=0.1*gs;
  de=0.03*gs;
  ns=gs+al-de;

  printf("\n Gross salary= %.2f",gs);
  printf("\n Allowances (10 percentage)= %f",al);
  printf("\n Deduction (3 percentage)= %f",de);
  printf("\n ---------------------");
  printf("\n Net salary= %.2f",ns);

  getch();
  return 0;
}
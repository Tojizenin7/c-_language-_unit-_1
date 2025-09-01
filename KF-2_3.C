#include<stdio.h>
#include<conio.h>
int main()
{
  float ns,gs,al,de;
  clrscr();
  printf("Enter gross salary :");
  scanf("%f",&gs);

  if (gs>=10000)
  {
  al=0.1*gs;
  de=0.03*gs;
  }
  else if (gs>=5000)
  {
  al=0.07*gs;
  de=0.02*gs;
  }
  else
  {
  al=0;
  de=0;
  }

  ns=gs+al-de;
  printf("\n Gross salary = %.2f",gs);
  printf("\n Allowances = %.2f",al);
  printf("\n Deduction = %.2f",de);
  printf("\n ----------------------");
  printf("\n Net salary = %.2f",ns);

  getch();
  return 0;
}
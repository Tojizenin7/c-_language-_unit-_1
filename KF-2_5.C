#include<stdio.h>
#include<conio.h>
int main()
{
  float ns,gs,dis;
  clrscr();
  printf("Enter gross salary :");
  scanf("%f",&gs);

  if (gs>=20000)
  {
  dis=0.15*gs;
  }
  else if (gs>=5000)
  {
  dis=0.10*gs;
  }
  else
  {
  dis=0.05*gs;
  }

  ns=gs-dis;
  printf("\n Gross sales = %.2f",gs);
  printf("\n Discount = %.2f",dis);
  printf("\n ----------------------");
  printf("\n Net sales = %.2f",ns);

  getch();
  return 0;
}
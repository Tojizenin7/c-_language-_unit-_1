#include<stdio.h>
#include<conio.h>
int main()
{
  float ns,gs,dis;
  clrscr();

  printf("Enter amount of gross sales: ");
  scanf("%f",&gs);

  dis=0.1*gs;
  ns=gs-dis;

  printf("\n Gross sales=%.2f",gs);
  printf("\n Discount (10 percentage)=%.2f",dis);
  printf("\n ------------------------");
  printf("\n Net sales=%.2f",ns);

  getch();
  return 0;
}
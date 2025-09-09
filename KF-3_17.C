#include<stdio.h>
#include<conio.h>
int main()
{
  int num,positive=0,negative=0,zero=0,i;
  clrscr();
  printf("\n Enter 200 numbers:");
  for(i=0;i<200;i++)
  {
  printf("\n Enter number %d:",i+1);
  scanf("%d",&num);
  if(num>0)
  positive++;
  else if(num<0)
  negative++;
  else
  zero++;
  }

  printf("\n Results:");
  printf("\n Positive numbers: %d",positive);
  printf("\n Negative numbers: %d",negative);
  printf("\n Zeroes: %d",zero);
  getch();
  return 0;
}

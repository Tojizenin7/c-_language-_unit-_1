#include<stdio.h>
#include<conio.h>
int main()
{
  int k,m=2;
  clrscr();
  printf("\n First 10 odd numbers are as follows :");
  for(k=1;k<=10;k++)
  {
   printf("\n %d",m);
   m=m+2;
  }
  getch();
  return 0;
}
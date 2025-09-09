#include<stdio.h>
#include<conio.h>
int main()
{
  int k,m;
  clrscr();
  printf("\n How many first odd numbers you want to print  :");
  scanf("%d",&m);
  for(k=1;k<=m;k++)
  {
   printf("\n %d",2*k-1);
  }
  getch();
  return 0;
}
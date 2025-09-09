#include<stdio.h>
#include<conio.h>
int main()
{
  int k,m;
  clrscr();
  printf("How many first even numbers do you want to print :");
  scanf("%d",&m);
  for(k=1;k<=m;k++)
  {
   printf("\n %d",2*k);
  }
  getch();
  return 0;
}
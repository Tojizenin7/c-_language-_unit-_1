#include<stdio.h>
#include<conio.h>
int main()
{
  int k,m;
  clrscr();
  printf("\n Enter your desired number limit :");
  scanf("%d",&m);
  for(k=1;k<=m;k++)
  {
   printf("\n %d",k);
  }
  getch();
  return 0;
}
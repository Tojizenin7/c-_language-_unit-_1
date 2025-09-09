#include<stdio.h>
#include<conio.h>
int main()
{
  int k,n,sum=0;
  clrscr();
  printf("The sum of all integers from 1 to 100 divisible by 3 is ");

  for(k=0;k<=100;k++)
  {
  n=k%3;
   if(n==0)
   {
   sum=sum+k;
   }
  }
  printf("%d",sum);
  getch();
  return 0;
}
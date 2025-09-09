#include<stdio.h>
#include<conio.h>
int main()
{
  int k,n;
  clrscr();
  printf("All the numbers in the range of 1 to 100 divisible by 5 are:");

  for(k=1;k<=100;k++)
  {
  n=k%5;
  if(n==0)
    {
    printf ("\n %d",k);
    }
  }
  getch();
  return 0;
}
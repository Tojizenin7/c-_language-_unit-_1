#include<stdio.h>
#include<conio.h>
int main()
{
  int k,n,sum=0,count=0;
  clrscr();
  printf("Finding the sum of first n odd numbers--");
  printf("\n Enter the value of n:");
  scanf("%d",&n);

  for(k=1;count<n;k++)
  {
  if(k%2!=0)
   {
   sum=sum+k;
   count++;
   }
  }
  printf("The sum of first %d odd number is %d",n,sum);
  getch();
  return 0;
}

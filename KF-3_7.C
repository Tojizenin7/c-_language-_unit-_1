#include<stdio.h>
#include<conio.h>
int main()
{
 int k,n,sum=0;
 clrscr();
 printf("Finding sum of n natural numbers --");
 printf("\n Enter the value of n :");
 scanf("%d",&n);
 for(k=1;k<=n;k++)
 {
  sum=sum+k;
 }
 printf("Sum of first %d numbers = %d",n,sum);
 getch();
 return 0;
}
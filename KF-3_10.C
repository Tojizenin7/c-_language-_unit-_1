#include<stdio.h>
#include<conio.h>
int main()
{
   float ft=1;
   int k,j;
   clrscr();
   printf("Enter a positive integer :");
   scanf("%d",&k);

   if(k<0)
   {
   printf("\n Factorial of negative number is not possible");
   }
   else if(k==0)
   {
   printf("\n 0!=1");
   }
   else
   {
      for(j=1;j<=k;j++)
      {
	ft=ft*j;
      }
      for(j=k;j>=1;j--)
      {
	printf("%d",j);
	if(j>1)
	printf("*");
      }
   printf("=%.2f",ft);
   }
   getch();
   return 0;
}

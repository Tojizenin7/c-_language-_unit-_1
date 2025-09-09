#include<stdio.h>
#include<conio.h>
int main()
{
   int i,n;
   float num,sum=0,mean;
   clrscr();

   printf("How many values do you want to enter:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   printf("\n Enter value %d :",i);
   scanf("%f",&num);
   sum+=num;
   }
   mean=sum/n;
   printf("\n The sum of %d values is %.2f",n,sum);
   printf("\n The mean of %d values is %.2f",n,mean);
   getch();
   return 0;
}
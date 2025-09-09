#include<stdio.h>
#include<conio.h>
int main()
{
   int i;
   float num,sum=0,mean;
   clrscr();

   for(i=1;i<=10;i++)
   {
   printf("Enter value %d:",i);
   scanf("%f",&num);
   sum+=num;
   }

   mean=sum/10;
   printf("\n The sum of 10 values is %.2f",sum);
   printf("\n The mean of 10 values is %.2f",mean);
   getch();
   return 0;
}
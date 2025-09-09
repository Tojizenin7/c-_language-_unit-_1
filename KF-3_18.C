#include<stdio.h>
#include<conio.h>
int main()
{
  int boys=0,girls=0,i;
  char sex;
  clrscr();
  printf("\n Enter sex code for 50 students (m=male,f=female)");

  for(i=1;i<=50;i++)
  {
  printf("\n Student %d:",i);
  sex=getche();
  printf("\n");

   if(sex=='m')
   {
     boys++;
   }
   else if(sex=='f')
   {
     girls++;
   }
   else
   {
     printf("\n Invalid code please enter m or f");
     i--;
   }
  }

  printf("\n Total number of boys = %d",boys);
  printf("\n Total number of girls = %d",girls);
  getch();
  return 0;
}
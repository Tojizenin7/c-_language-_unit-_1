#include<stdio.h>
#include<conio.h>
int main()
{
  float math,phy,chem,total,avg;
  clrscr();
  printf("\n Enter marks scored in maths = ");
  scanf("%f",&math);
  printf("\n Enter marks scored in physics = ");
  scanf("%f",&phy);
  printf("\n Enter marks scored in chemistry = ");
  scanf("%f",&chem);

  total=math+phy+chem;
  avg=total/3.0;
  printf("\n Total marks = %.2f",total);
  printf("\n Average marks = %.2f",avg);

  if(math<35)
  {
  printf("\n Student has failed in maths");
  }
  else if(phy<35)
  {
  printf("\n Student has failed in physics");
  }
  else if(chem<35)
  {
  printf("\n Student has failed in chemistry");
  }
  else
   {
     if(avg>=70)
      {
      printf("\n Result : Distinction");
      }
      else if(avg>=60)
      {
      printf("\n Result : First class");
      }
      else if(avg>=50)
      {
      printf("\n Result : Second class");
      }
      else if(avg>=35)
      {
      printf("\n Result : Third class");
      }
      else
      {
      printf("\n Result : Fail");
      }
   }
  getch();
  return 0;
}
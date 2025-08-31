#include<stdio.h>
#include<conio.h>
int main()
{
  float math,phy,chem,avg,total;
  clrscr();

  printf("Enter marks obtained in maths:");
  scanf("%f",&math);
  printf("Enter marks obtained in physcis:");
  scanf("%f",&phy);
  printf("Enter marks obtained in chemistry:");
  scanf("%f",&chem);

  total=math+phy+chem;
  avg=total/3;

  printf("\n Total marks=%.2f",total);
  printf("\n Average marks=%.2f",avg);

  getch();
  return 0;
}
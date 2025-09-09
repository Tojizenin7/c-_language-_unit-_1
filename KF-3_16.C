#include<stdio.h>
#include<conio.h>
int main()
{
  float num,large,small;
  int i;
  clrscr();

  printf("Enter  value 1 :");
  scanf("%f",&num);
  large=num;
  small=num;
  for(i=2;i<=100;i++)
  {
  printf("Enter value %d :",i);
  scanf("%f",&num);
     if(num>large)
     large=num;
     if(num<small)
     small=num;
  }
  printf("\n Largest value is %.2f",large);
  printf("\n Smallest value is %.2f",small);
  getch();
  return 0;
}
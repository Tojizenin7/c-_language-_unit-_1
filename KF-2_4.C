#include<stdio.h>
#include<conio.h>
int main()
{
  int a;
  printf("Enter any number :");
  scanf("%d",&a);

  if (a % 7 == 0)
  {
  printf("\n %d is divisible by 7",a);
  }
  else
  {
  printf("\n %d is not divisible by 7",a);
  }
  getch();
  return 0;
}
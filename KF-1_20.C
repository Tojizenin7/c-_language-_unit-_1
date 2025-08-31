#include<stdio.h>
#include<conio.h>
int main()
{
  float B,H,A;
  clrscr();
  printf("\n Enter the base length of triangle :");
  scanf("%f",&B);
  printf("\n Enter the height of triangle :");
  scanf("%f",&H);

  A=B*H/2;

  printf("\n The area of triangle is : %.2f unit sq.",A);
  getch();
  return 0;
}
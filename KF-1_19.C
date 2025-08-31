#include<stdio.h>
#include<conio.h>
int main()
{
  float R,A;
  clrscr();
  printf("\n Enter the radius of circle :");
  scanf("%f",&R);

  A=3.14 * R*R;

  printf("\n The area of circle is : %.2f unit sq.",A);
  getch();
  return 0;
}

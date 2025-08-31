#include<stdio.h>
#include<conio.h>
int main()
{
  float L,A,P;
  clrscr();

  printf("\n Enter the side of square :");
  scanf("%f",&L);

  P=4*L;
  A=L*L;

  printf("\n The perimeter of the square = %.2f unit",P);
  printf("\n The area of the square = %.2f unit sq.",A);

  getch();
  return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
  float L,B,A,P;
  clrscr();

  printf("\n Enter the lenght of rectangle :");
  scanf("%f",&L);
  printf("\n Enter the breath of rectangle :");
  scanf("%f",&B);


  P=2*L + 2*B;
  A=L*B;

  printf("\n The perimeter of the rectangle = %.2f unit",P);
  printf("\n The area of the rectangle = %.2f unit sq.",A);

  getch();
  return 0;
}
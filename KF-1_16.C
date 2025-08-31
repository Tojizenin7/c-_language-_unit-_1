#include<stdio.h>
#include<conio.h>
int main()
{
  float I,P,R,N;

  printf("\n Enter principle amount:");
  scanf("%f",&P);
  printf("\n Enter rate of interest:");
  scanf("%f",&R);
  printf("\n Enter time period in years:");
  scanf("%f",&N);

  I=P*R*N/100;

  printf("\n Simple interest = %.2f",I);
  getch();
  return 0;
}
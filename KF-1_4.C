#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
float div;
clrscr();
printf("Enter numerator=");
scanf("%d",&a);
printf("Enter denominator=");
scanf("%d",&b);
 if (b==0)
 {
   printf("\n Error:can not divide by zero.");
 }
 else
  {
  div = (float)a/b;
  printf("\n %d/%d=%.2f",a,b,div);
  }
getch();
return 0;
}
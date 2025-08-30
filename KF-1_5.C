#include<stdio.h>
#include<conio.h>
void main()
{
 float a,b;
 float sum,diff,prod,div;
 clrscr();

 printf("\n Enter first number=");
 scanf("%f",&a);
 printf("\n Enter second number=");
 scanf("%f",&b);

 sum=a+b;
 diff=a-b;
 prod=a*b;

 if (b!=0)
     div=(float)a/b;
 else
     div=0;

 printf("\n Addition: %f+%f=%f",a,b,sum);
 printf("\n Subtraction: %f-%f=%f",a,b,diff);
 printf("\n Product %f*%f=%f",a,b,prod);

    if (b!=0)
    printf("\n Division: %f/%f=%.2f",a,b,div);
    else
    printf("\n Error:can not divide by zero");

 getch();
}

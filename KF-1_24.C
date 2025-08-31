#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c;
  clrscr();

  printf("Enter values of a&b:");
  scanf("%d %d",&a,&b);
  printf("\n Before swapping: a=%d , b=%d",a,b);

  c=a;
  a=b;
  b=c;

  printf("\n After swapping: a=%d , b=%d",a,b);
  getch();
  return 0;
}

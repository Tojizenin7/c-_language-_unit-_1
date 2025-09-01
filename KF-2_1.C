#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b;
  clrscr();

  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);

  if (a>b)
  {
  printf("The greater number is %d",a);
  }
  else if (b>a)
  {
  printf("The greater number is %d",b);
  }
  else
  {
  printf("Both the numbers are equal");
  }
  getch();
  return 0;
}

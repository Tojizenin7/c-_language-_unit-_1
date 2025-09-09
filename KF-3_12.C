#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    char name;
    clrscr();
    printf("Enter your name :");
    scanf("%s",name);
    printf("Enter number of times you want to print your name :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
      printf("%s \n",name);
    }

    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int k,sum=0;
    clrscr();
    for(k=1;k<=100;k++)
    {
    if(k%13==0)
       {
       sum=sum+k;
       }
    }
    printf("\n The sum of numbers divisible by 13 in 1 to 100 is %d",sum);
    getch();
    return 0;
}
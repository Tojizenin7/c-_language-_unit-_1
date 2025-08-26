#include<stdio.h>
#include<conio.h>
int main()
   {
     int a,b,c;
     clrscr();

     printf("Enter three numbers:");
     scanf("%d %d %d",&a,&b,&c);

     //Finding largest

     if(a>=b && a>=c)
     {
       printf("\n Largest number is %d \n",a);
     }
     else if (b>=a && b>=c)
     {
       printf("\n Largest number is %d \n",b);
     }
     else
     {
       printf("\n Largest number is %d \n",c);
     }

     //Finding smallest

     if(a<=b && a<=c)
     {
       printf("\n Smallest number is %d \n",a);
     }
     else if(b<=a && b<=c)
     {
       printf("\n Smallest number is %d \n",b);
     }
     else
     {
       printf("\n Smallest number is %d \n",c);
     }

     getch();
     return 0;
   }



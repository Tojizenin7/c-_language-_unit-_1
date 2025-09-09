#include <stdio.h>
#include <conio.h>

void main()
{
    int num, digit;
    clrscr();
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Separated digits: ");
    

    if (num < 0)
    {
	num = -num;
    }


    if (num == 0)
    {
        printf("0");
    }
    

    while (num > 0)
    {
	digit = num % 10;
        printf("%d", digit);
	num = num / 10;
        

	if (num > 0)
	{
            printf(",");
        }
    }
    
    getch();
    return 0;
}
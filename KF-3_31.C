#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, isPrime, sum = 0;
    clrscr();
    
    printf("Prime numbers between 1 and 500 are:\n");
    
    for(i = 2; i <= 500; i++)
    {
        isPrime = 1; // Assume i is prime
        
        // Check if i is prime
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0; // i is not prime
                break;
            }
        }
        
        // If i is prime, add to sum and print
        if(isPrime == 1)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    
    printf("\n\nSum of prime numbers between 1 and 500 is: %d", sum);
    
    getch();
}
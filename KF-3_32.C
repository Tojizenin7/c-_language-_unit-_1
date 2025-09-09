#include <stdio.h>
#include <conio.h>

void main() {
    int i, j, count = 0, isPrime;
    clrscr();
    
    printf("Prime numbers between 1 and 500 are:\n");
    
    for (i = 2; i <= 500; i++) {
        isPrime = 1; // Assume i is prime
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
            count++;
        }
    }
    
    printf("\n\nTotal number of prime numbers: %d", count);
    getch();
}
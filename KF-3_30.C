#include <stdio.h>
#include <conio.h>

void main() {
    int i, j, isPrime;
    clrscr(); // Clear the screen
    
    printf("Prime numbers between 1 and 500 are:\n");
    
    for(i = 2; i <= 500; i++) {
        isPrime = 1; // Assume number is prime
        
        // Check if i is prime
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0; // Not prime if divisible
                break;
            }
        }
        
        // If number is prime, print it
        if(isPrime == 1) {
            printf("%d ", i);
        }
    }
    
    getch(); // Wait for key press before closing
}
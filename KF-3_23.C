#include <stdio.h>
#include <conio.h>

void main() {
    int num, sum = 0, digit;
    clrscr();
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }
    
    // Calculate sum of digits
    while (num > 0) {
        digit = num % 10;    // Extract last digit
        sum += digit;        // Add digit to sum
        num /= 10;           // Remove last digit
    }
    
    printf("Sum of digits = %d", sum);
    
    getch();
}
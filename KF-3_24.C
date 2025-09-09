#include <stdio.h>
#include <conio.h>

void main() {
    int num, reversed = 0, digit;
    clrscr(); // Clear the screen in Turbo C

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;          // Extract the last digit
        reversed = reversed * 10 + digit; // Build the reversed number
        num = num / 10;            // Remove the last digit
    }

    printf("Reversed number is: %d", reversed);
    
    getch(); // Wait for a key press in Turbo C
}
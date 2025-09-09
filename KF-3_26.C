#include <stdio.h>
#include <conio.h>

void main() {
    int num, originalNum, remainder, sum = 0;
    clrscr(); // Clear screen in Turbo C

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Calculate sum of cubes of digits
    while (num > 0) {
        remainder = num % 10; // Extract the last digit
        sum += remainder * remainder * remainder; // Add cube of digit
        num /= 10; // Remove the last digit
    }

    // Check if the number is Armstrong
    if (sum == originalNum)
        printf("%d is an Armstrong number.", originalNum);
    else
        printf("%d is not an Armstrong number.", originalNum);

    getch(); // Wait for key press in Turbo C
}
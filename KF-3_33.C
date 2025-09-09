#include <stdio.h>
#include <conio.h>

void main() {
    int n, sq, pow10 = 1, d = 0, temp;
    clrscr(); // Clear screen for Turbo C++

    printf("Enter the number: ");
    scanf("%d", &n);

    // Handle negative numbers
    if (n < 0) {
        printf("The number is not automorphic.\n");
        getch(); // Wait for key press
        return;
    }

    // Count digits in n
    temp = n;
    if (temp == 0) {
        d = 1; // Special case for 0
    } else {
        while (temp > 0) {
            d++;
            temp /= 10;
        }
    }

    // Calculate 10^d
    for (int i = 0; i < d; i++) {
        pow10 *= 10;
    }

    // Calculate square (use long to avoid overflow in 16-bit)
    sq = (long) n * n;

    // Check if last d digits of square match n
    if (sq % pow10 == n) {
        printf("%d is automorphic.\n", n);
    } else {
        printf("%d is not automorphic.\n", n);
    }

    getch(); // Wait for key press before closing
}
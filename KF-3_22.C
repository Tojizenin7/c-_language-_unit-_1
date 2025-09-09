#include <stdio.h>
#include <conio.h>

void main() {
    long num;
    int count = 0;
    clrscr();
    
    printf("Enter a number: ");
    scanf("%ld", &num);
    
    // Handle case for 0
    if (num == 0) {
        count = 1;
    } else {
        // Convert negative number to positive
        if (num < 0) {
            num = -num;
        }
        
        // Count digits
        while (num > 0) {
            num = num / 10;
            count++;
        }
    }
    
    printf("Number of digits: %d", count);
    getch();
}
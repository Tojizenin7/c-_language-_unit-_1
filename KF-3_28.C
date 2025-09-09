#include <stdio.h>
#include <conio.h>

void main() {
    int num, sum = 0, i;
    clrscr();
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Find all proper divisors and sum them
    for(i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    
    // Check if sum of proper divisors equals the number
    if(sum == num) {
        printf("%d is a perfect number.", num);
    } else {
        printf("%d is not a perfect number.", num);
    }
    
    getch();
}
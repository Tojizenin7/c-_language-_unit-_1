#include<stdio.h>
#include<conio.h>

void main() {
    int num, i, flag = 0;
    clrscr();
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Handle cases for numbers less than 2
    if (num < 2) {
        printf("%d is not a prime number\n", num);
        getch();
        return;
    }
    
    // Check for divisibility from 2 to num/2
    for(i = 2; i <= num/2; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }
    
    // Display result
    if(flag == 0)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    
    getch();
}
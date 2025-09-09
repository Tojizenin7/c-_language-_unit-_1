#include <stdio.h>
#include <conio.h>

void main() {
    int n, first = 1, second = 1, next, i;
    clrscr();
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    
    if(n >= 1)
        printf("%d ", first);
    if(n >= 2)
        printf("%d ", second);
        
    for(i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    
    getch();
}
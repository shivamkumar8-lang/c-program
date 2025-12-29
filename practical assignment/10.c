// C program to find the maximum of two numbers using pointers

#include <stdio.h>

void findMax(int *num1, int *num2, int *max) {
    if (*num1 > *num2) {
        *max = *num1;
    } else {
        *max = *num2;
    }
}

int main() {
    int a, b, maximum;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    // Call findMax function by passing addresses of a, b, and maximum
    findMax(&a, &b, &maximum);
    
    // Display the maximum
    printf("\nMaximum of %d and %d is: %d\n", a, b, maximum);
    
    return 0;
}
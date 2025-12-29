// C program to swap two numbers using call by reference

#include <stdio.h>

void swap(int *num1, int *num2) {
    int temp;
    
    // Store the value at num1 in temp
    temp = *num1;
    
    // Assign the value at num2 to num1
    *num1 = *num2;
    
    // Assign the temp (original num1) to num2
    *num2 = temp;
}

int main() {
    int a, b;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    // Display values before swap
    printf("\nBefore swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);
    
    // Call swap function by passing addresses of a and b
    swap(&a, &b);
    
    // Display values after swap
    printf("\nAfter swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);
    
    return 0;
}
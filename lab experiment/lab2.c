//Write a C program to Swap two numbers.
#include <stdio.h>
int main() {
    int a, b, temp;
    // Input two numbers
    printf("Enter the first number(A): ");
    scanf("%d", &a);
    printf("Enter the second number(B): ");
    scanf("%d", &b);
    // Swap the numbers
    temp = a;
    a = b;
    b = temp;
    // Output the swapped numbers
    printf("After swapping: A = %d, B = %d\n", a, b);
    return 0;
}
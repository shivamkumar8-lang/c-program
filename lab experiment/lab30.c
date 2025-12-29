// C program to find the maximum of two numbers using a function that accepts pointer arguments.
#include <stdio.h>
void max_number(int *a, int *b, int *max){
    if(*a > *b){
        *max = *a;
    } else {
        *max = *b;
    }
}

int main(){
    int num1, num2, maximum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max_number(&num1, &num2, &maximum);

    printf("Maximum of %d and %d is: %d\n", num1, num2, maximum);
    
    return 0;
}
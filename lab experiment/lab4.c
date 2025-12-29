#include <stdio.h>
int main() {
    int num1,num2,result;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    result = num1 + num2;
    printf("The sum of %d and %d is %d\n",num1,num2,result);
    result = num1 - num2;
    printf("The difference when %d is subtracted from %d is %d\n",  num2,num1,result);
    result = num1 * num2;
    printf("The product of %d and %d is %d\n",num1,num2,result);
    if(num2 != 0) {
        result = num1 / num2;
        printf("The quotient when %d is divided by %d is %d\n",num1,num2,result);
        result = num1 % num2;
        printf("The remainder when %d is divided by %d is %d\n",num1,num2,result);
    } else {
        printf("Division and modulus by zero is not allowed.\n");
    }
}
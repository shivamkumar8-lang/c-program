// Program to calculate factorial of a number
#include <stdio.h>

int factorial(){
    long long int num, fact = 1, orignal;
    scanf("%lld", &num);
    orignal = num;
    while (num > 0){
        fact *= num;  
        num = num - 1;  
    }
    printf("factorial of %lld = %lld\n", orignal, fact);
    return fact;
}
int main() {
    factorial();  // Call factorial function
    return 0;
}
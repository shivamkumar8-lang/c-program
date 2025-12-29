// C program to find largest number among three number using function.
#include <stdio.h>
int largest_number(num1,num2,num3){
    if (num1 >= num2 && num1 > num3 ){
        printf("The largest number is %d\n", num1);
    }else if (num2 >= num3 && num2 > num1 ){
        printf("The largest number is %d\n", num2);
    }else if (num3 >= num1 && num3 > num2){
        printf("The largest number is %d\n", num3);
    }else{
        printf("All numbers equall\n");
    }
    
    return 0;
    
}

int main() {
    int num1, num2, num3 ;
    printf ("Enter your 1st number: ");
    scanf("%d", &num1);
    printf ("Enter your 2nd number: ");
    scanf("%d", &num2);
    printf ("Enter your 3rd number: ");
    scanf("%d", &num3);
    largest_number(num1,num2,num3);
}
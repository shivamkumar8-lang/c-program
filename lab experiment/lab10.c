//Chaking a number is even or odd
#include   <stdio.h>
int main(){
    int num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d",&num);

    //Checking, number is even or oddd using conditional statement
    if (num % 2 == 0){
        printf("%d is an even number.\n", num); 
    }
    else{
        printf("%d is an odd number.\n", num);
    }
    return 0;
}
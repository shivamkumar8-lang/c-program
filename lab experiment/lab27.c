// Square of a number using function
#include <stdio.h>
int square(num){
    int sq = num*num;
    printf("Squre of %d = %d\n", num, sq);
    return sq;
    
}

int main() {
    int num ;
    printf ("Enter your number: ");
    scanf("%d", &num);
    square(num);
}
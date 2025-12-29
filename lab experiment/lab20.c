#include <stdio.h>

int main() {
    int total = 0, age, i;
    for(i = 1; i<=10; i++) {
        printf("Enter age of employee %d: ", i);
        scanf("%d", &age);
        if (age>= 30){
            total+=1;
        }
    }
    printf("Employee aged 30 or above = %d\n", total);
    return 0;
}
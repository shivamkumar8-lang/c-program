// C program that displays a menu asking the user to print a multiplication table or exit. Using While
#include <stdio.h>

int main(void){
    int n;

    while (1) {
        printf("Press 1: To print a Table\nPress 0: To exit\n");
        scanf("%d", &n);
        if (n != 1) {
            printf("Exiting\n");
            return 1;
        }

        if (n == 1) {
            int num;
            printf("Enter your Number: ");
            scanf("%d", &num);
            int i = 1;
            while (i <= 10) {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            }
        }else if (n == 0) {
            printf("Exit\n");
            break;
        
        }else {
            printf("Invalid Input\n");
        }
    }

    return 0;
}
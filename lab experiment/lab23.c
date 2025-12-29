// Program to print a rectangle with 7 columns and 4 rows using asterisks (*)
#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 7; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
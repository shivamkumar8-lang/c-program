#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {

        // S
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 3 || i == 5)
                printf("*");
            else if(i == 2 && j == 1)
                printf("*");
            else if(i == 4 && j == 5)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // H
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || i == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // I
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || j == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // V (same correct V as fixed)
        for(j = 1; j <= 5; j++) {
            if(i == 1 && (j == 1 || j == 5))
                printf("*");
            else if(i == 2 && (j == 2 || j == 4))
                printf("*");
            else if(i == 3 && (j == 2 || j == 4))
                printf("*");
            else if(i == 4 && j == 3)
                printf("*");
            else if(i == 5 && j == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // A
        for(j = 1; j <= 5; j++) {
            if(i == 1 && (j == 2 || j == 3 || j == 4))
                printf("*");
            else if((j == 1 || j == 5) && i > 1)
                printf("*");
            else if(i == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("   ");

        // M
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5)                     // sides
                printf("*");
            else if((i == 2 && (j == 2 || j == 4)))  // slants
                printf("*");
            else if(i == 3 && j == 3)                // center peak
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
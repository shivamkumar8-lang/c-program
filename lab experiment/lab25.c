#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 6; i++) {
        switch(i) {
            case 0:
                printf("Monday:\n");
                break;
            case 1:
                printf("Tuesday:\n");
                break;
            case 2:
                printf("Wednesday:\n");
                break;
            case 3:
                printf("Thursday:\n");
                break;
            case 4:
                printf("Friday:\n");
                break;
            case 5:
                printf("Saturday:\n");
                break;
        }
        for (j = 1; j <= 6; j++) {
            if (i == 0 || i == 1 || i == 3|| i == 4) 
                printf("  Lecture %d\n", j);
            
            else if (i == 2 && (j == 1 || j == 2 || j == 3 || j == 4))
                printf("  Lecture %d\n", j);
            
            else if (i == 5 && j == 1 )
                printf("  Lecture %d\n", j);
            
        }
        printf("\n");
    } 
    return 0;
}
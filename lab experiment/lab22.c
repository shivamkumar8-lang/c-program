#include <stdio.h>

int main() {
    int total = 0, a, i;
    for(i = 1; i<=30; i++) {
        printf("Day %d (1=Present, 0=Absent): ", i);
        scanf("%d", &a);
        if (a == 1 ){
            total+=1;
        }
    }
    printf("Total present days = %d\n", total);
    return 0;
}

#include <stdio.h>

int main() {
    int i;
    float total = 0.0, distance;
    for(i = 1; i<=30; i++) {
        printf("Enter the distance walked in a day %d (km): ", i);
        scanf("%f", &distance);
            total+= distance;
    }
    printf("Total distance walked = %.2f km\n", total);
    return 0;
}
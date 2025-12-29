#include <stdio.h>
int main() {
    int intVar = 10;
    float floatVar = 5.5f;
    char charVar = 'A';
    double doubleVar = 20.99;
    printf("Integer Value: %d, Size: %zu bytes\n", intVar, sizeof(intVar));
    printf("Float Value: %.2f, Size: %zu bytes\n", floatVar, sizeof(floatVar));
    printf("Character Value: %c, Size: %zu bytes\n", charVar, sizeof(charVar));
    printf("Double Value: %.2lf, Size: %zu bytes\n", doubleVar, sizeof(doubleVar));
    return 0;
}
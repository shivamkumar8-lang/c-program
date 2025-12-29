#include <stdio.h>

int main() {
    int x = 10;
    int pre_result, post_result;
    // Pre-increment: ++x increments x before using its value
    pre_result = ++x + 20; // x becomes 11, then 11 + 10 = 21
    // Reset x for post-increment demonstration
    x = 10;
    // Post-increment: x++ uses x's value, then increments x
    post_result = x++ + 20; // 10 + 20 = 30, then x becomes 11
    printf("Using pre-increment (++x): result = %d, x = %d\n", pre_result, x);
    // Reset x for clarity
    x = 10;
    post_result = x++ + 20;
    printf("Using post-increment (x++): result = %d, x = %d\n", post_result, x);

    return 0;
}
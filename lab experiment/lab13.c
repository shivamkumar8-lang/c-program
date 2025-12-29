#include <stdio.h>
int main() {
    int sub1, sub2, sub3, total, average;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    total = sub1 + sub2 + sub3;
    average = total / 3;
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %d\n", average);
    if (average >= 90)
        printf("Grade A\n");
    else if (90 > average && average >= 75)
        printf("Grade B\n");
    else if (75 > average && average >= 50)
        printf("Grade C\n");
    else
        printf("Grade F\n");
    return 0;
}
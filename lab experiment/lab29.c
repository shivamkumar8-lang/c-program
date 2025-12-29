// Marksheet generator function

#include <stdio.h>
int marksheet_genrater(int marks1, int marks2, int marks3, int marks4, int marks5){
   int total = 5;
   float avg;
    int obtain_marks = marks1 + marks2 + marks3 + marks4 + marks5;
    avg = obtain_marks / total;
    printf("Total Marks = %d\n", obtain_marks);
    printf("Average Marks = %.2f\n", avg);
    if (avg>=90)
        printf("Grade = A\n");
    else if (avg>=80)
        printf("Grade = B\n");
    else if (avg>=70)
        printf("Grade = C\n");
    else if (avg>=60)
        printf("Grade = D\n");
    else
        printf("Grade = F\n");
    return 0;   
}

int main() {
    int marks1,marks2,marks3, marks4, marks5 ;
    char name[20];
    int roll_no;
    printf ("Enter your name: ");
    scanf("%s", name);
    printf ("Enter your roll number: ");
    scanf("%d", &roll_no);
    printf ("Enter your 1st subject mark: ");
    scanf("%d", &marks1);
    printf ("Enter your 2nd subject mark: ");
    scanf("%d", &marks2);
    printf ("Enter your 3rd subject mark: ");
    scanf("%d", &marks3);
    printf ("Enter your 4th subject mark: ");
    scanf("%d", &marks4);
    printf ("Enter your 5th subject mark: ");
    scanf("%d", &marks5);
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll_no);
    marksheet_genrater(marks1,marks2,marks3, marks4, marks5);
    return 0;
}
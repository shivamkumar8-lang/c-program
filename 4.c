// Salary Calculation System

#include <stdio.h>
int main() {
    // Employee Salary Calculation
    char name[20];
    float B_salary, HRA, DA, I_tax, G_Salary, N_Salary;

    // Input name of the employee and Basic Salary
    printf("Enter employee name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter basic salary: ");
    scanf("%f", &B_salary);

    // Calculating HRA and DA
    HRA = 0.20 * B_salary;
    printf("HRA = %.2f\n", HRA);
    DA = 0.10 * B_salary;
    printf("DA = %.2f\n", DA);

    // Gross Salary = Basic Salary + HRA + DA
    G_Salary = B_salary + HRA + DA;
    printf("Gross Salary = %.2f\n", G_Salary);

    // Calculating Income Tax = 5% of Gross Salary
    I_tax = 0.05 * G_Salary;
    printf("Income Tax = %.2f\n", I_tax);

    // Net Salary = Gross Salary - Income Tax
    N_Salary = G_Salary - I_tax;
    printf("Net Salary = %.2f\n", N_Salary);
    return 0; 
}

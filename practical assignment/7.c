// Bank intrest update system

#include <stdio.h>
int main() {
    float balance, intrest_amount, maintenance_charge, bonus, total_amount;

    // Input account balance
    printf("Enter Customer's account balance: ");
    scanf("%f", &balance);
    
    // Calculate intrest, maintenance charge, bonus and total amount
    intrest_amount = 0.05 * balance;
    balance += intrest_amount;
    printf("Balance after interest: %.2f\n", balance);
    maintenance_charge = 100.00;
    balance -= maintenance_charge;
    printf("Balance after maintenance charge: %.2f\n", balance);
    bonus = 1.5;
    balance *= bonus;
    printf("Balance after applying bonus: %.2f\n", balance);
    total_amount = balance;
    //Divides the balance equally among two linked accounts 
    total_amount/= 2;
    printf("Total amount in each linked account: %.2f\n", total_amount);
    return 0; 
}
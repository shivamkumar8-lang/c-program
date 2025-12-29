// Comparing Two Numbers Without Conditional Statements

#include <stdio.h>
int main() {
    // Compare two Account balances
    int a_balance, b_balance , compar;

    // Input balance of Account A and Account B
    printf("Enter balance of Account A: ");
    scanf("%d", &a_balance);
    printf("Enter balance of Account B: ");
    scanf("%d", &b_balance);

    // Compare the balances
    compar = a_balance == b_balance;
    printf("Both accounts equal: %d\n", compar);
    compar = a_balance > b_balance;
    printf("Account A has more balance then B: %d\n", compar);
    compar = a_balance < b_balance;  
    printf("Account B has more balance then A: %d\n", compar);
    return 0;
}
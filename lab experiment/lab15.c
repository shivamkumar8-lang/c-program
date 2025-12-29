#include <stdio.h>
int main() {
    int units;
    float rate, total, surcharge = 0.0;

    // Input number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Determine rate based on units consumed
    if (units <= 100) {
        rate = 3.0;
    } else if (units <= 200) {
        rate = 4.0;
    } else {
        rate = 5.0;
    }
    
    total = units * rate;   // Calculate total bill

    // Apply surcharge if total exceeds ₹1000
    if (total > 1000) {
        surcharge = total * 0.10;   
    }
    total = total + surcharge;

    printf("Electricity bill = Rs.%.2f\n", total); // Display total bill

    return 0;
}
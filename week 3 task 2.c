#include <stdio.h>

int main(void) {
    double units;
    double total_bill = 0.0;

    // 1. Prompt user for water units consumed
    printf("Enter the number of water units consumed: ");
    if (scanf("%lf", &units) != 1 || units < 0) {
        printf("Error: Please enter a valid non-negative number of units.\n");
        return 1;
    }

    // 2. Calculate total bill using if-else if-else logic
    if (units <= 30) {
        // Tier 1: First 30 units at 20 KES each
        total_bill = units * 20.0;
    } 
    else if (units <= 60) {
        // Tier 2: First 30 units at 20 KES + remaining units at 25 KES each
        total_bill = (30 * 20.0) + ((units - 30) * 25.0);
    } 
    else {
        // Tier 3: First 30 units at 20 KES + next 30 units at 25 KES + remaining above 60 at 30 KES each
        total_bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    // 3. Display the total bill formatted to two decimal places
    printf("Total Bill: KES %.2f\n", total_bill);

    return 0;
}

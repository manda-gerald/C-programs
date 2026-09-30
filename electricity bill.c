#include <stdio.h>

// 1. Define the calculateBill() function
double calculateBill(int units) {
    double bill = 0.0;

    // Apply the tiered rates based on units consumed
    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = (100 * 10.0) + ((units - 100) * 15.0);
    } else {
        bill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }

    return bill;
}

int main() {
    int unitsConsumed;
    double totalBill;

    // 2. Prompt the user to enter the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &unitsConsumed);

    if (unitsConsumed < 0) {
        printf("Invalid input. Units cannot be negative.\n");
        return 1; // Exit with an error code
    }

    // 3. Call the calculateBill() function and store the returned bill amount
    totalBill = calculateBill(unitsConsumed);

    // 4. Display the number of units consumed and the total electricity bill
    printf("Number of units consumed: %d\n", unitsConsumed);
    printf("Total electricity bill: KSh %.2f\n", totalBill);

    return 0;
}

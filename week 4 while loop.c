#include <stdio.h>

int main() {
    double balance, withdrawal;

    // Get initial account balance
    printf("Enter initial account balance: $");
    scanf("%lf", &balance);

    // Loop runs as long as the balance is strictly greater than 0
    while (balance > 0) {
        printf("Enter amount to withdraw: $");
        scanf("%lf", &withdrawal);

        // Deduct withdrawal amount from current balance
        balance -= withdrawal;

        // Display the updated balance
        printf("Remaining balance: $%.2f\n\n", balance);
    }

    printf("Transaction ended: Account balance is zero or negative.\n");

    return 0;
}

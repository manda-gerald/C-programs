#include <stdio.h>

int main() {
    // Variable declarations with appropriate data types
    float height;          // Standard float for precision up to 2 decimal places
    double bank_balance;   // Double precision to accurately handle large monetary amounts
    char phone_number[20]; // String array to preserve leading zeros (e.g., "0712345678" or "+254...")

    printf("         USER DETAILS COLLECTION        \n");

    // Prompt for Height
    printf("Enter your height (in meters, e.g., 1.75): ");
    if (scanf("%f", &height) != 1) {
        printf("Error: Invalid height input.\n");
        return 1;
    }

    // Prompt for Bank Balance
    printf("Enter your bank balance (in KSh, e.g., 150000.50): ");
    if (scanf("%lf", &bank_balance) != 1) {
        printf("Error: Invalid bank balance input.\n");
        return 1;
    }

    // Prompt for Phone Number
    printf("Enter your phone number (e.g., 0712345678 or +254712345678): ");
    scanf("%19s", phone_number); // Limit input to 19 characters to avoid buffer overflow

    // Output formatted details
    printf("           CONFIRMED DETAILS            \n");
    printf("Height:       %.2f meters\n", height);
    printf("Bank Balance: KSh %'15.2f\n", bank_balance); // Formatted with 2 decimal places
    printf("Phone Number: %s\n", phone_number);
    return 0;
}
    
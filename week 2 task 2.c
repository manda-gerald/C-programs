#include <stdio.h>

int main() {
    int age;
    double income;

    // Prompt user for age
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Prompt user for annual income
    printf("Please enter your annual income (Sh): ");
    scanf("%lf", &income);

    // Check loan eligibility criteria
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}

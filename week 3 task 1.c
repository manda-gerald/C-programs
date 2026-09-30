#include <stdio.h>

// Function that returns "Eligible" or "Not eligible" based on criteria
const char* check_eligibility(float attendance, float average_marks) {
    if (attendance >= 75.0 && average_marks >= 40.0) {
        return "Eligible";
    } else {
        return "Not eligible";
    }
}

int main() {
    float attendance, average_marks;

    // Get input from user
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &average_marks);

    // Print result
    printf("%s\n", check_eligibility(attendance, average_marks));

    return 0;
}

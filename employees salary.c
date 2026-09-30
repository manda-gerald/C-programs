#include <stdio.h>

// Function to calculate tax based on gross salary
float calculateTax(float grossSalary) {
    float taxRate;
    
    if (grossSalary < 30000) {
        taxRate = 0.05;  // 5% tax for gross salary below KSh 30,000
    } else if (grossSalary <= 59999) {
        taxRate = 0.10;  // 10% tax for gross salary from KSh 30,000 to KSh 59,999
    } else {
        taxRate = 0.15;  // 15% tax for gross salary of KSh 60,000 and above
    }
    
    return grossSalary * taxRate;
}

int main() {
    float grossSalary, tax, netSalary;

    // 1. Prompt the user to enter the gross salary
    printf("Enter the employee's gross salary (KSh): ");
    scanf("%f", &grossSalary);

    // 2. Call calculateTax() and store the returned tax amount
    tax = calculateTax(grossSalary);

    // 3. Calculate net salary
    netSalary = grossSalary - tax;

    // 4. Display the results
    printf("\n--- Employee Salary Details ---\n");
    printf("Gross Salary : KSh %.2f\n", grossSalary);
    printf("Tax Amount   : KSh %.2f\n", tax);
    printf("Net Salary   : KSh %.2f\n", netSalary);

    return 0;
}

#include <stdio.h>

// Function to calculate bill amount based on slab rates
float calculateBill(int units) {
    float amount = 0;

    if (units <= 100)
        amount = units * 1.5;
    else if (units <= 300)
        amount = 100 * 1.5 + (units - 100) * 2.5;
    else if (units <= 500)
        amount = 100 * 1.5 + 200 * 2.5 + (units - 300) * 4.0;
    else
        amount = 100 * 1.5 + 200 * 2.5 + 200 * 4.0 + (units - 500) * 6.0;

    return amount;
}

int main() {
    char name[50];
    int meterNo, units;
    float total;

    // Take input from user
    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Meter Number: ");
    scanf("%d", &meterNo);

    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    // Calculate total bill
    total = calculateBill(units);

    // Display the bill
    printf("\n========= ELECTRICITY BILL =========\n");
    printf("Customer Name : %s\n", name);
    printf("Meter Number  : %d\n", meterNo);
    printf("Units Used    : %d\n", units);
    printf("Total Amount  : ₹%.2f\n", total);
    printf("====================================\n");

    return 0;
}

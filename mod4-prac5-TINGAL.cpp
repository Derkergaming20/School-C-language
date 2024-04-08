#include <stdio.h>

int main() {
    const float initialRate = 20.00;
    const float subsequentRate = 4.00;
    const int freeMinutes = 3;

    int callDuration;
    float totalBill = 0.0;

    printf("Enter the duration of the call in minutes: ");
    scanf("%d", &callDuration);

    while (callDuration < 0) {
        printf("Invalid input. Duration must be non-negative. Please enter again: ");
        scanf("%d", &callDuration);
    }

    if (callDuration <= freeMinutes) {
        totalBill = initialRate;
    } else {
        totalBill = initialRate + (callDuration - freeMinutes) * subsequentRate;
    }

    printf("The total bill for the call is: $%.2f\n", totalBill);

    return 0;
}


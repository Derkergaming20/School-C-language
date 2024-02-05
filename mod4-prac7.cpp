#include<stdio.h>

int main() {
    while (1) {
        int x, fact = 1, n;

        printf("Enter a number to find factorial (enter 0 to quit): ");
        scanf("%d", &n);

        if (n == 0) {
            printf("Quitting the program.\n");
            break;  // Exit the loop if the quit option is chosen
        }

        for (x = 1; x <= n; x++)
            fact = fact * x;

        printf("Factorial of %d is: %d\n", n, fact);

        printf("\n----------------------------------------- \n");
    }

    return 0;
}

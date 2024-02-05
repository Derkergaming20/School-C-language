#include <stdio.h>
#include <stdlib.h>

int main() {
    int opr;
    int num1, num2, x;

    // display different operation of the calculator
    do {
        printf("Select an operation to perform a simple calculation in C Calculator"
               "\n1 = Addition"
               "\n2 = Subtraction"
               "\n3 = Multiplication"
               "\n4 = Division"
               "\n5 = Square"
               "\n6 = Exit"
               "\n \n Make a choice: ");
        if (scanf("%d", &opr) != 1) {
            printf("\n Invalid input. Please enter a valid integer choice.\n");
            fflush(stdin);  // clear input buffer in case of non-integer input
            continue;
        }

        switch (opr) {
            // for addition operation in calculator
            case 1:
                printf("You have selected the Addition Operation.");
                printf("\n Please enter the two numbers: \n");
                scanf("%d %d", &num1, &num2);
                x = num1 + num2;
                printf("Sum of two numbers = %d\n", x);
                break;

            // for subtraction operation in calculator
            case 2:
                printf("You have selected the Subtraction Operation.");
                printf("\n Please enter the two numbers: \n");
                scanf("%d %d", &num1, &num2);
                x = num1 - num2;
                printf("Subtraction of two numbers = %d\n", x);
                break;

            // for multiplication operation in calculator
            case 3:
                printf("You have selected the Multiplication Operation.");
                printf("\n Please enter the two numbers: \n");
                scanf("%d %d", &num1, &num2);
                x = num1 * num2;
                printf("Product of two numbers = %d\n", x);
                break;

            // for division operation in calculator
            case 4:
                printf("You have selected the Division Operation.");
                printf("\n Please enter the two numbers: \n");
                scanf("%d %d", &num1, &num2);

                // while loop checks for divisor whether it is zero
                while (num2 == 0) {
                    printf("\n Divisor cannot be zero"
                           "\n Please enter the divisor once again: ");
                    scanf("%d", &num2);
                }

                x = num1 / num2;
                printf("\n Quotient = %d\n", x);
                break;

            // to square a number in calculator
            case 5:
                printf("You have selected the Square Operation.");
                printf("\n Please enter any number: \n");
                scanf("%d", &num1);
                x = num1 * num1;
                printf("Square is = %d\n", x);
                break;

            case 6:
                exit(0);  // terminate the program
                break;

            default:
                printf("\n Invalid choice. Please enter a valid operation.\n");
                break;
        }

        printf("\n----------------------------------------- \n");
    } while (opr != 6);

    getchar();

    return 0;
}

/*Dexter Paul D. Tingal*/
//DO NOT COPY//

#include <stdio.h>

float reg_fare, stud, sen;
int x;

int main() {
    reg_fare = 220;

    do {
        printf("Enter Type of Passenger: \n\n");
        printf("(1) Student \n");
        printf("(2) Senior \n");
        printf("(3) Regular \n\n");
        printf("Please Enter Number [1-3]: ");
        scanf("%d", &x);

        if (x == 1) {
            printf("\nThe regular fare is = %.2f\n", reg_fare);
            printf("Student's discount is 15%%\n");
            stud = reg_fare * 0.85;
            printf("The amount to be paid : P %.2f\n", stud);
        } else if (x == 2) {
            printf("\nThe regular fare is = %.2f\n", reg_fare);
            printf("Senior's discount is 25%%\n");
            sen = reg_fare * 0.75;
            printf("The amount to be paid : P %.2f\n", sen);
        } else if (x == 3) {
            printf("\nThe regular fare is = %.2f\n", reg_fare);
            printf("Since you're a regular passenger, then\n");
            printf("The amount to be paid : P %.2f\n", reg_fare);
        } else {
            printf("Unrecognized format\n");
        }
    } while (x < 1 || x > 3);

    return 0;
}

//TINGAL, DEXTER PAUL D.//
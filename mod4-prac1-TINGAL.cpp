#include <stdio.h>

	float reg_fare, stud, sen;
	int x;

int main() {
	
    reg_fare = 220;

    printf("Enter Type of Passenger: \n\n");
    printf("(1) Student \n");
    printf("(2) Senior \n");
    printf("(3) Regular \n\n");
    printf("Please Enter Number [1-3]: ");
    scanf("%d", &x);

    switch (x) {
        case 1:
            printf("\nThe regular fare is = %.2f\n", reg_fare);
            printf("Student's discount is 15%%\n");
            stud = reg_fare * 0.85;
            printf("The amount to be paid : P %.2f\n", stud);
            break;

        case 2:
            printf("\nThe regular fare is = %.2f\n", reg_fare);
            printf("Senior's discount is 25%%\n");
            sen = reg_fare * 0.75;
            printf("The amount to be paid : P %.2f\n", sen);
            break;

        case 3:
            printf("\nThe regular fare is = %.2f\n", reg_fare);
            printf("Since you're a regular passenger, then\n");
            printf("The amount to be paid : P %.2f\n", reg_fare);
            break;

        default:
            printf("Unrecognized format\n");
    }

    return 0;
}

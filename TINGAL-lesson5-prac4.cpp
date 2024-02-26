/*
DO NOT COPY
DEXTER PAUL TINGAL
*/

#include <stdio.h>
#include <conio.h>

void menu();
void add();
void subtract();
void multiply();
void divide();

void menu() {
    printf("\nMENU\n");
    printf("(1) Addition\n");
    printf("(2) Subtraction\n");
    printf("(3) Multiplication\n");
    printf("(4) Division\n");
    printf("(5) Quit\n");
}

void add() {
    int x, y, z;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &x, &y);
    z = x + y;
    printf("Sum: %d\n", z);
}


void subtract() {
   int x, y, z;
   printf("\nEnter two numbers: ");
   scanf("%d %d", &x, &y);
   z= x - y;
   printf("Sum: %d\n", z);
}


void multiply() {
     int x, y, z;
   printf("\nEnter two numbers: ");
   scanf("%d %d", &x, &y);
   z= x * y;
   printf("Sum: %d\n", z);
}


void divide() {
     int x, y, z;
   printf("\nEnter two numbers: ");
   scanf("%d %d", &x, &y);
   z= x / y;
   printf("Sum: %d\n", z);
}

int main() {
    char choice;
    do {
        menu(); 
        printf("Enter your choice: ");
        choice = getch(); 
        switch (choice) {
            case '1':
                add();
                break;
            case '2':
                subtract();
                break;
            case '3':
                multiply();
                break;
            case '4':
                divide();
                break;
            case '5':
                printf("\nExiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("Press any key to continue...");
        getch(); 
    } while (choice != '5');
    return 0;
}

//TINGAL, DEXTER PAUL D.






























































































































































































































































































































































































































//TINGAL, DEXTER PAUL D.
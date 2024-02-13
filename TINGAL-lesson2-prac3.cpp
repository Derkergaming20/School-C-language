#include <stdio.h> 

main(){
char letter;
int sum;
float money;


printf("Please Enter an character value: ");
scanf("%c", &letter);

printf("Please Enter an integer value: ");
scanf("%d", &sum);

printf("Please Enter an float integer value: ");
scanf("%f", &money);

printf("\nThe value of sum = %d\nThe value of letter = %c\nThe value of money = %.1f\n", sum, letter, money);

return 0;
}
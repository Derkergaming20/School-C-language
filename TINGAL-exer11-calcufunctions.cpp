/*
DO NOT COPY
DEXTER PAUL TINGAL
*/

#include <stdio.h>

int numb1, numb2, sum, difference, product, qoutient, modul;
int add(int x, int y){
	return x + y;
}
int subtract(int x, int y){
	return x - y;
}
int multiple(int x, int y){
	return x * y;
}
int division(int x, int y){
	return x / y;
} 
int modulus(int x, int y){
	return x % y;
}

int main(){
	printf("Enter first number: ");
	scanf("%d", &numb1);
	printf("Enter second number: ");
	scanf("%d", &numb2);
	
	sum = add(numb1, numb2);
	difference = subtract(numb1, numb2);
	product = multiple(numb1, numb2);
	qoutient = division(numb1, numb2);
	modul = modulus(numb1, numb2);
	
	
	printf("\nThe sum is %d", sum);
	printf("\nThe difference is %d", difference);
	printf("\nThe product is %d", product);
	printf("\nThe qoutient is %d", qoutient);
	printf("\nThe modulus is %d", modul);
	
	return 0;
}




//TINGAL, DEXTER PAUL D.

































































































































































































































































































































































































































































//TINGAL, DEXTER PAUL D.
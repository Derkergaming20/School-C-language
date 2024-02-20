#include <stdio.h>

int add(int a, int b){
	
	return a + b;
}

int x, y, sum;

int main(){
	
	printf("Enter first number: ");
	scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &y);
	
	sum = add(x, y);
	
	printf("The sum is %d", add(x, y));
	
	return 0;
}
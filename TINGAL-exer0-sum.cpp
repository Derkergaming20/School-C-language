#include <stdio.h>

int main()
{
	int n1, n2, sum;
	printf("Enter the first number: ");
	scanf("%d", &n1);
	printf("Enter the second number: ");
	scanf("%d", &n2);
	
	sum = n1 + n2;
	
	printf("The sum of the two numbers is : %d", sum);
	
	return 0;
}
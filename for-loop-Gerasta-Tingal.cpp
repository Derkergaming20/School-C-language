#include <stdio.h>

int main(){
	int i, n;
	float m, sum=0, a;
	
	printf("Enter number of subjects: ");
	scanf("%d", &n);
	
	printf("\nEnter grade in %d subjects: ", n);
	
	for(i = 0; i < n; i++){
		scanf("%f", &m);
		sum = sum + m;
	}
	a = sum / n;
	printf("\nGrade = %.1f", a);
	if (a < 75)
		printf("\nThe grade is F");
	else if ((a >= 75) && (a <= 84))
		printf("\nThe grade is E");
	else if ((a >= 85) && (a <= 89))
		printf("\nThe grade is D");
	else if ((a >= 90) && (a <= 94))
		printf("\nThe grade is C");
	else if ((a >= 95) && (a <= 99))
		printf("\nThe grade is B");
	else if (a >= 100)
		printf("\nThe grade is A");
	
	return 0;
}
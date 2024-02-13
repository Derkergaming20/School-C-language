/*Dexter Paul D. Tingal*/
//DO NOT COPY//

#include <stdio.h>

int main(){
	int g1, g2, g3, g4, g5;
	float aver;
	
	printf("Enter first subject: ");
	scanf("%d", &g1);
	
	printf("Enter second subject: ");
	scanf("%d", &g2);
	
	printf("Enter third subject: ");
	scanf("%d", &g3);
	
	printf("Enter fourth subject: ");
	scanf("%d", &g4);
	
	printf("Enter fifth subject: ");
	scanf("%d", &g5);
	
	aver = (g1 + g2 + g3 + g4 + g5) / 5;
	
	printf("The average grade is: %.1f", aver);
	
	if (aver < 75)
		printf("\nThe grade is F");
	else if ((aver >= 75) && (aver <= 84))
		printf("\nThe grade is E");
	else if ((aver >= 85) && (aver <= 89))
		printf("\nThe grade is D");
	else if ((aver >= 90) && (aver <= 94))
		printf("\nThe grade is C");
	else if ((aver >= 95) && (aver <= 99))
		printf("\nThe grade is B");
	else if (aver >= 100)
		printf("\nThe grade is A");
		
	return 0;
}

//TINGAL, DEXTER PAUL D.//
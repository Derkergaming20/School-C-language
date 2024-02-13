#include <stdio.h>

int main(){
	int radius, area, circum;
	int pi = 3.14;
	
	printf("Enter the radius: ");
	scanf("%d", &radius);
	
	area = 2 * pi * radius;
	circum = pi * radius * radius;
	
	printf("Your area is: %d\nYour circumference is: %d", area, circum);
	
	return 0;
}
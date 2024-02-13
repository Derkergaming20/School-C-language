/*Dexter Paul D. Tingal*/
//DO NOT COPY//

#include <stdio.h>

int main(){
	const int cookiesperbox = 24;
	 const int boxpercontainer = 75;
	int cookies, box, container;
	int boxcookies, containerbox;
	int leftcookies, leftboxes, leftcontainer;
	
	printf("Enter a number of cookies: ");
	scanf("%d", &cookies);
	printf("Enter a number of boxes: ");
	scanf("%d", &box);
	printf("Enter a number of container: ");
	scanf("%d", &container);
	
	boxcookies = cookies / cookiesperbox;
	containerbox = boxcookies / boxpercontainer;
	
	leftcookies = cookies % cookiesperbox;
	leftboxes = box % boxpercontainer;
	leftcontainer = container % leftboxes;
	
	printf("\nThe total cookies inside the box are: %d\n", cookies);
	printf("The total box of cookies are: %d\n", boxcookies);
	printf("The total container to ship are: %d\n\n", leftcontainer);
	
	printf("The left over cookies are: %d\n", leftcookies);
	printf("The left over boxes are: %d", leftboxes);
	
	return 0;
}

//TINGAL, DEXTER PAUL D.//
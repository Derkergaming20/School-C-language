#include <stdio.h>

int main(){
	int cookiesperbox = 24;
	int boxpercontainer = 75;
	int cookies, box, container, boxcookies, containerbox, leftcookies, leftboxes;
	
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
	
	printf("\nThe total cookies inside the box are: %d\n", cookies);
	printf("The total box of cookies are: %d\n", boxcookies);
	printf("The total container to ship are: %d\n", containerbox);
	printf("The left over cookies are: %d\n", leftcookies);
	printf("The left over boxes are: %d", leftboxes);
	
	return 0;
}
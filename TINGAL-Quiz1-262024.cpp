/*Dexter Paul D. Tingal*/
//DO NOT COPY//

#include <stdio.h>

int main(){
	int numb;
	
	printf("Enter a number: ");
	scanf("%d", &numb);
	
	if(numb >= 1){
		printf("Your number is Positive");
	} else if(numb <= -1){
		printf("Your number is Negative");
	} else if(numb == 0){
		printf("Your number is Zero");
	}
	
	return 0;
}

//TINGAL, DEXTER PAUL D.//
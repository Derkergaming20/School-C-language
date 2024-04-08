#include <stdio.h>

int main(){
	int numb1, numb2, numb3, numb4, numb5;
	
	printf("Enter your first number: ");
	scanf("%d", &numb1);
	printf("Enter your first number: ");
	scanf("%d", &numb2);
	printf("Enter your first number: ");
	scanf("%d", &numb3);
	printf("Enter your first number: ");
	scanf("%d", &numb4);
	printf("Enter your first number: ");
	scanf("%d", &numb5);
	
	if(numb5 <= numb4){
		printf("%d, ", numb5);
	} else if(numb5 >= numb4){
		printf("%d, ", numb5);
	} else if(numb5 <= numb3){
		printf("%d, ", numb5);
	} else if(numb5 >= numb3){
		printf("%d, ", numb5);
	} else if(numb5 <= numb2){
		printf("%d, ", numb5);
	} else if(numb5 >= numb2){
		printf("%d, ", numb5);
	} else if(numb5 <= numb1){
		printf("%d, ", numb5);
	} else if(numb5 >= numb1){
		printf("%d, ", numb5);
	}
	if(numb4 <= numb3){
		printf("%d, ", numb4);
	} else if(numb4 >= numb3){
		printf("%d, ", numb4);
	} else if(numb4 <= numb2){
		printf("%d, ", numb4);
	} else if(numb4 >= numb2){
		printf("%d, ", numb4);
	} else if(numb4 <= numb1){
		printf("%d, ", numb4);
	} else if(numb4 >= numb1){
		printf("%d, ", numb4);
	}
	if(numb3 <= numb2){
		printf("%d, ", numb3);
	} else if(numb3 >= numb2){
		printf("%d, ", numb3);
	} else if(numb3 <= numb1){
		printf("%d, ", numb3);
	} else if(numb3 >= numb1){
		printf("%d, ", numb3);
	}
	if(numb2 <= numb1){
		printf("%d, ", numb2);
	} else if(numb2 >= numb1){
		printf("%d, ", numb2);
	}
	if(numb1 == numb1){
		printf("%d", numb1);
	}
	 
	return 0;
}

/*Dexter Paul D. Tingal*/
//DO NOT COPY//

#include <stdio.h>
	
	int main(){
		int temp, i, numb1, numb2, numb3, numb4, numb5;
		
		printf("Enter five numbers:\n");
		
		printf("First Number: ");
		scanf("%d", &numb1);
		
		printf("Second Number: ");
		scanf("%d", &numb2);
		
		printf("Third Number: ");
		scanf("%d", &numb3);
		
		printf("Fourth Number: ");
		scanf("%d", &numb4);
		
		printf("Fifth Number: ");
		scanf("%d", &numb5);
		
		for(i = 0; i < 5; ++i){
			if(numb1 < numb2){
				temp = numb1;
				numb1 = numb2;
				numb2 = temp;
			}
			if(numb2 < numb3){
				temp = numb2;
				numb2 = numb3;
				numb3 = temp;
			}
			if(numb3 < numb4){
				temp = numb3;
				numb3 = numb4;
				numb4 = temp;
			}
			if(numb4 < numb5){
				temp = numb4;
				numb4 = numb5;
				numb5 = temp;
			}
		}
		
		printf("\nThe Descending order are: %d, %d, %d, %d, %d", numb1, numb2, numb3, numb4, numb5);
		
		return 0;
	}
	
	//TINGAL, DEXTER PAUL D.//
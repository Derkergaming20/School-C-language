#include <stdio.h>  
 int main(){ 
 const int NEXT_CENTURY = 3000, GRAMS_PER_POUND = 454; 
 long weight_in_grams, weight_in_pounds; 
 int year_of_birth, age_in_3000;
 
 printf("Enter your weight in pounds: "); 
 scanf("%d", &weight_in_pounds); 
 printf("Enter your year of birth: "); 
 scanf("%d", &year_of_birth);  
 
 weight_in_grams = weight_in_pounds * GRAMS_PER_POUND; 
 age_in_3000 = NEXT_CENTURY - year_of_birth; 
 
 printf("\nYour weight in grams = %ld", weight_in_grams); 
 printf("\nIn 2000 you will be %d years old\n", age_in_3000); 
 return 0; 
 }

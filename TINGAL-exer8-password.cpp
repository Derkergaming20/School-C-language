#include <stdio.h>

int main(){
    const int id = 8103;
    
    int input;
    
    printf("Enter your password: ");
    scanf("%d", &input);
    
    if (input >= id)
    printf("Correct");
    else 
    printf("Incorrect");

return 0;
}
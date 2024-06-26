#include <stdio.h>
#include <string.h>

int ispalindrome(char str[]) {
    int length = strlen(str);
    int i, j;


    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    if (ispalindrome(input)) {
        printf("%s is a palindrome.\n", input);
    } else {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}

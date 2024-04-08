#include <stdio.h>
#include <string.h>

void sortString(char str[], int length) {
    int i, j;

    for (i = 0; i < length - 1; i++) {
        for (j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char input[1000];
    char words[100][100];
    int i, j, k, numWords = 0;

    printf("Enter words separated by spaces: ");
    fgets(input, sizeof(input), stdin);

    int inputLength = strlen(input);
    for (i = 0, j = 0; i < inputLength && numWords < 100; i++) {
        if (input[i] != ' ' && input[i] != '\n') {
            words[numWords][j++] = input[i];
        } else {
            words[numWords][j] = '\0'; 
            numWords++;
            j = 0;
        }
    }

    for (i = 0; i < numWords; i++) {
        int length = strlen(words[i]);
        sortString(words[i], length);
    }

    printf("The sorting of words in alphabetical order is:\n");
    for (i = 0; i < numWords; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}


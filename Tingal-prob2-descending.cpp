#include <stdio.h>

int main() {
    int numbers[5];
    int i, j, temp;

    printf("Enter five numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (numbers[i] < numbers[j]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("\nNumbers in descending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d, ", numbers[i]);
    }

    return 0;
}


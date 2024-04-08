#include <stdio.h>

int main() {
    int n, fib[100000000]; 
    int i;


    printf("Enter the value of n: ");
    scanf("%d", &n);


    fib[0] = 1; 
    fib[1] = 1; 
    for (i = 2; fib[i - 1] + fib[i - 2] <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }


    printf("Fibonacci series up to %d: ", n);
    for (int j = 0; j < i; j++) {
        printf("%d ", fib[j]);
    }

    printf("\n");
    return 0;
}


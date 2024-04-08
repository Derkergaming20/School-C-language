#include <stdio.h>

// Function prototypes
void input(char *conversionType, float *amount, float *exchangeRate);
void convertPesoToDollar(float amount, float exchangeRate, float *convertedAmount);
void convertDollarToPeso(float amount, float exchangeRate, float *convertedAmount);
void output(char conversionType, float amount, float convertedAmount);

int main() {
    char conversionType;
    float amount, exchangeRate, convertedAmount;

    // Get conversion type, amount, and exchange rate from the user
    input(&conversionType, &amount, &exchangeRate);

    // Perform conversion based on the user's choice
    switch (conversionType) {
        case 'a':
            convertPesoToDollar(amount, exchangeRate, &convertedAmount);
            break;
        case 'b':
            convertDollarToPeso(amount, exchangeRate, &convertedAmount);
            break;
        default:
            printf("Invalid conversion type!\n");
            return 1; // Exit program with error code
    }

    // Display the result
    output(conversionType, amount, convertedAmount);

    return 0;
}

void input(char *conversionType, float *amount, float *exchangeRate) {
    printf("Select the type of conversion you desire:\n");
    printf("(a) Peso to Dollars\n");
    printf("(b) Dollars to Pesos\n");
    printf("Enter the corresponding letter: ");
    scanf(" %c", conversionType);

    printf("Input Amount: ");
    scanf("%f", amount);

    printf("Input exchange rate (peso/dollar): ");
    scanf("%f", exchangeRate);
}

// Function to convert pesos to dollars
void convertPesoToDollar(float amount, float exchangeRate, float *convertedAmount) {
    *convertedAmount = amount / exchangeRate;
}

// Function to convert dollars to pesos
void convertDollarToPeso(float amount, float exchangeRate, float *convertedAmount) {
    *convertedAmount = amount * exchangeRate;
}


void output(char conversionType, float amount, float convertedAmount) {
    if (conversionType == 'a') {
        printf("%.2f pesos is %.2f dollars\n", amount, convertedAmount);
    } else if (conversionType == 'b') {
        printf("%.2f dollars is %.2f pesos\n", amount, convertedAmount);
    }
}

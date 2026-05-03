#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, result;
    char operator;
    
    printf("=== Simple Calculator ===\n\n");
    
    // Get first number
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    // Get operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    // Get second number
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    // Perform calculation based on operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("\nError: Division by zero is not allowed!\n");
            }
            break;
        default:
            printf("\nError: Invalid operator!\n");
    }
    
    return 0;
}
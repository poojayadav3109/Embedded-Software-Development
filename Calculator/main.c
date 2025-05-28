//write a c code to take user input for two numbers and perform addition, subtraction, multiplication, and division on them.
#include <stdio.h>
#include "Addition.h"

int main() {
    double num1, num2;
    char operator;

    // Taking user input for two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Taking user input for the operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Performing the operation based on the operator
    switch (operator) {
        case '+':
            addNumber(num1, num2);
            break;
        case '-':
            //subNumber(num1, num2);
            break;
        case '*':
            mulNumber(num1, num2);
            break;
        case '/':
            // if (num2 != 0) {
            //     printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            // } else {
            //     printf("Error: Division by zero is not allowed.\n");
            // }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
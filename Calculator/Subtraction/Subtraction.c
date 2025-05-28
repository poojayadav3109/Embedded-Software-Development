//Write a subtraction code that takes two numbers as input and prints their difference.
#include <stdio.h>
#include "Subtraction.h"
void subNumber(double num1, double num2) {
    double difference = num1 - num2;
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, difference);
}

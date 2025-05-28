//Write a c function to take two numbers as input and print their sum.
#include <stdio.h>
#include "Addition.h"

void addNumber(double num1, double num2) {
    double sum = num1 + num2;
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, sum);
}
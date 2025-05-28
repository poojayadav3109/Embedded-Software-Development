//Write a c function to multiply two numbers
#include <stdio.h>
#include "mul.h"

void mulNumber(double num1, double num2) {
    double mul = num1 * num2;
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, mul);
}
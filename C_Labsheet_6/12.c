// // Write function which accepts two integers as arguments and returns sum, difference and products of the
// // numbers.
#include <stdio.h>

void math_operations(int num1, int num2, int *sum, int *diff, int *product) {
    *sum = num1 + num2;
    *diff = num1 - num2;
    *product = num1 * num2;
}

void main() {
    int num1, num2, sum, diff, product;
    //clrscr
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    math_operations(num1, num2, &sum, &diff, &product);
    printf("Sum = %d\nDifference = %d\nProduct = %d", sum, diff, product);
    //getch
}

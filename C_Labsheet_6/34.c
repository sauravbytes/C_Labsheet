// WAP that use function swap two given values. The swap() should returns nothing (void). Hint: use (a)call
// by value and (b) call by reference.

#include<stdio.h>
#include<conio.h>

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("After swapping: num1 = %d, num2 = %d\n", x, y);
}

void main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(num1, num2);
   //getch()
}
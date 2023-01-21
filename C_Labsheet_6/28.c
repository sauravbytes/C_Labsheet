// WAP to find the value of x to the power y using recursive function.

#include<stdio.h>
// #include<conio.h>

int power(int x, int y) {
    if (y == 0) {
        return 1;
    }
    return x * power(x, y-1);
}

void main()
{
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("%d to the power of %d: %d", x, y, power(x, y));
   //getch()
}
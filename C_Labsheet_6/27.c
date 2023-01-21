// WAP to find the sum of given non-negative integer using a recursive function.

#include<stdio.h>
// #include<conio.h>

int sum(int num) {
    if (num == 0) {
        return 0;
    }
    return num + sum(num-1);
}

void main()
{
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    printf("Sum of the integers from 1 to %d: %d", num, sum(num));
   //getch()
}
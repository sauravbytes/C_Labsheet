// Write a program to display the reverse of a number using recursion.

#include<stdio.h>
#include<conio.h>

void reverse(int num) {
    if (num < 10) {
        printf("%d", num);
        return;
    }
    printf("%d", num % 10);
    reverse(num / 10);
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of the number: ");
    reverse(num);
   //getch()
}
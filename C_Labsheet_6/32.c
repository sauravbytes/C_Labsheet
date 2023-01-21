// WAP that calls a function whose name is mul(). This function takes one argument(x) and prints the
// multiplication table of that no.

#include<stdio.h>
// #include<conio.h>

void mul(int x) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", x, i, x * i);
    }
}

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    mul(num);
   //getch()
}
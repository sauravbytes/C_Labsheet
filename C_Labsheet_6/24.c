// 24. Write a program to display the term of Fibonacci series using recursive function.

#include<stdio.h>
#include<conio.h>

int fibonacci(int n)
{
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

void main()
{
   int n,i;
   printf("Enter a number to find out fibonacci series: ");
   scanf("%d",&n);

   printf("fibonacci series: ");
   for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
   //getch()
}
// Write function which accepts two integers as arguments and displays sum of those numbers.
#include<stdio.h>
// #include<conio.h>

int sum(int a, int b)
{
    return a + b;
}

void main()
{
    int a,b,result;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    result = sum(a,b);
    printf("The sum is %d\n",result);
    //getch();
}
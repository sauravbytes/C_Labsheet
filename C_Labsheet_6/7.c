// Write a program to input a number and calculate its factorial using function.
#include<stdio.h>
//#include<conio.h>

void fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact *= i;
    }
    printf("Factorial is %d.\n",fact);
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fact(n);
    //getch();
}
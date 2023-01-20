// Write a program to input a number and check if it is even or odd using function.
#include<stdio.h>
//#include<conio.h>

void eve_odd(int n)
{
    if(n%2 == 0)
    {
        printf("Even.\n");
    }
    else
        printf("Odd.\n");
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    eve_odd(n);
    //getch();
}
// Write a program to input a number and calculate its square using function.
#include<stdio.h>
// #include<conio.h>

void square(int a)
{
    printf("square: %d\n",a*a);
}
void main()
{
    int n;
    printf("Enter a number to find it's square: ");
    scanf("%d",&n);
    square(n);
    //getch();
}
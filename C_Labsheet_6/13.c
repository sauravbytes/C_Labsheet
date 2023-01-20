// Write a program to input a number and display its reverse using function.
#include<stdio.h>
//#include<conio.h>

void rev(int n)
{
    int reverse = 0,m=0;
    while (n>0)
    {
        m = n%10;
        reverse = reverse * 10 + m;
        n /= 10;
    }
    printf("Reverse: %d.\n",reverse);
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    rev(n);
    //getch();
}
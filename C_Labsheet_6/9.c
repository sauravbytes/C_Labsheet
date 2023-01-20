// Create a function void check (int n) that checks whether given number in positive, negative or neutral.
#include<stdio.h>
//#include<conio.h>

void check(int n)
{
    if(n<0)
        printf("The number is negative.\n");
    else if(n>0)
        printf("The number is positive.\n");
    else
        printf("The number is neutral.\n");
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    check(n);
    //getch();
}
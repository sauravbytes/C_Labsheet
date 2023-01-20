// Write function which accepts one integer as argument and returns factorial number one less than that
// argument.
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
    fact(n-1);
    //getch();
}
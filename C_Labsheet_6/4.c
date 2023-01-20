// Write a program using user-defined function to calculate y raise to power x.
#include<stdio.h>
//#include<conio.h>

void power(int b, int p)
{
    int result = 0;
    while (p>1)
    {
        result = b*b;
        p--;
    }
    printf("Result: %d\n",result);
    
}
void main()
{
    int b,p;
    printf("Enter the base value and then the power value:\n");
    scanf("%d %d",&b,&p);
    power(b,p);
    //getch();
}
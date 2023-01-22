// Write a program using user-defined function to calculate y raise to power x.
#include<stdio.h>
//#include<conio.h>

void power(int b, int p)
{
    int result = b;
    while(p>1)
    {
        result=result*b;
        p--;
    }
    printf("Result: %d\n",result);
    
}
void main()
{
    int x,y;
    printf("Enter the base value X and then the power value Y:\n");
    scanf("%d %d",&x,&y);
    power(x,y);
    //getch();
}
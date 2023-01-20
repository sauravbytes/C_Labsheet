// Create a function int greater (int, int) that returning that greater number between them.
#include<stdio.h>
//#include<conio.h>
int greater(int a, int b)
{
    if(a>b)
        return a;
    else if (b>a)
        return b;
    else 
        return 0;
}
void main()
{
    int a,b,result;
    printf("Enter two numbers to check the greatest among them: \n");
    scanf("%d %d",&a,&b);
    result = greater(a,b);

    if(result == 0)
        printf("Both the numbers are equal.\n");
    else
        printf("%d is greater.\n",result);
    //getch();
}
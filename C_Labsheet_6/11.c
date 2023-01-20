// Write function which accepts two integers as argument and returns average of even numbers between
// them.
#include<stdio.h>
//#include<conio.h>

int avg(int a, int b)
{
    int i,c=0;
    float sum=0;
    for(i=a;i<=b;i++)
    {
        if(i%2 == 0)
        {
            sum += i;
            c++;
        }
    }
    return sum/c;
}
void main()
{
    int a,b;
    float result = 0;
    printf("Enter the integers: \n");
    scanf("%d %d",&a,&b);
    result = avg(a,b);
    printf("Average is %.2f.\n",result);
    //getch();
}
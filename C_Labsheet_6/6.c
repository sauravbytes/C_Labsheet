// Write a program that calls a function called getArea(). This function is responsible for 
//reading the length & breadth & print area of rectangle.

#include<stdio.h>
//#include<conio.h>

void getArea(int l, int b)
{
    printf("Area of rectangle is %d\n",l*b);
}
void main()
{
    int l,b;
    printf("Enter the length and breadth of the rectangle: \n");
    scanf("%d %d",&l,&b);
    getArea(l,b);
    //getch();
}
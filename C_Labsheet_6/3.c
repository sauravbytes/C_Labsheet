// Write a program to input radius of a circle and calculate its area and circumference using function.
#include<stdio.h>
//#include<conio.h>
float PI = 3.14;

void circle(int r)
{
    printf("The area of circle is %.2f\n",PI * r * r);
    printf("The circumference of circle is %.2f\n",2*PI*r);
}
void main()
{
    int r;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    circle(r);
    //getch();
}
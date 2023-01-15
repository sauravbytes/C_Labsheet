//Write a program to input age of several persons and determine the age of oldest 
//and the youngest person.

#include <stdio.h>

void main()
{
    int arr[10],i,max,min;
    //clrscr();

    //taking 10 number as input
    printf("Enter age of ten persons: ");
    for(i=0;i<10;i++)
    {
	scanf("%d",&arr[i]);
    }

    //checking minimum and maximum values
    min=arr[0];
    max=arr[0];
    for(i=0;i<10;i++)
    {
	min=(arr[i]<min)?arr[i]:min;
	max=(arr[i]>max)?arr[i]:max;
    }
    printf("Youngest person age is: %d\nOldest Person age is %d",min,max);
    getch();
}

//Write a program to input 10 integers in an array and find the maximum and minimum values.

#include <stdio.h>
#include<conio.h>

void main()
{
    int arr[10],i,max,min;
    
    //taking 10 number as input
    printf("Enter ten number in array: ");
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
    printf("Minimum value in array is: %d\nMaximum value is %d",min,max);
    
}

//Write a program to input 10 numbers in an array and display the sum.

#include <stdio.h>
#include <conio.h>

void main()
{ 
    int arr[10], i, sum=0;
    //int i,sum=0;
    
    //taking 10 numbers input
    
    printf("Enter ten numbers in array: ");
    for(i=0;i<10;i++)
     scanf("%d",&arr[i]);
     
    //calculating sum
    for(i=0;i<10;i++)
    {
     sum=sum+arr[i];
    }
    //displaying result
    
    printf("Sum of all the number in array is: %d",sum);
     
    getch();
}

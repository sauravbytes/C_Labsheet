//Write a program to input a number and calculate its factorial using recursive function.
#include<stdio.h>

int find_factorial(int n)
{
   if(n==0)
      return(1);
 
   return(n*find_factorial(n-1));
}
void main()
{
   int num, fact;
   printf("Enter any integer number:");
   scanf("%d",&num);

   fact =find_factorial(num);
 
   printf("factorial of %d is: %d\n",num, fact);
   //getch
}
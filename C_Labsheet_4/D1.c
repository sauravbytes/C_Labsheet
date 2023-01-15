/*WAP to enter values in array called myarray of size 15 and display the elements of array. WAP to sum and
average of all the elements of array.*/

#include<stdio.h>
void main()
{
 int myarray[15],i,sum=0;
 clrscr();

 printf("Enter Elements in array\n");

 //taking input into array
 for(i=0;i<15;i++)
  scanf("%d",&myarray[i]);

 //displaying elements of array
 for(i=0;i<15;i++)
  printf("%d\t",myarray[i]);

 //sum of all the elements in array
 for(i=0;i<15;i++)
  sum=sum+myarray[i];
 printf("\nSum is:%d\n",sum);

 //average
 printf("Average is: %d",sum/i);

 getch();
}
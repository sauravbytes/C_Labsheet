/*WAP to take integers in array of size 3x3 and display
sum of all elements of the array*/

#include<stdio.h>
void main()
{
 int arr[3][3],i,j,sum=0;
 clrscr();

 //input
 printf("Enter 9 number of 3x3 array\n");
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   scanf("%d",&arr[i][j]);

 //sum
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   sum=sum+arr[i][j];

 //printing sum
 printf("\nSum of all the elements of array is:%d",sum);
 getch();
}
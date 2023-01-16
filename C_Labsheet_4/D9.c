 /*WAP to input salary of N number of employees and count the number
of employees receiving salary above 20,000*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
 int* arr,n,i,count=0;


 //input number of employees
 printf("Enter number of employees: ");
 scanf("%d",&n);

 //dynamically allocating memory
 arr= (int*)malloc(n *sizeof(int));

 //input salary
 printf("\nEnter salary of %d employees\n",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }

 //salary above 20,000
 for(i=0;i<n;i++)
 {
  if(arr[i]>20000)
   count++;
 }
 printf("\n%d employee has salary more than 20,000",count);
 //getch();
}
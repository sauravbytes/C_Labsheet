/*
WAP to add two arrays and put it in third array
*/

#include<stdio.h>
void main()
{
 int a[2],b[2],c[2],i;
 clrscr();

 //taking input in first array
 printf("Enter Elements in first array\n");
 for(i=0;i<2;i++)
  scanf("%d",&a[i]);

 //taking input in second array
 printf("Enter Elements in second array\n");
 for(i=0;i<2;i++)
  scanf("%d",&b[i]);

 //adding first and second array and storing result in third array

 for(i=0;i<2;i++)
  c[i]=a[i]+b[i];

 //showing result
 printf("Result stored in third array are\n");
 for(i=0;i<2;i++)
  printf("%d\t",c[i]);

 getch();
}
//WAP to separate odd and even elements of array
#include<stdio.h>
void main()
{
 int a[5],i;
 clrscr();

 printf("Enter elements in array\n");
 for(i=0;i<5;i++)
  scanf("%d",&a[i]);

 //separating even numbers
 printf("Even numbers are\n");

 for(i=0;i<5;i++)
 {
  if(a[i]%2==0)
   printf("%d\t",a[i]);
 }
 //separating odd numbers
 printf("\nOdd numbers are\n");

 for(i=0;i<5;i++)
 {
  if(a[i]%2!=0)
   printf("%d\t",a[i]);

 }
 getch();
}
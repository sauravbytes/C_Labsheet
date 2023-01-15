/*Write a program to input age of 100 persons and count
the number of persons with age from 16 to 20.*/
#include<stdio.h>
void main()
{
 int arr[100],i,count=0;
 clrscr();

 //age of 100 persons
 printf("Enter age of 100 persons\n");
 for(i=0;i<5;i++)
  scanf("%d",&arr[i]);

 //finding person from age 16 to 20
 for(i=0;i<5;i++)
 {
  if(arr[i]>=16 && arr[i]<=20)
   count++;
 }
 printf("\nThere are %d persons with age from 16 to 20",count);
 getch();
}
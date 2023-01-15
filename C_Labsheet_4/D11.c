/*WAP to input 10 integers in an array and sort
them in ascending order*/
#include<stdio.h>
void main()
{
 int arr[10],i,j,t;
 clrscr();

 //asking input
 printf("Enter 10 numbers\n");
 for(i=0;i<10;i++)
  scanf("%d",&arr[i]);

 //sort
 for(i=0;i<10;i++)
 {
  for(j=i+1;j<10;j++)
  {
   if(arr[i]>arr[j])
   {
    t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
   }
  }
 }

 //print

 for(i=0;i<10;i++)
  printf("%d\n",arr[i]);

 getch();
}
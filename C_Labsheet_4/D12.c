/*WAP to input several numbers in an array and arrange them in
descending order*/

#include<stdio.h>
void main()
{
 int arr[10],i,j,t;
 //clrscr();

 //input numbers
 printf("Enter numbers in an array\n");
 for(i=0;i<10;i++)
  scanf("%d",&arr[i]);

 //sorting
 for(i=0;i<10;i++)
  for(j=i+1;j<10;j++)
   if(arr[i]<arr[j])
   {
    t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
   }

 //printing result
 printf("Numbres in descending order are\n");
 for(i=0;i<10;i++)
  printf("%d\t",arr[i]);
 getch();


}
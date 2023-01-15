/*WAP to input a matrix of size 4x4 and calculate the sum of its
diagonal elements*/
#include<stdio.h>
void main()
{
 int arr[4][4],i,j,l_sum=0,r_sum=0;
 clrscr();

 //input
 for(i=0;i<4;i++)
  for(j=0;j<4;j++)
   scanf("%d",&arr[i][j]);

 //sum of element of left diagonal
 for(i=0;i<4;i++)
  for(j=i;j<=i;j++)
   l_sum=l_sum+arr[i][j];

 //sum of element of right diagonal
 for(i=0;i<4;i++)
  for(j=0;j<4;j++)
   if((i+j)==3)
   {
    r_sum=r_sum+arr[i][j];
   }
 //printing sum

 printf("\nSum of diagonal is %d",l_sum+r_sum);
 getch();

}
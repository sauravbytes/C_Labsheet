/*WAP to take integers arranged in a table containing 3 rows and 4
columns. Calculate the sum of even numbers among them*/
#include<stdio.h>
void main()
{
 int arr[3][4],i,j,sum=0;
 //clrscr();

 //input
 
 for(i=0;i<3;i++)
  for(j=0;j<4;j++)
  {
    printf("Enter element for a%d%d: ",i+1,j+1);
    scanf("%d",&arr[i][j]);
  }

 //sum of even numbers
 for(i=0;i<3;i++)
  for(j=0;j<4;j++)
  {
   if(arr[i][j]%2==0)
    sum=sum+arr[i][j];
  }
 //printing sum of even numbers
 printf("Sum of even numbers is : %d",sum);
 //getch();

}
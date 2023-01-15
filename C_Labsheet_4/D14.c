/*WAP to input a matrix of size 2x2 and display it in proper format.
The program should also display the transpose of the matrix.*/
#include<stdio.h>
void main()
{
 int arr[2][2],i,j,trans[2][2];
 clrscr();

 //input
 printf("Enter 4 elements for 2x2 array\n");
 for(i=0;i<2;i++)
  for(j=0;j<2;j++)
   scanf("%d",&arr[i][j]);

 //print
 printf("Displaying elements of 2x2 array\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   printf("%d ",arr[i][j]);
  printf("\n");
 }

 //transpose
 printf("Transpose of 2x2 matrix is\n");
 for(i=0;i<2;i++)
  for(j=0;j<2;j++)
   trans[j][i]=arr[i][j];

 //printing transpose
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   printf("%d ",trans[i][j]);
  printf("\n");
 }
 getch();
}
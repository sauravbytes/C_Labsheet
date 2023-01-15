/*Write a program to input a matrix of size r1×c1 and another matrix of size r2×c2. Display the result of matrix
multiplication.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int a[10][10],b[10][10], mul[10][10];;
   int r1,c1,r2,c2,i,j,k;
   //rows and column for matrix A
   printf("Enter the number of rows and columns for Matrix: A\n"); 
   scanf("%d %d",&r1,&c1);

   //rows and column for matrix B
   printf("Enter the number of rows and columns for Matrix: B\n"); 
   scanf("%d %d",&r2,&c2); 

   //input elements in matrix A
    printf("Enter elements in matrix A\n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);

    //input elements in matrix B
    printf("Enter elements in matrix B\n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);

    //checking if c1 and r2 matches or not
    if (c1 != r2) {
        printf("The matrices cannot be multiplied together");
        exit(1);
    }
    
    //multiplication
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c1;k++)
            {
                mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }

        }
    //displaying result
    printf("The multiplied matrix is: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d\t",mul[i][j]);
        printf("\n");
    }
   //getch()
}
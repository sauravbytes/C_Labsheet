/*Write a program to input elements of two matrices (one of size 2×3 and 
another of size 3×2). Perform the matrix multiplication.*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int a[2][3],b[3][2], mul[2][2];
   int i,j,k;

   //input elements in matrix A
    printf("Enter elements in matrix A\n");
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    //input elements in matrix B
    printf("Enter elements in matrix B\n");
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);
    
    //multiplication
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            mul[i][j]=0;
            for(k=0;k<3;k++)
            {
                mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }

        }
    //displaying result
    printf("The multiplied matrix is: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\t",mul[i][j]);
        printf("\n");
    }
   //getch()
}
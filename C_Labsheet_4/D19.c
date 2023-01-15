//Write a program to check if two matrices are equal or not.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int a[10][10],b[10][10],i,j;
    int r1,c1,r2,c2,flag=1;
    
    //size of matrix A
    printf("Enter the order of Matrix A\n");
    scanf("%d %d",&r1,&c1);

    //size of matrix B
    printf("Enter the order of Matrix B\n");
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

    //displaying matrix A
    printf("\nMATRIX A is \n");       
    for (i=0;i<r1;i++)
    {
        for (j=0;j<c1;j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
 
    //displaying matrix B
    printf("\nMATRIX B is \n");       
    for (i=0;i<r2;i++)
    {
        for (j=0;j<c2;j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }

    //Comparing two matrices
    if(r1==r2 && c1==c2)
    {
        printf("Matrices can be compared\n");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                if(a[i][j]!=b[i][j])
                {
                    flag=0;
                    break;
                }
    }
    else
    {
        printf("Matrices Cannot be compared");
        exit;
    }

    if(flag==1)
        printf("Matrices are equal\n");

    else
        printf("But, elements of matrices are not equal");

        
   //getch()
}
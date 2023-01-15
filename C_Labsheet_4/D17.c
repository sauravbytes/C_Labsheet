//Write a program to find the sum of two matrices of order 2×2.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][2],b[2][2],i,j,c[2][2];
    //clrscr();
    
    //Input in first array
    printf("Enter 4 numbers in first array\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    
    //Input in second array
    printf("Enter 4 numbers in second array\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);
    
    //adding both array
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            c[i][j]=a[i][j]+b[i][j];
    
    //result
    printf("Sum of both array is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%d ",c[i][j]);
            
        printf("\n");        
    }
   //getch();
}
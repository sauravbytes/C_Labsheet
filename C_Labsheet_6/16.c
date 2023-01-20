// Write a program to input 10 numbers in an array and arrange them in ascending order using function.

#include<stdio.h>
//#include<conio.h>

void ascending(int nums[])
{
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
}
void main()
{
    int i;
    int nums[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&nums[i]);
    }
    ascending(nums);
    printf("sorted numbers: \n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",nums[i]);
    }
    //getch();
}
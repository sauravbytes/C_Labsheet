// Write a program to input several numbers in an array and find out the largest and the smallest number
// among them using function.

#include<stdio.h>
//#include<conio.h>

void large_small(int nums[])
{
    int i,j,largest = nums[0], smallest = nums[0];
    for(i=0;i<8;i++)
    {
        if(nums[i] > largest)
        {
            largest = nums[i];
        }
        if(nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }
    printf("largest: %d.\n",largest);
    printf("smallest: %d.\n",smallest);
}

void main()
{
    int nums[8],i;
    printf("Enter the elements in array: ");
    for(i=0;i<8;i++)
        scanf("%d",&nums[i]);
    
    large_small(nums);
    //getch();
}
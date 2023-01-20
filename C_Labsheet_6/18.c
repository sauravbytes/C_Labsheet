// Write a program to input age of 25 persons and count the number of persons with age more than 50 using
// function.

#include<stdio.h>
//#include<conio.h>

void age(int ages[])
{
    int i,c=0;
    for(i=0;i<25;i++)
    {
        if (ages[i] > 50)
        {
            c++;
        }
    }
    printf("The number of people with age more than 50 is %d.\n",c);
}

void main()
{
    int ages[25],i;
    printf("Enter the ages of people: \n");
    for(i=0;i<25;i++)
        scanf("%d",&ages[i]);
    
    age(ages);
    //getch();
}
// Write a program to read any two integers number n1 and n2 and develop a function that takes these two
// numbers as arguments and print all the even integer numbers from n1 and n2.

#include<stdio.h>
//#include<conio.h>

void even(int n1,int n2)
{
    int a = n1, b = n2;
    while(a>b){
        if(a%2 == 0)
        {
            printf("%d",a);
            a++;
        }
    }
}
void main()
{
    int n1, n2;
    printf("Enter the value of n1 and n2: \n");
    scanf("%d %d",&n1,&n2);
    even(n1,n2);
    //getch();
}
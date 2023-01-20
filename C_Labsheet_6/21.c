// Write a program a line of text “Best of Luck” 5 times using a function.

#include<stdio.h>
//#include<conio.h>

void print()
{ 
    int i=0;
    while(i<5)
    {
        printf("Best of Luck!\n");
        i++;
    }
}
void main()
{
    print();
    //getch();
}
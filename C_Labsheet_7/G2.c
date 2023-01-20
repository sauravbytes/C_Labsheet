/*Create a structure named Employee with data members name, address and salary. 
Take the data of 5 employees and display the name of the employee whose salary>10,000.*/

#include<stdio.h>

struct Employee
{
    char name[100], address[100];
    int salary;
}e[5];

void main()
{
    int i;
    //clrscr();

    printf("Enter name, address and salary of five employee\n");
    for(i=0;i<5;i++)
        scanf("%s %s %d",e[i].name,e[i].address,&e[i].salary);

    printf("Name of five employees whose salary is greater than 20,000 are\n");
    for(i=0;i<5;i++)
        if(e[i].salary>10000)
        {
            printf(e[i].name);
            printf("\n");
        }
   //getch()
}
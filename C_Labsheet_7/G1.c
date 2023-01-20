/*Write program to perform following: Define structure named employee with name and age as 
member variables, make array of size five of employee structure, take values of name and age 
for all the five employees. Display average age of those five employees.*/

#include<stdio.h>

struct Employee
{
    char name[100];
    int age;
}e[5];

void main()
{
    int i,t_age=0,avg=0;
    //clrscr();

    printf("Enter name and age of five employee\n");
    for(i=0;i<5;i++)
    {
        scanf("%s %d",e[i].name,&e[i].age);
        t_age=t_age+e[i].age;
    }
    printf("Average of five employees is : %d",t_age/5);

   
   //getch()
}
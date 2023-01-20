/*Write a program to create a structure named Employee having members emp_id, emp_name, 
emp_post, and emp_salary. Read the data of an employee and display it on screen.*/

#include<stdio.h>

struct Employee
{
    char emp_name[100], emp_post[100];
    int emp_id,emp_salary;
};

int main() 
{
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee emp[n];
    for (i = 0; i < n; i++) 
    {
        printf("\nEnter details of employee %d\n", i+1);
        printf("ID: ");
        scanf("%d", &emp[i].emp_id);
        printf("Name: ");
        scanf("%s", emp[i].emp_name);
        printf("Post: ");
        scanf("%s", emp[i].emp_post);
        printf("Salary: ");
        scanf("%d", &emp[i].emp_salary);
    }
    printf("\nEmployee Details:\n");
    for (i = 0; i < n; i++) 
    {
        printf("\nEmployee %d\n", i+1);
        printf("ID: %d\n", emp[i].emp_id);
        printf("Name: %s\n", emp[i].emp_name);
        printf("Post: %s\n", emp[i].emp_post);
        printf("Salary: %d\n", emp[i].emp_salary);
    }
    //getch
}
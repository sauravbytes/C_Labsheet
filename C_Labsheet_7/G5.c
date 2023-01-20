/*Modify question number 3 and display the information of Employees having salary 
greater than 15000.*/

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
    printf("\nDetails of having salary greater than 15000 are\n");
    for (i = 0; i < n; i++) 
    {
        if(emp[i].emp_salary>15000)
        {        
            printf("\nEmployee %d\n", i+1);
            printf("ID: %d\n", emp[i].emp_id);
            printf("Name: %s\n", emp[i].emp_name);
            printf("Post: %s\n", emp[i].emp_post);
            printf("Salary: %d\n", emp[i].emp_salary);
        }

    }
    //getch
}
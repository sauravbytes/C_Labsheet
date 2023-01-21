/*WAP to read record of 5 employee & print the record of person which have highest & lowest
salary.(Include:name,salary,address)*/

#include <stdio.h>
#include <string.h>

struct Employee {
    char name[20];
    float salary;
    char address[30];
}emp[5];

void main()
{
    int i,min,max;
    //clrscr

    printf("Enter Details of five Employees\n");
    for(i=0;i<5;i++)
    {
        printf("Enter details of employee %d\n",i+1);

        printf("Enter Name: ");
        scanf("%s",emp[i].name);

        printf("Enter Salary: ");
        scanf("%f",&emp[i].salary);

        printf("Enter Address: ");
        scanf("%s",emp[i].address);

    }
    min=emp[0].salary;
    max=emp[0].salary;
    for(i=0;i<5;i++)
    {
        min=(emp[i].salary<min)?emp[i].salary:min;
        max=(emp[i].salary>max)?emp[i].salary:max;
    }
    printf("\nDetails of Employee having minimum salary\n");
    printf("Name\tsalary\tAddress\n");
    for(i=0;i<5;i++)
    {
        if(min==emp[i].salary)
        {
            
            printf("%s\t%.2f\t%s\t\n",emp[i].name,emp[i].salary,emp[i].address);
        }
    }

    printf("\nDetails of Employee having maximum salary\n");
    printf("Name\tsalary\tAddress\n");
    for(i=0;i<5;i++)
    {
        if(max==emp[i].salary)
        {
            printf("%s\t%.2f\t%s\t\n",emp[i].name,emp[i].salary,emp[i].address);
        }
    }
}
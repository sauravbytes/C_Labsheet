// Write a program to demonstrate the example of nested structure.

#include<stdio.h>
#include<conio.h>

struct Address
{
    char city[50];
    char district[50];
};

struct Student
{
    char name[50];
    int age;
    struct Address address;
};

void main()
{
    struct Student student1;
    printf("Enter student name: ");
    scanf("%s", student1.name);
    printf("Enter student age: ");
    scanf("%d", &student1.age);
    printf("Enter the name of student city: ");
    scanf("%s", student1.address.city);
    printf("Enter the name of student district: ");
    scanf("%s", student1.address.district);

    printf("Employees details.\n");
    printf("Name: %s.\n",student1.name);
    printf("Age: %d.\n",student1.age);
    printf("Address: %s, %s.",student1.address.city,student1.address.district);

   //getch()
}
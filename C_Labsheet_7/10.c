// Write program to demonstrate the example of passing structure to a function.

#include<stdio.h>
#include<conio.h>

struct Student
{
    char name[50];
    int age;
}s1;

void print(struct Student student)
{
    printf("The name of student is %s and his/her age is %d.",student.name,student.age);
}

void main()
{
   printf("Enter the name of student: ");
   scanf("%s",s1.name);
   printf("Enter the age of student: ");
   scanf("%d",&s1.age);
   print(s1);
   //getch()
}
/*Write a C program using structure that reads the records of 35 students with members roll, 
name, address, and marks. Display the record of students who have obtained greater than 
250 marks using pointer.*/

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    char address[100];
    int marks;
};

void main() {
    int i, n = 3;
    struct Student s[n], *ptr;
    //clrscr()

    ptr = &s[0];
    for (i = 0; i < n; i++) {
        printf("Enter details of student %d\n", i+1);
        printf("Roll: ");
        scanf("%d", &ptr->roll);
        printf("Name: ");
        scanf("%s", ptr->name);
        printf("Address: ");
        scanf("%s", ptr->address);
        printf("Marks: ");
        scanf("%d", &ptr->marks);
        ptr++;
    }
    ptr = &s[0];
    printf("\nRecords of students who have obtained greater than 250 marks:\n");
    for (i = 0; i < n; i++) {
        if (ptr->marks > 250) {
            printf("\nStudent %d\n", i+1);
            printf("Roll: %d\n", ptr->roll);
            printf("Name: %s\n", ptr->name);
            printf("Address: %s\n", ptr->address);
            printf("Marks: %d\n", ptr->marks);
        }
        ptr++;
    }
    //getch
}
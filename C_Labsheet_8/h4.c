/*Write program that stores information of students in a file. In this file new records of students can be
added without affecting existing records of students. Students have name, age and address as attributes.*/

#include <stdio.h>
#include <string.h>

struct student{
    char name[100];
    int age;
    char address[100];
}s;

void main() {
    FILE *fp;
    char choice;

    fp = fopen("students.txt", "a"); 

    do {
        printf("Enter name, age, and address of the student:\n");
        scanf("%s %d %s", s.name, &s.age, s.address);

        fprintf(fp, "%s %d %s", s.name,s.age,s.address ); 

        printf("Do you want to add another student? (y/n)\n");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    fclose(fp); 

    
}

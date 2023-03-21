/*A data file “student.txt” contains name, age, address, cell number of some students. Write a program to
list all students whose address is “Pokhara”.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    char address[100];
    char cell_number[11];  // assuming 10-digit cell numbers
};

void main() 
{
    // Open "student.txt" file for reading
    FILE *student_file = fopen("student.txt", "r");
    if (student_file == NULL) {
        printf("Error: Could not open file \"student.txt\"\n");
    }
    
    // Read student records from file and list those with address "Pokhara"
    struct student student;
    while (fscanf(student_file, "%s %d %s %s", student.name, &student.age, student.address, student.cell_number) == 4) {
        if (strcmp(student.address, "Pokhara") == 0) {
            printf("Name: %s\n", student.name);
            printf("Age: %d\n", student.age);
            printf("Address: %s\n", student.address);
            printf("Cell number: %s\n", student.cell_number);
            printf("\n");
        }
    }
    fclose(student_file);
    
}

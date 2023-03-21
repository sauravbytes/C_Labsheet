/*Write a C program to input name, address and rollno of 30 students and store them in a data file.*/

#include <stdio.h>

struct student {
    char name[50];
    char address[100];
    int roll_no;
};

void main() {
    struct student students[30];
    int i;
    FILE *fp;

    // Input data for 30 students
    for (i = 0; i < 30; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, 50, stdin);
        printf("Enter address of student %d: ", i + 1);
        fgets(students[i].address, 100, stdin);
        printf("Enter roll no of student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        getchar();  // consume newline character after scanf
    }

    // Open data file for appending
    fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error: Could not open file \"data.txt\"\n");
    }

    // Write student data to file
    for (i = 0; i < 30; i++) {
        fprintf(fp, "%s\n%s\n%d\n", students[i].name, students[i].address, students[i].roll_no);
    }
    fclose(fp);

    printf("Student data written to file \"data.txt\"\n");

    
}

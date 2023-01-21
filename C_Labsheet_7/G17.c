//5.WAP to pass structure to function using pointer.

#include <stdio.h>
#include<string.h>

struct Student {
    int id;
    char name[20];
    float score;
};

void printStudent(struct Student *s) {
    printf("Student ID: %d\n", s->id);
    printf("Student Name: %s\n", s->name);
    printf("Student Score: %f\n", s->score);
}

int main() {
    struct Student s1;
    //clrscr

    s1.id = 1;
    strcpy(s1.name, "John Smith");
    s1.score = 89.5;

    printStudent(&s1);

    //getch
}

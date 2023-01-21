//3.WAP to use pointer as a member of structure.

#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

void main() {
    struct Node n1, n2, n3;
    //clrscr

    n1.data = 1;
    n1.next = &n2;

    n2.data = 2;
    n2.next = &n3;

    n3.data = 3;
    n3.next = NULL;

    struct Node *ptr = &n1;

    while (ptr != NULL) {
        printf("Data: %d\n", ptr->data);
        ptr = ptr->next;
    }

    //getch
}

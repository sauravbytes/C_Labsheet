/*Write a program that reads two string and perform following operation according to the 
choice inputted by the user.
a. Display larger of those two.
b. Display both string in reverse.*/

#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100], str2[100];
    int choice;
    //clrscr

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Select an operation:\n1. Display larger string\n2. Display both strings in reverse\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            if(strcmp(str1, str2) > 0)
                printf("Larger string is: %s\n", str1);
            else
                printf("Larger string is: %s\n", str2);
            break;
        case 2:
            puts(strrev(str1));
            puts(strrev(str2));
            break;
        default:
            printf("Invalid choice.\n");
    }

    //getch
}

/* Write a program that reads character and perform following operation 
according to the choice inputted by the user. 
Displays “it is vowel” if entered character is vowel otherwise “it is consonants”.
Displays “it is digit” if entered character is member of digit, otherwise display 
the ASCII value of entered character.*/

#include <stdio.h>

void main() {
    char ch;
    int choice;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Enter your choice:\n1. Check if the character is a vowel or consonant\n2. Check if the character is a digit\n");
    scanf("%d", &choice);

    if (choice == 1) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("The character '%c' is a vowel.\n", ch);
        } else {
            printf("The character '%c' is a consonant.\n", ch);
        }
    } else if (choice == 2) {
        if (ch >= '0' && ch <= '9') {
            printf("The character '%c' is a digit.\n", ch);
        } else {
            printf("The ASCII value of the character '%c' is %d.\n", ch, ch);
        }
    } else {
        printf("Invalid choice\n");
    }
    //getch
}

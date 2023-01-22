// Write a function that converts uppercase string to lowercase string.
 
#include <stdio.h>
#include <string.h>

// Function to convert uppercase string to lowercase
void toLowerCase(char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + ('a' - 'A');
        }
    }
}

void main() {
    char s[] = "HELLO WORLD!";
    printf("Original String: %s\n", s);

    // Convert the string to lowercase
    toLowerCase(s);
    printf("Lowercase String: %s\n", s);

    //getch
}

/*WAP to read a line of text & print each character, 
print in reverse case (use toupper() & tolower(),)*/

#include <stdio.h>
#include <string.h>

void main() {
    char str[100];

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    printf("Original text: %s", str);
    printf("Text in reverse case: ");

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - ('a' - 'A'));
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + ('a' - 'A'));
        } else {
            printf("%c", str[i]);
        }
    }

    //getch
}

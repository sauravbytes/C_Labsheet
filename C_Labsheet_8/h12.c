/*Write a C program to store the text “I love Nepal” in the file and display it by reading from the file.*/

#include <stdio.h>

void main() {
    FILE *fp;
    char text[] = "I love Nepal";
    char c;

    // Write text to file
    fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open file \"file.txt\"\n");
        
    }
    fputs(text, fp);
    fclose(fp);

    // Read text from file and display it
    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file \"file.txt\"\n");
        
    }
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }
    fclose(fp);

}

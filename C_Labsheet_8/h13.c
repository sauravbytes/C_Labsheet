/*Write a C program to write some text “Welcome to BCA program” in a file test.txt.*/


#include <stdio.h>

void main() {
    FILE *fp;
    char text[] = "Welcome to BCA program";
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

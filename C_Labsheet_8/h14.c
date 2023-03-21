/*Write a C program to create a file named “myfile.dat”. Store your name in the file. Rename the file to
“myfile1.dat”.*/

#include <stdio.h>

void main() {
    FILE *fp;
    char name[] = "saurav";
    int result;

    // Create file and store name
    fp = fopen("myfile.dat", "w");
    if (fp == NULL) {
        printf("Error: Could not create file \"myfile.dat\"\n");
        
    }
    fputs(name, fp);
    fclose(fp);

    // Rename file
    result = rename("myfile.dat", "myfile1.dat");
    if (result != 0) {
        printf("Error: Could not rename file\n");
        
    }

    
}

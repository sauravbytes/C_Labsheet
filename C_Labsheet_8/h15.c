/*Write a C program to delete/remove a file.*/

#include <stdio.h>

void main() {
    int result;

    // Delete file
    result = remove("test.txt");
    if (result != 0) {
        printf("Error: Could not delete file\n");
        
    }

    printf("File deleted successfully\n");

    
}

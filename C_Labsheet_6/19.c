// Write a function to copy content of one array to another array. 
//You can consider any type of arrays.

#include <stdio.h>

// Function to copy the contents of one array to another
void copyArray(int destination[], int source[], int size) {
    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
}

void main() {
    int source[] = {1, 2, 3, 4, 5};
    //clrscr
    
    int destination[5]; // Destination array needs to be of the same size as the source array

    // Copy the contents of the source array to the destination array
    copyArray(destination, source, 5);

    // Print the contents of the destination array
    for (int i = 0; i < 5; i++) {
        printf("%d ", destination[i]);
    }

    //getch
}

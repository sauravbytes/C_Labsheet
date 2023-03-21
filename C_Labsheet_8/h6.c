/*Write a program to take 10 integers as input and perform following:
• Display sum of all integer taken.
• Write odd numbers from those 10 integers to file “odd.txt”.
• Write even numbers from those 10 integers to file “even.txt”.
• Read “even.txt” and “odd.txt” files and display in monitor.*/

#include <stdio.h>

void main() {
    int nums[10];
    int sum = 0;
    FILE *even_file, *odd_file;
    
    // Take input from user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }
    
    // Open files for writing
    even_file = fopen("even.txt", "w");
    odd_file = fopen("odd.txt", "w");
    
    // Write even and odd numbers to respective files
    for (int i = 0; i < 10; i++) {
        if (nums[i] % 2 == 0) {
            fprintf(even_file, "%d\n", nums[i]);
        } else {
            fprintf(odd_file, "%d\n", nums[i]);
        }
    }
    
    // Close files
    fclose(even_file);
    fclose(odd_file);
    
    // Display sum of all integers
    printf("Sum of all integers: %d\n", sum);
    
    // Display contents of even.txt
    printf("\nContents of even.txt:\n");
    even_file = fopen("even.txt", "r");
    int num;
    while (fscanf(even_file, "%d", &num) != EOF) {
        printf("%d\n", num);
    }
    fclose(even_file);
    
    // Display contents of odd.txt
    printf("\nContents of odd.txt:\n");
    odd_file = fopen("odd.txt", "r");
    while (fscanf(odd_file, "%d", &num) != EOF) {
        printf("%d\n", num);
    }
    fclose(odd_file);

}

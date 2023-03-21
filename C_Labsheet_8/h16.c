/*WAP to make menu-based program using file to append,read,delete data in file. Use switch for
append,read,delete,quit.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int choice, rollno, marks;
    
    while(1) {
        printf("\n***** MENU *****\n");
        printf("1. Append data to file\n");
        printf("2. Read data from file\n");
        printf("3. Delete data from file\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                fp = fopen("data.txt", "a");
                if(fp == NULL) {
                    printf("Error opening file!\n");
                    exit(1);
                }
                printf("Enter roll number and marks separated by space: ");
                scanf("%d %d", &rollno, &marks);
                fprintf(fp, "%d %d\n", rollno, marks);
                fclose(fp);
                printf("Data appended to file successfully!\n");
                break;
            
            case 2:
                fp = fopen("data.txt", "r");
                if(fp == NULL) {
                    printf("Error opening file!\n");
                    exit(1);
                }
                printf("Roll No.\tMarks\n");
                while(fscanf(fp, "%d %d", &rollno, &marks) != EOF) {
                    printf("%d\t\t%d\n", rollno, marks);
                }
                fclose(fp);
                break;
                
            case 3:
                fp = fopen("data.txt", "r");
                if(fp == NULL) {
                    printf("Error opening file!\n");
                    exit(1);
                }
                FILE *fp2;
                fp2 = fopen("temp.txt", "w");
                if(fp2 == NULL) {
                    printf("Error opening file!\n");
                    exit(1);
                }
                int rno;
                int m;
                printf("Enter roll number to delete: ");
                scanf("%d", &rno);
                int flag = 0;
                while(fscanf(fp, "%d %d", &rollno, &marks) != EOF) {
                    if(rollno != rno) {
                        fprintf(fp2, "%d %d\n", rollno, marks);
                    } else {
                        flag = 1;
                    }
                }
                fclose(fp);
                fclose(fp2);
                remove("data.txt");
                rename("temp.txt", "data.txt");
                if(flag == 0) {
                    printf("Data not found in file!\n");
                } else {
                    printf("Data deleted from file successfully!\n");
                }
                break;
                
            case 4:
                printf("Exiting program...\n");
                exit(0);
                
            default:
                printf("Invalid choice! Try again.\n");
                break;
        }
    }
    
    
}

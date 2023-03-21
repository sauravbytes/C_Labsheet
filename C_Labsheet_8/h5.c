/*Write a program to store records of N employees in a file named employee.dat. These records contain
name, identification number, office name and occupation of the employee. Now display name of those
employees whose office name is “Nepal Bank” and occupation is “Manager”.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employees{
    char name[100];
    int id;
    char office_name[100];
    char occupation[100];
}e;

void main() {
    FILE *fp;
    int num,i;

    fp = fopen("employee.dat", "a"); 
    printf("Enter number of employees: ");
    scanf("%d", &num);

    for(i=0;i<num;i++)
    {
        printf("Enter name, id, office name, and occupation of employee %d:\n", i+1);
        scanf("%s %d %s %s", e.name, &e.id, e.office_name, e.occupation);

        fprintf(fp, "%s %d %s %s",e.name, e.id, e.office_name, e.occupation); 
    }
    

    fclose(fp);

    fp = fopen("employee.dat","r");

    
   if ((fp = fopen("employee.dat","r")) == NULL)
   {
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   while (fread(&e, sizeof(struct employees), 1, fp)) {
        if (strcmp(e.office_name, "NepalBank") == 0 && strcmp(e.occupation, "Manager") == 0) {
            printf("Name: %s\n", e.name);
        }
    }


    fclose(fp); 

    
}

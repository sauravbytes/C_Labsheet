//Write a program to store value of two integer variables in a file named “Two_Rupees.txt”.

#include <stdio.h>

void main() {
   FILE *fp;
   int num1, num2;

   printf("Enter two integers:\n");
   scanf("%d %d", &num1, &num2);

   fp = fopen("Two_Rupees.txt", "w"); 

   fprintf(fp, "%d %d", num1, num2); 

   fclose(fp); 
}

/*Write program that writes only those words which starts with ‘a’ to the file named ‘a.txt’. The content of
the file ‘a.txt’ must not be erased with new entry.*/

#include <stdio.h>
#include <string.h>

void main() {
   FILE *fp;
   char word[100];

   fp = fopen("a.txt", "a"); // open file in append mode

   printf("Enter a word:\n");
   scanf("%s", word);

   if (word[0] == 'a' || word[0] == 'A') { // check if word starts with 'a' or 'A'
      fprintf(fp, "%s ", word); // write word to file
   }

   fclose(fp); // close the file

}

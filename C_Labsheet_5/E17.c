/*Write a program to sort following list of strings:
 [“jump”, “walk”, “red”, “green”, “talk”, “move”, “look”, “feel”]*/

#include <stdio.h>
#include <string.h>

void main()
{
    int n, i, j;
    char str[8][8]={"jump", "walk", "red", "green", "talk", "move", "look", "feel"}, temp[8];
    //clrscr

    for(i = 0; i < 7; i++)
        for(j = i+1; j < 8; j++)
            if(strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }

    printf("Sorted list of strings: \n");
    for(i = 0; i < 8; i++)
        printf("%s\n", str[i]);
}



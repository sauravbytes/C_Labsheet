//Write a program to read a list of strings and print them in ascending order.//

#include <stdio.h>
#include <string.h>

void main()
{
    int n, i, j;
    char str[100][100], temp[100];
    //clrscr

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings: \n");
    for(i = 0; i < n; i++)
        scanf("%s", str[i]);

    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if(strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }

    printf("Strings in ascending order: \n");
    for(i = 0; i < n; i++)
        printf("%s\n", str[i]);

    //getch
}



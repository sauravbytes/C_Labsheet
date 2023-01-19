/*Write a program to input line of text and then count the following:
1. Number of alphabets
2. Number of vowels.
3. Number of consonants.
4. Number of digits
5. Number of spaces
6. Number of special characters.
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int i, alphabets = 0, vowels = 0, consonants = 0, digits = 0, spaces = 0, special = 0;
    //clrscr
    
    printf("Enter a line of text\n");
    gets(str);

    for(i = 0; i < strlen(str); i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alphabets++;
            if(str[i] == 'a' || str[i] == 'e' 
                || str[i] == 'i' || str[i] == 'o' 
                || str[i] == 'u' || str[i] == 'A' 
                || str[i] == 'E' || str[i] == 'I' 
                || str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(str[i] == ' ')
        {
            spaces++;
        }
        else
        {
            special++;
        }
    }

    printf("Number of Alphabets: %d\n", alphabets);
    printf("Number of Vowels: %d\n", vowels);
    printf("Number of Consonants: %d\n", consonants);
    printf("Number of Digits: %d\n", digits);
    printf("Number of Spaces: %d\n", spaces);
    printf("Number of Special Characters: %d\n", special);

    //getch
}

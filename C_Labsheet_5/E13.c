/* Write a program that reads character and perform following operation 
according to the choice inputted by the user. 
Displays “it is vowel” if entered character is vowel otherwise “it is consonants”.
Displays “it is digit” if entered character is member of digit, otherwise display 
the ASCII value of entered character.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char ch;
    int num,val;
    printf("Enter 1 for opertaion on Alphabet or Enter 2 for opertaion on digit: ");
    scanf("%d",&num);
    
    switch(num)
    {
        case '1':
            puts("Enter a character:");
            putchar(ch);
            if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
            {    
                printf("It is Vowel");
                break;
            }
            else
            {
                printf("It is consonants");
                break;
            }
        case '2':
            printf("Enter a character: ");
            scanf("%c", &ch);

            if(ch>=0)
            {
                printf("It is digit");
            }
            else
            {
                printf("ASCII value is = %d",ch);
            }
    }

   //getch()
}
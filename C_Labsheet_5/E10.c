//Write a program to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100],cp[100];
    int i,flag=1;
    //clrscr
    
    //input
    puts("Enter string: ");
    gets(ch);
    
    //reverse
    strcpy(cp,ch);
    strrev(cp);
    
    //check if palindrome or not
    for(i=0;i<strlen(ch);i++)
        if(cp[i]!=ch[i])
        {
            flag=0;
            break;
        }
    if(flag==1)
        printf("String is Palindrome");
    else
        printf("String is not palindrome");
    
    //getch
}
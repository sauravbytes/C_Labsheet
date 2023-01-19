/*Write a program to read a string. If string read is equal to “hello”, display sentence 
“Hello! How are you?” Else, if the length of sting is greater than 5 then display 
“This string has more than 5 characters”. If none of above is true display 
“This is not what I wanted”.*/

#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100];
    puts("Enter string");
    gets(ch);

    if(strcmp(ch,"hello")<1)
        puts("Hello! How are you?");
    else if(strlen(ch)>5)
        puts("This string has more than 5 characters");
    else
        puts("This is not what I Wanted");
    
   
   //getch()
}
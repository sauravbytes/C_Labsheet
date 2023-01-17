/*Write a program to input a string and count the number of characters 
without using strlen() function.*/

#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100];
    int i=0;
    //clrscr();
    puts("Enter string:");
    gets(ch);
    
    //length of string
    while(ch[i]!='\0')
        i++;
    printf("Length of string is: %d",i);
   
   //getch()
}
//Write a program to swap contents of two string variables with each other.

#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100],cp[100],t[100];
    int i;

    //input
    puts("Enter first string in ch Varaiable");
    gets(ch);
    puts("Enter second string cp varaiable");
    gets(cp);

    //copying first string in third variable
    strcpy(t,ch);
    strcpy(ch,cp);
    strcpy(cp,t);

    puts("Swapped contents of two string variable are");
    printf("Ch = %s\nCp = %s",ch,cp);


   
   //getch()
}
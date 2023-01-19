//Write a program to count white spaces in a given sentence.
#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100];
    int i,count=0;
    
    //input
    puts("Enter string");
    gets(ch);

    //number of WhiteSpaces
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]==' ')
            count++;
    }
    //print
    printf("Numbers of White Spaces in a sentence is: %d",count);
   //getch()
}
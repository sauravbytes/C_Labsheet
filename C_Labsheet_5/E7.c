//Write a program to count number of comma (,) in a given sentence.
#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100];
    int i,count=0;
    
    //input
    puts("Enter string: ");
    gets(ch);

    //number of Commas
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]==',')
            count++;
    }
    //print
    printf("Numbers of Commas in a sentence is: %d",count);
   //getch()
}
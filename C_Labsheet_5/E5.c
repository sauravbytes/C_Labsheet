//Write a program to read a line of text and display number of vowels in it.
#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100];
    int i,count=0;
    
    //input
    puts("Enter string:");
    gets(ch);

    //number of vowels
    for(i=0;i<strlen(ch);i++)
        if(ch[i]=='a'||ch[i]=='A'
            ||ch[i]=='e'||ch[i]=='E'
            ||ch[i]=='i'||ch[i]=='I'
            ||ch[i]=='o'||ch[i]=='O'
            ||ch[i]=='u'||ch[i]=='U')

            count++;
    //print
    printf("Numbers of Vowels in string is: %d",count);
   //getch()
}
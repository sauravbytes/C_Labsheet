//Write a program to input a string and count the number of consonants present in the string.
#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100];
    int i,count=0;
    
    //input
    puts("Enter string:");
    gets(ch);

    //number of consonants
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]!=' '&&ch[i]!='a'&&ch[i]!='A'
            &&ch[i]!='e'&&ch[i]!='E'
            &&ch[i]!='i'&&ch[i]!='I'
            &&ch[i]!='o'&&ch[i]!='O'
            &&ch[i]!='u'&&ch[i]!='U')
            count++;
    }
    //print
    printf("Numbers of Consonants in string is: %d",count);
   //getch()
}
//Write program that takes a string from user and displays the length of that string.

#include<stdio.h>
#include<string.h>
void main()
{
   char ch[100];
   int len;
   //clrscr();

   //input string
   printf("Enter string: ");
   gets(ch);

   //length of string
   len=strlen(ch);

   //print
   printf("Length of string is %d",len);
   //getch()
}
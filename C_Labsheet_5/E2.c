//Write a program to input your name and display it in uppercase, lowercase and its reverse.
#include<stdio.h>
#include<string.h>
void main()
{
   char ch[100];
   //clrscr();

   puts("Enter your name: ");
   gets(ch);

   strupr(ch);
   printf("\nUppercase: %s",ch);

   strlwr(ch);
   printf("\nLowercase: %s",ch);
   
   strrev(ch);
   printf("\nReverse: %s",ch);
   

   //getch()
}
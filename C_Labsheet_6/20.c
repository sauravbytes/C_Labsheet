// Write a function that converts uppercase string to lowercase string.
 
#include<stdio.h>
//#include<conio.h>
#include<string.h>

void upper(char text[])
{
    int i=0;
     while( text[i] != '\0' ) 
     {
        if( text[i] >= 'a' && text[i] <= 'z' )
        {
           text[i] = text[i] - 32;
        }
        i++;
     }
     puts(text);
}
void main()
{
    char text[50];
    printf("Enter Uppercased string to convert it into lowercase: ");
    scanf("%[^\n]",text);
    upper(text);
    //getch();
}
/*WAP to read a line of text & print each character, 
print in reverse case (use toupper() & tolower(),)*/

#include<stdio.h>
#include<string.h>
void main()
{
    char ch[100],uc[100],lc[100];
    int i;
    
    //input
    puts("Enter string: ");
    fflush(stdin);
    gets(ch);

    //print each character
    printf("Each character: ");
    for(i=0;i<strlen(ch);i++)
    {
        
        putchar(ch[i]);
        printf("\t");
    }

    //reversing text
    strrev(ch);

    //changing case
    for (i=0;i<strlen(ch); i++) {
        uc[i] = toupper(ch[i]);
        lc[i] = tolower(ch[i]);
    }
    fflush(stdout);
    
    printf("\nReverse Lowercase string: %s", lc);
    printf("\nReverse Uppercase string: %s", uc);
    
   //getch()
}
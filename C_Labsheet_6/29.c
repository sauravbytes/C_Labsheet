// WAP to print “Hello” „n‟ times using recursive function

#include<stdio.h>
#include<conio.h>

void printHello(int n) {
    if (n == 0) {
        return;
    }
    printf("Hello\n");
    printHello(n-1);
}

void main()
{
    int n;
    printf("Enter the number of times to print 'Hello': ");
    scanf("%d", &n);
    printHello(n);
   //getch()
}
// WAP that use a function called isprime(). This function takes a no. as an argument and returns either 0 or
// 1. The function returns 1 if the given argument is prime otherwise 0.

#include<stdio.h>
#include<conio.h>

int isprime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void main()
{
   int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isprime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
   //getch()
}
#include <stdio.h>
#include<string.h>

union Data {
    int i;
    float f;
    char str[20];
};

void main() {
    union Data data;

    data.i = 10;
    printf("Integer value: %d\n", data.i);

    data.f = 220.5;
    printf("Float value: %f\n", data.f);

    strcpy(data.str, "C Programming");
    printf("String value: %s\n", data.str);

    
}
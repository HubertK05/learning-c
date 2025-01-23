#include<stdio.h>

// This is how you define bool in C
#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    printf("Data type sizes (in bytes):\n");

    printf("char: %d\n", sizeof(char));
    printf("short: %d\n", sizeof(short));
    printf("int: %d\n", sizeof(int));
    printf("long: %d\n", sizeof(long));
    printf("long long: %d\n", sizeof(long long));
    
    printf("unsigned char: %d\n", sizeof(unsigned char));
    printf("unsigned short: %d\n", sizeof(unsigned short));
    printf("unsigned int: %d\n", sizeof(unsigned int));
    printf("unsigned long: %d\n", sizeof(unsigned long));
    printf("unsigned long long: %d\n", sizeof(unsigned long long));

    printf("float: %d\n", sizeof(float));
    printf("double: %d\n", sizeof(double));

    // Strings - arrays of chars

    return 0;
}

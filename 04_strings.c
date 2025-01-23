#include<stdio.h>
#include<string.h>

int main() {
    // Defining an immutable string
    char *first = "Hello, world!";

    // Local character array definition makes the string mutable
    char second[] = "Hello, world!";

    for (int i = 0; i < strlen(first); i++) {
        printf("%c ", first[i]);
    }
    printf("\n");

    // Strings are UTF-8 encoded, common non-ASCII characters take 2 bytes
    // and strlen returns the amount of bytes (not characters).
    printf("Length of żółty: %d\n", strlen("żółty")); // 8

    // String concatenation. strncat adds at most as much bytes as declared in the
    // function to the destination string.
    // Be aware of the destination buffer overflow!
    char dest[20]="Hello, ";
    char src[20]= "world!";
    strncat(dest,src,3);
    printf("%s\n",dest);
    strncat(dest,src,20);
    printf("%s\n",dest);

    return 0;
}

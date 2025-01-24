#include<stdio.h>

int main() {
    // What are these immutable C-strings?
    char *name = "Hello, world!";

    // Under the hood, there are three things done:
    // 1. In the stack, a new variable `name` is created.
    // 2. In the heap, sufficient memory is allocated and filled with "Hello, world!".
    // 3. The value of `name` becomes an address to the first character of `Hello, world!`.

    // Also, C-strings are null-terminated; they end with \0 which allows the program to know where the string ends.

    // Allocated C-strings are immutable, because they are stored in read-only memory.
    // Attempting to mutate them results in a segfault.
    // name[1] = 'a';

    int a = 1;
    // This is how you create pointers to existing variables.
    int *pointer_to_a = &a;

    // Dereferencing is "following" the pointer (going to the address pointed to by the pointer).
    printf("Value of a = %d\n", a);
    printf("Value of pointer_to_a = %d\n", pointer_to_a);
    printf("Value of dereferenced pointer_to_a = %d\n", *pointer_to_a);
    
    // We can mutate variables directly or through a pointer.
    a += 1;
    *pointer_to_a += 1;


    return 0;
}

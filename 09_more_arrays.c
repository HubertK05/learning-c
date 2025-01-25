#include<stdlib.h>
#include<stdio.h>

int main() {
    // vowels is an array and pvowels is the pointer to that array.
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    char *pvowels = vowels;

    // Print the addresses.
    // All of these are address representations.
    // Note that `vowels` behaves the same way as `pvowels` - one can say that both are pointers.
    // And therefore the indexing syntax is identical to incrementing the pointer:
    // vowels[1] <=> *(vowels + 1) and &vowels[1] <=> vowels + 1.
    // This also holds if the array elements are of other types, occupying more memory.
    for (int i = 0; i < 5; i++) {
        printf("%d, %d, %d, %d\n", &vowels[i], &pvowels[i], pvowels + i, vowels + i);
    }

    // Print the values.
    for (int i = 0; i < 5; i++) {
        printf("%d, %d, %d, %d\n", vowels[i], pvowels[i], *(pvowels + i), *(vowels + i));
    }

    // IMPLEMENTATION EXERCISE 1:
    // Implement a two-dimensional dynamically-allocated array of n rows and m columns.
    const int n = 5;
    const int m = 4;

    int **main_ptr = (int**)malloc(n * sizeof(int*));
    
    for (int i = 0; i < n; i++) {
        int *row_ptr = (int*)malloc(m * sizeof(int));
        for (int j = 0; j < m; j++) {
            row_ptr[j] = i * m + j;
        }
        main_ptr[i] = row_ptr;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", main_ptr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(main_ptr[i]);
    }
    free(main_ptr);

    return 0;
}

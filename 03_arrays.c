#include<stdio.h>

int main() {
    // Defining an array.
    // Values in this array are undefined garbage.
    int numbers[10];

    // Initialize vvalues
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    // Prints our initialized numbers, and then garbage.
    for (int i = 0; i < 10; i++) {
        printf("%d\n", numbers[i]);
    }

    // Multi-dimensional array. 2 rows and 5 columns.
    int foo[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
    };

    // Actually exactly the same as foo.
    int bar[2][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // The length of the first dimension of the array can be omitted.
    int one[] = {1, 2, 3, 4};
    int two[][2] = {1, 2, 3, 4};
    int three[][2][2] = {1, 2, 3, 4};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", foo[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char *label;
    int x, y;
} point;

int main() {
    // Dynamically allocate bytes needed to store the point struct.
    // malloc allocates a chunk of memory and returns the address of allocated memory.
    // You have to store it in a pointer.
    point *my_point = (point*) malloc(sizeof(point));
    my_point->x = 1;
    my_point->y = 2;
    my_point->label = "A";
    // Allocated memory should be freed to avoid memory leaks. When freeing memory,
    // data is still under the address and the pointer remains unchanged.
    // However, you must not use that pointer.
    free(my_point);

    return 0;
}

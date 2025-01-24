#include<stdio.h>

struct point {
    int x, y;
};

typedef struct {
    int x, y;
} point_type;

// Structs can hold pointers.
typedef struct {
    char *brand;
    int model;
} vehicle;

int main() {
    // Working with classic structs
    struct point p;
    p.x = 1;
    p.y = 2; 

    printf("%d, %d\n", p.x, p.y);

    // Working with typedef structs
    point_type p_two;
    p_two.x = 1;
    p_two.y = 2;

    printf("%d, %d\n", p_two.x, p_two.y);

    vehicle mycar;
    // mycar.brand is of type char* - therefore, even though a string is passed, the field
    // value becomes an address of that string. This can be a confusing abstraction, which
    // doesn't occur in case of holding pointers to primitive data types (ints/floats).
    mycar.brand = "Ford";
    mycar.model = 2007;

    printf("%s (at 0x%x), %d\n", mycar.brand, mycar.brand, mycar.model);

    return 0;
}

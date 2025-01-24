#include<stdio.h>

typedef struct {
    int x, y;
} point;

void modify(int *a) {
    // Modifies the variable from outer scope - impossible to do without pointers/references/returning.
    (*a)++;
}

void scale(point *p, int factor) {
    // The arrow syntax - shorthand for dereferencing structs and accessing its fields
    // (*p).x *= factor;
    // (*p).y *= factor;

    p->x *= factor;
    p->y *= factor;
}

int main() {
    int a = 0;
    modify(&a);
    printf("%d\n", a);
    
    point p;
    p.x = 1;
    p.y = 2;
    scale(&p, 2);
    printf("%d, %d\n", p);

    return 0;
}

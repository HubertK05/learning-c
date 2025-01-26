#include<stdio.h>
#include<stdlib.h>

int add_ten(int arg) {
    return arg + 10;
}

// Descending numeric order.
int compare(const void *left, const void *right) {
    // There is a cast to integer pointer. This is C's approach to allowing more than one type as an argument to the function.
    // Result is less than zero <=> right is greater by the relationship and vice versa.
    return (*(int*)right - *(int*)left);
}

int main() {
    // This is a function pointer. It's a variable that holds code address, which
    // allows to pass functions to variables. You can call the function via a variable.
    // The type of func_ptr is int (*)(int).
    int (*func_ptr)(int) = &add_ten;
    int res = (func_ptr)(5);
    printf("Result = %d\n", res);

    // The more practical use of function pointers - defining ordering relationships.
    const int n = 9;
    int nums[] = {4,3,6,1,7,8,6,2,5};
    int (*cmp)(const void*, const void*) = &compare;
    qsort(nums, sizeof(nums)/sizeof(*nums), sizeof(*nums), cmp);

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

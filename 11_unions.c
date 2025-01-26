#include<stdio.h>

// An example union.
// Unions are a single piece of memory, that can be read in multiple ways.
// So, in this example, the int can be read as the integer or as its bytes.
// The size of the union is the size of its largest type + additional compiler-provided padding.
union intParts {
  int theInt;
  unsigned char bytes[sizeof(int)];
};

// A great example of union application is tagged union,
// which is the basis of powerful enum designs.
// Tagged unions are unions, but with a tag that tells the program which type should it use.
struct operator {
    int type;
    union {
      int intNum;
      float floatNum;
      double doubleNum;
    } types;
};
// You can omit the `types` union name in this example, which causes union fields to be accessible
// directly from the `operator` struct.

int main() {
    union intParts parts;
    parts.theInt = 123456789;
    printf("Parts of integer %d:\n", parts.theInt);
    for (int i = 0; i < 4; i++) {
        printf("%u ", parts.bytes[i]);
    }
    printf("\n");

    struct operator op;
    op.type = 0;
    op.types.intNum = 352;

    return 0;
}

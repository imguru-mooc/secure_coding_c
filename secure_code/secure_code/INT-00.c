#if 0
#include <stdio.h>

typedef struct {
    char a : 3;
    char b : 2;
    char c : 1;
    unsigned char d : 2;
} BIT;

int main() {
    BIT bit = { .a = 4,.b = 3,.c = 1,.d = 3 };

    printf("bit.a = %d\n", bit.a);
    printf("bit.b = %d\n", bit.b);
    printf("bit.c = %d\n", bit.c);
    printf("bit.d = %d\n", bit.d);

    return 0;
}
#endif
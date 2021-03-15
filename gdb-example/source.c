#include <stdio.h>

int main(void) {

    printf("pointer size is %lu \n", sizeof(void *));

    unsigned long x = 0;

    while ((long)(x * (unsigned long) 8) >= 0) {
        x = x + 0x100000000;
    }

    printf("x is %lu \n", x);

    long y = (long)(x * 8);

    printf("x*8 is %lu \n", x*8);
    printf("y is %li \n", y);


    char a = -0x20;
    unsigned char b = (unsigned char) a;
    printf("a: %hhi     b: %hhu   \n", a, b);

}

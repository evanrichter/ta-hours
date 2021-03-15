#include <stdio.h>
#include <inttypes.h>
int main(void) {
    int a = 10;
    int b = -40;

    char c = 200;

    printf("0x%x\n", c);

    if (a > 5) {
        printf("a is bigger than 5\n");

        if (b > 0) {
            printf("b is positive\n");
            return 0;
        }

        printf("still executing code here \n");

    } else {
        printf("a is less than 5 or equal\n");
    }
}

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void) {
    
    int x = INT32_MAX;
    printf("x is %#010x ; %d \n", x, x);

    unsigned long long y = (unsigned long long) x;
    printf("y is %#018llx ; %lld \n", y, y); // interpret bits as "signed"
    printf("y is %#018llx ; %llu \n", y, y); // interpret bits as "unsigned"


    // what happens on integer over or underflow? nothing!
    int8_t i = 0;
    while (true) {
        i++;
        printf("i: %d \n", i);
    }

}

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    uint16_t number;
    uint64_t number2;
    uint8_t arr[32];
} my_struct;

void asdf(my_struct * s, char * other_str) {
    uint8_t *a = s->arr;
    strncpy((char *)a, other_str, 32);
    a[31] = '\0';
}

int main(void) {

    char *my_str = "lakdjfkalsdjfklajfkljalkfjkaldfjakldjfklajfklasdjfkALKSJDFKLASis the end";

    my_struct s = {
        .number = 23,
        .number2 = 100,
        .arr = {0},
    };

    asdf(&s, my_str);

    printf("struct s is %d %lu %s \n", s.number, s.number2, s.arr);

}

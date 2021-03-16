#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#include <stdlib.h>
#include <string.h>

int main(void) {
   
    char* x = malloc(32);
    // check for malloc error?
    if (x == NULL) {
        exit(-1);
    }

    strcpy(x, "blah blah blah");
    // check for strcpy error? not needed according to man page

    int error = printf("%s \n", x);
    // check for printf error?
    if (error < 0 ) {
        exit(-1);
    }

}

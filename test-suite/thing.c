#include <stdio.h>

int main(int argc, char ** argv) {
    if (argc < 2) {
        return 18;
    }

    // after this point, argc is definitely at least 2

    char* filename = argv[1];

    printf("filename is %s \n", filename);

    return 0;
}

#include <ctype.h>
#include <stdio.h>
#include "args.h"


int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        if (!is_alpha(argv[i])) {
            printf("Only characters [a-z] are allowed as arguments");
            return -1;
        }

        printf("Argument nr %d: %s\n", i, argv[i]);
    }

    return 0;
}

int is_alpha(char *s) {
    while (*s != *"\0") {
        if (!isalpha(*s) || isupper(*s)) {
            return 0;
        }
        s++;
    }
    return 1;
}

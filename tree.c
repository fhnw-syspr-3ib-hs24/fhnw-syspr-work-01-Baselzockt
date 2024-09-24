#include "tree.h"
#include <string.h>

typedef struct tree {
    struct tree *left;
    struct tree *right;
    char *label;
} Tree;


void setLabel(Tree *t, char *s) {
    if (strlen(s) * sizeof(char) > 32) {
        return;
    }
    t->label = s;
}

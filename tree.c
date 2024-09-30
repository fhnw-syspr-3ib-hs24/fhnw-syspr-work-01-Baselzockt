#include "tree.h"

#include <stdlib.h>
#include <string.h>


Tree *newTree() {
    return malloc(sizeof(Tree));
}

Tree *initTree(char *s) {
    return setLabel(newTree(), s);
}

void freeTree(Tree *t) {
    if (t->label) {
        free(t->label);
    }
    if (t->left) {
        freeTree(t->left);
    }
    if (t->right) {
        freeTree(t->right);
    }
    free(t);
}

Tree *setLabel(Tree *t, const char *s) {
    if (strlen(s) > 32) {
        return t;
    }
    t->label = strdup(s);
    return t;
}

Tree *addNode(Tree *t, Tree *node, Side s) {
    switch (s) {
        case LEFT:
            t->left = node;
            break;
        case RIGHT:
            t->right = node;
            break;
    }
    return t;
}

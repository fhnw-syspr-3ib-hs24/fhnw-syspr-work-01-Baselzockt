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
    if (t->left) {
        freeTree(t->left);
    }
    if (t->right) {
        freeTree(t->right);
    }
    free(t);
}

Tree *setLabel(Tree *t, char *s) {
    if (strlen(s) * sizeof(char) > 32) {
        return t;
    }
    t->label = s;
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

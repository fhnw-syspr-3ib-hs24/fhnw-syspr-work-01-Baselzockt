#include "tree.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


Tree *newTree() {
    return malloc(sizeof(Tree));
}

Tree *initTree(const char *s) {
    return setLabel(newTree(), s);
}

void printeLines(int depth, int last) {
    for (int i = 0; i < depth * 4; ++i) {
        if (i % 4) {
            printf(" ");
        } else {
            printf("│");
        }
    }
    if (last) {
        printf("└───");
    } else {
        printf("├───");
    }
}

void printTree(Tree *t, int depth) {
    printf("%s \n", t->label);
    if (t->left) {
        printeLines(depth, t->right ? 0 : 1);
        printTree(t->left, depth + 1);
    }
    if (t->right) {
        printeLines(depth, 1);
        printTree(t->right, depth + 1);
    }
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

#ifndef TREE_H
#define TREE_H

typedef struct tree {
    struct tree *left;
    struct tree *right;
    char *label;
} Tree;

void setLabel(Tree *t, char *s);
#endif // TREE_H

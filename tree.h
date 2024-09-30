#ifndef TREE_H
#define TREE_H

typedef enum side {
    LEFT,
    RIGHT
} Side;

typedef struct tree {
    struct tree *left;
    struct tree *right;
    char *label;
} Tree;

Tree *setLabel(Tree *t, const char *s);

void freeTree(Tree *t);

Tree *newTree();

Tree *initTree(char *s);

Tree *addNode(Tree *t, Tree *node, Side s);
#endif // TREE_H

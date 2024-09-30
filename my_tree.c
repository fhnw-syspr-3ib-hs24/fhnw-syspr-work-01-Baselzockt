#include  "my_tree.h"
#include "tree.h"

int main() {
    Tree *root =
            addNode(
                addNode(
                    newTree(),
                    initTree("3"), RIGHT),
                addNode(
                    addNode(
                        newTree(),
                        initTree("1"), LEFT),
                        initTree("2"), RIGHT),
                LEFT);
    freeTree(root);
    return 0;
}

#include  "my_tree.h"
#include "tree.h"
#include <stdlib.h>

int main() {
    Tree *t = malloc(sizeof(Tree));
    free(t);
    return 0;
}

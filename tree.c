#include "tree.h"

#include <string.h>


void setLabel(Tree *t, char *s) {
    if (strlen(s) * sizeof(char) > 32) {
        return;
    }
    t->label = s;
}

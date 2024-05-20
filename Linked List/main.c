#include <stdio.h>
#include "list.c"

int main() {
    struct Node n1;
    n1.data = 1;
    n1.next = NULL;

    printf("Node %d", n1.data);

    return 0;
}
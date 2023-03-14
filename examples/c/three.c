#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int *create_array(const int n)
{
    int *a = (int *)malloc(sizeof(int) * n);
    if(a == NULL)
    {
        exit(1);
    }
    return a;
}

void foo(int *x, size_t len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d\n", x[i]);
    }
    free(x);
}

int main(void)
{
    Node *head = init_node(0);
    append_ll(&head, 1);
    append_ll(&head, 2);
    print_ll(&head);
}

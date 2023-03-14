#include "lib/linked_list.h"

int main(void)
{
    Node *head = init_node(1);
    append_ll(&head, 2);
    append_ll(&head, 3);
    append_ll(&head, 4);


    print_ll(&head);

    Node *h = head;
    do {
        h = pop(&h);
    } while(h != NULL);
    print_ll(&h);
    return 0;
}

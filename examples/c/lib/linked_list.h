#ifndef H_LINKED_LIST
#define H_LINKED_LIST

#include <stdio.h>
#include <stdlib.h>

typedef struct Node_T {
  int value;
  struct Node_T *next;
} Node;

Node *init_node(const int val) {
  Node *new_node = (Node *)malloc(sizeof(Node));
  if (new_node == NULL) {
    exit(1);
  }
  new_node->value = val;
  new_node->next = NULL;
  return new_node;
}

Node * pop(Node **head)
{
  if(*head == NULL)
    return NULL;

  Node *temp = *head;
  Node *newHead = temp->next;
  *head = newHead;
  free(temp);
  temp = NULL;
  return newHead;
}

void append_ll(Node **head, int value) {
  Node *temp = *head;
  Node *new_node = init_node(value);
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = new_node;
}

void print_ll(Node **h) {
  if(*h == NULL)
  {
    return;
  }

  Node *temp = *h;
  while (temp != NULL) {
    printf("%d\n", temp->value);
    temp = temp->next;
  }
}
#endif

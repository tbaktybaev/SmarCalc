#include "stack.h"

stack_o *push_o(char c, stack_o *root) {
  stack_o *tmp = malloc(sizeof(stack_o));
  tmp->priority = set_prior(c);
  tmp->associative = set_associative(c);
  tmp->ch = c;
  tmp->next = root;
  return tmp;
}

char pop_o(stack_o **root) {
  stack_o *tmp = *root;
  char c;
  if (*root == NULL) {
    c = '\0';
  } else {
    c = tmp->ch;
    *root = tmp->next;
    free(tmp);
  }
  return c;
}

stack_n *push_n(double input, stack_n *root) {
  stack_n *tmp = malloc(sizeof(stack_n));
  tmp->value = input;
  tmp->next = root;
  return tmp;
}

double pop_n(stack_n **root) {
  stack_n *tmp = *root;
  double output;
  if (*root == NULL) {
    output = 0;
  } else {
    output = tmp->value;
    *root = tmp->next;
    free(tmp);
  }
  return output;
}
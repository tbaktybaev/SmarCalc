#ifndef STACK_H_
#define STACK_H_

#include <stdio.h>
#include <stdlib.h>

#include "polish.h"

typedef struct node {
  char ch;
  int priority;
  int associative;
  struct node *next;
} stack_o;

typedef struct noden {
  double value;
  struct noden *next;
} stack_n;

stack_o *push_o(char c, stack_o *root);
char pop_o(stack_o **root);

stack_n *push_n(double input, stack_n *root);
double pop_n(stack_n **root);

#endif

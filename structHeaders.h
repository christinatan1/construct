#include <stdio.h>
#include <stdlib.h>

struct ID {
  char *name;
  int age;
};
struct ID example();
void printVar(struct ID x);
void modify (struct ID *x, char *name, int age);

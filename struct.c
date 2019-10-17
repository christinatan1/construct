#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "structHeaders.h"

char *names[] = {"Cole", "Dylan", "Demi", "Selena", "Zendaya"};

struct ID example(){
  srand(time(NULL));
  struct ID person;
  person.name = names[rand() % 5];
  person.age = rand()/10000000;
  return person;
}

void printVar(struct ID x){
  printf("Name: %s\n", x.name);
  printf("Age: %d\n", x.age);
}

void modify(struct ID *x, char *myName, int myAge){
  x->name = myName;
  x->age = myAge;
}

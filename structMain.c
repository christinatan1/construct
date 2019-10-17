#include <stdio.h>
#include <stdlib.h>

#include "structHeaders.h"

int main(){
  struct ID x;

  // test of example function
  x = example();

  // test of printVar function
  printVar(x);

  //test of modify function
  char newName[30] = "Christina";
  modify(&x, newName, 16);
  printf("*****Modified values:*****\n");
  printVar(x);
}

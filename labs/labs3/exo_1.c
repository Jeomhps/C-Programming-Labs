// exo_1.c : programme principal
#include "common.h"
#include "show.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "usage: mem <value>\n");
    exit(1);
  }
  int *p;
  p = malloc(sizeof(int));
  assert(p != NULL);
  // printf("(%d) addr pointed to by p: %p\n", (int)getpid(), p);
  Print(p);
  *p = atoi(argv[1]); // assign value to addr stored in p
  while (1) {
    Spin(1);
    *p = *p + 1;
    // printf("(%d) value of p: %d\n", getpid(), *p);
    Print(p);
  }
  return 0;
}

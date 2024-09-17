#include "show.h"

#include <stdio.h>
#include <unistd.h>

void Print(int *ptr) {
  printf("(%d) addr pointed to by p: %p\n", (int)getpid(), ptr);
  printf("(%d) value of p: %d\n", getpid(), *ptr);
}

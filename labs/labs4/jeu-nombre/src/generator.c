#include "../include/generator.h"

#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

int random_generator(void) {
  srand(time(NULL));
  return rand() % (MAX_NUMBER + 1);
}

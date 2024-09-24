#include <stdlib.h>
#include <time.h>

#include "../include/generator.h"

#define MAX_NUMBER 100 // Max number for my rand

unsigned int random_generator(void) {
  // Commented for the same reason as in bernoulli.c
  // srand(time(NULL));
  return (rand() % MAX_NUMBER) + 1;
  // Since we want number between 1 and 100 we need to
  // add + 1 or it will be between 0 and 99 according
  // to rand man, rand start at 0.
}

#include <stdlib.h>

#include "../include/bernoulli.h"

int bernoulli_distribution(float current_rate) {
  // I commented srand because reseeding cause issue on my mac
  // reseeding every time makes it so my random value is sensibly
  // the same every time.
  // srand(time(NULL));
  float random_value = (float)rand() / RAND_MAX;
  // RAND_MAX is define at 32 767 for 32 bit system by default in the stdlib.h
  // file. If you were to work on 64 bit then it is more.
  return random_value > current_rate;
}

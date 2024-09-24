#include "../include/alcohol.h"

#include <stdlib.h>

float modify_alcohol(float current_rate, int truth) {
  if (truth) {
    current_rate += 0.1;
    if (current_rate > 1.0) {
      current_rate = 1.0; // Max 1.
    }
  } else {
    // Else we divide alcohol elver by 2.
    current_rate /= 2.0;
  }
  return current_rate;
}

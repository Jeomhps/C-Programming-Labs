#include <stdio.h>
#include <stdlib.h>

#include "../include/stats.h"

void print_stats(int attempts[], int num_attempts, int target) {
  int i;
  float sum_error = 0.0;
  float sum_quadratic_error = 0.0;

  for (i = 0; i < num_attempts; i++) {
    int error = abs(attempts[i] - target);
    sum_error += error;                   // Sum of absolute errors
    sum_quadratic_error += error * error; // Sum of squared errors
  }

  float mean_error = sum_error / num_attempts;
  float quadratic_error = sum_quadratic_error / num_attempts;

  printf("\n");
  printf("================ Statistics =============== : \n");
  printf("Number of attempts : %d\n", num_attempts);
  printf("Mean error : %.2f\n", mean_error);
  printf("Quadratic error : %.2f\n", quadratic_error);
}

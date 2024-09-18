#include "../include/comparator.h"

#include <stdio.h>

void print_comparator(int submission, int to_find) {
  if (submission > to_find) {
    printf("Too high, try again : ");
  } else if (submission < to_find) {
    printf("Too low, try again : ");
  } else {
    printf("Congratulations ! You have found the right number. \n");
  }
}

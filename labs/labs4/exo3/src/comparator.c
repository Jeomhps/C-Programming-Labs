#include <stdio.h>

#include "../include/comparator.h"

void print_comparator(unsigned int submission, unsigned int to_find) {
  if (submission > to_find) {
    printf("Too high, try again !\n");
  } else if (submission < to_find) {
    printf("Too low, try again !\n");
  } else {
    printf("Congratulations ! You have found the right number. \n");
  }
}

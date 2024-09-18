#include "../include/input.h"

#include <stdio.h>
#include <stdlib.h>

int input_number(void) {
  int number;
  printf("Please choose a number between 1 and 100 : ");
  scanf("%d", &number);
  return number;
}

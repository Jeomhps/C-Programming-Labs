#include "../include/comparator.h"
#include "../include/generator.h"
#include "../include/input.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int random_number = random_generator();
  int number_inputed = 0;
  do {
    number_inputed = input_number();
    print_comparator(number_inputed, random_number);
  } while (number_inputed != random_number);
  return EXIT_SUCCESS;
}

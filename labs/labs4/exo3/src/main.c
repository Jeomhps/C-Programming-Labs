// Lib include
#include <stdio.h>
#include <stdlib.h>

// My include
#include "../include/comparator.h"
#include "../include/generator.h"
#include "../include/input.h"

int main(int argc, char *argv[]) {
  // Welcome message
  printf("Welcome to the Number Guessing Game!\n");
  printf("The goal is to guess the randomly generated number.\n");
  printf("After each guess, you'll receive feedback if your guess is too high, "
         "too low, or correct.\n");
  printf("Keep guessing until you find the correct number. Good luck!\n\n");

  unsigned int random_number = random_generator();
  unsigned int number_inputed = 0;
  do {
    number_inputed = input_number();
    print_comparator(number_inputed, random_number);
  } while (number_inputed != random_number);
  return EXIT_SUCCESS;
}

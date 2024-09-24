// Lib include
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// My include
#include "../include/alcohol.h"
#include "../include/bernoulli.h"
#include "../include/comparator.h"
#include "../include/generator.h"
#include "../include/input.h"

int main(int argc, char *argv[]) {
  // Random seed for the rand function using time.
  srand(time(NULL));

  // Welcome message
  printf("Welcome to the Number Guessing Game!\n");
  printf("The goal is to guess the randomly generated number.\n");
  printf("After each guess, you'll receive feedback if your guess is too high, "
         "too low, or correct.\n");
  printf("Keep guessing until you find the correct number. Good luck!\n\n");

  // Declarations
  unsigned int random_number = random_generator();
  unsigned int number_inputed = 0;
  float alcohol_level = 0.0;
  int truth;

  // The game loop
  while (number_inputed != random_number) {
    // Ask a number to the player
    number_inputed = input_number();

    // Set the computer to lie or say truth
    truth = bernoulli_distribution(alcohol_level);

    // Comparate the number of the player and the number to find
    print_comparator(number_inputed, random_number, truth);

    // Adjust alcohol level based on the truth.
    alcohol_level = modify_alcohol(alcohol_level, truth);
  }
  return EXIT_SUCCESS;
}

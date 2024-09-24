#include <stdio.h>

#include "../include/comparator.h"

void print_comparator(unsigned int sbumission, unsigned int to_find,
                      int truth) {
  if (truth) {
    // If the computer is sober he tells the truth.
    if (sbumission < to_find) {
      printf("Too low, try again !\n");
    } else if (sbumission > to_find) {
      printf("Too high, try again !\n");
    } else {
      printf("Congratulations ! You have found the right number. \n");
    }
  } else {
    // If the computer is drunk he lies.
    if (sbumission < to_find) {
      printf("Too high, try again ! (But the computer lies) \n");
    } else if (sbumission > to_find) {
      printf("Too low, try again ! (But the computer lies) \n");
    } else {
      printf("Congratulations ! You have found the right number. \n");
    }
  }
}

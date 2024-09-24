#include <stdio.h>
#include <stdlib.h>

#include "../include/input.h"

unsigned int input_number(void) {
  unsigned int number;
  int result;

  do {
    printf("\nPlease choose a number between 1 and 100: ");
    // Result capture the number of successful conversion if it's not 1 then the
    // input is not a valid number :
    result = scanf("%u", &number);

    // Assert to verify the number is within the correct range and that it has
    // been safely scanned
    if (result != 1 || number < 1 || number > 100) { // I test if number !=
      printf("Error: Number must be between 1 and 100. Please try again.\n");
      // Flush the invalid number or char captured
      while (getchar() != '\n')
        ;
    }
  } while (number < 1 ||
           number > 100); // Keep asking until a valid number is entered

  return number;
}

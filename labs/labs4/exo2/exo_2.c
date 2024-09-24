#include <stdio.h>
#include <stdlib.h>

void toto(int *z) {
  /* Here in this function I pass the address of an integer to modify the
   * integer using a pointer to point where the integer is stored. */
  *z = 40;
  printf("After modification z is equal to %d in the function toto\n", *z);
}

int main(int argc, char *argv[]) {
  int z = 10;
  toto(&z);
  printf("In the main function z is equal to %d after the modifiction in "
         "the funciton toto\n",
         z);

  return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>

int toto(int z) {
  /* Here in this function I pass an integer I modify it and I
   * return the value and assign it back to the integer itself. */
  z = 40;
  printf("After modification z is equal to %d in the function toto\n", z);
  return z;
}

int main(int argc, char *argv[]) {
  int z = 10;
  z = toto(z);
  printf("In the main function z is equal to %d after the modifiction in "
         "the funciton toto\n",
         z);

  return EXIT_SUCCESS;
}

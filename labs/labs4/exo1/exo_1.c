#include <stdio.h>
#include <stdlib.h>

void toto(int z) {
  z = 40;
  printf("After modification z is equal to %d in the function toto\n", z);
}

int main(int argc, char *argv[]) {
  int z = 10;
  toto(z);
  printf("In the main function z is equal to %d after the modifiction in "
         "the funciton toto\n",
         z);

  /*
   * To modify the value of an integer within a function, you need to pass a
   * pointer to the integer instead of passing the integer itself. By
   * passing a pointer, you can modify the content of the integer at the
   * address the pointer points to. Let's patch this in exo2.
   */

  return EXIT_SUCCESS;
}

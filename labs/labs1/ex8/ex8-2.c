#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  for (int i = 0;i < 10;i++) {
    if ((i % 7) == 4) {
      // It should print at 4 since 4/7  produce no result and only a remain of 4
      printf("i mod 7 is equal to %d\n", i);
    } else {
      printf("i mod 7 ins't equal %d\n", i);
    } 
  }
  return EXIT_SUCCESS;
}

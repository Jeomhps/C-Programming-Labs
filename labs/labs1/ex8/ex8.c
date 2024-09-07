#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  for (int i = 0;i < 10;i++) {
    if (i == 5) {
      printf("i is equal to %d\n", i);
    } else {
      printf("i is not equal to 5 %d\n", i);
    } 
  }
  return EXIT_SUCCESS;
}

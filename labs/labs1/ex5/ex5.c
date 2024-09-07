#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a, b;
  
  a = 4;
  b = 2;

  printf("4/2 = %d\n", a/b);
  
  a = 5;

  printf("The remainder of 5/2 is %d\n", a%b);
	return EXIT_SUCCESS;
}

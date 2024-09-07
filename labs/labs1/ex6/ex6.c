#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  unsigned int a = 60;

  // 60 in binary is 0000 0011 1100 moving 4 bit to the left
  // on unsigned should give us 0011 1100 0000, thus 960
  // Keep in mind that this is the result while working with 4 bytes int
  // or in other terms 32 bits. If it were to be coded on 2 bytes then 
  // the resutl would be 192 since 2 bits would be lost
  
  a = a << 4;
  printf("60 after shifting 4 bit to the left is %d\n", a);

  a = 60;
  a = a >> 4;

  printf("60 after shifting 4 bit to the right is %d\n", a);
	return EXIT_SUCCESS;
}

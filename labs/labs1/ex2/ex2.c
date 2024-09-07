#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a = 2;
	double b = 4;
	int comparer = a == b;
	printf("comparer=%i\n", comparer);
	return EXIT_SUCCESS;
}

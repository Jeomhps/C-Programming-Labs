#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a = 2;
	float b = 2.5;
	if (a == b) {
		printf("Ca marche\n");
	} else if (a == (int)b) {
		printf("Avec un cast ca marche\n");
	}
	return EXIT_SUCCESS;
}

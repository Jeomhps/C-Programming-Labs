#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int myInt = 0;
  short int mySelector;

  do {
    printf("The current value of the int is : %d\n", myInt);
    printf("\n");
    printf("1. Add 1 ;\n");
    printf("2. Multiply by 2 ;\n");
    printf("3. Substract 4 ;\n");
    printf("4. Quit.\n");
    printf("\n");
    printf("Select what you want to do by entering the number of the action: ");
    scanf("%hd", &mySelector);
    printf("\n");

    switch (mySelector) {
      case 1:
        myInt += 1;
        break;
      case 2:
        myInt *= 2;
        break;
      case 3:
        myInt -= 4;
        break;
      case 4:
        return EXIT_SUCCESS;
      default:
        printf("Invalid selection. Please try again.\n");
    }
  } while (mySelector != 4);
}

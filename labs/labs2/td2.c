#include <stdio.h>
#include <stdlib.h>
#include "td2.h"

// This is a macro definition
// Every time NEWLINE is encountered, the preprocessor will replace it with printf("\n")
#define NEWLINE printf("\n")

//part_ent function for exercise6
int part_ent(double number){
  return (int) number; //I do a cast on the double to transform it into an int
}

double part_dec(double number) {
  return number - (int)number; //To grab the decimal part I just do a cast to take the integer part and substract it
}

int choix(int value) {
  if (value >= 1 && value <= 10) {
    return 1;
  } else if (value > 10 && value <= 20) {
    return 2;
  } else {
    return 3;
  }
}

void toto(int z){
  z = 40;
  printf("After modification z is equal to %d in the function toto\n", z);
}

void titi(int *iptr) {
  *iptr = 40;
}

int main(int argc, char *argv[]) {
  int choice;

  do {
    printf("\nWhich exercise are you willing to test?\n");
    NEWLINE;

    // Loop to print "Exercise1" through "Exercise11"
    for (int i = 1; i <= 11; i++) {
      printf("%d. Exercise%d\n", i, i);
    }
    // Add an option for quitting
    printf("0. Quit\n");

    printf("\nEnter the number of the exercise you want to test (or 0 to quit): ");
    scanf("%d", &choice);
    NEWLINE;
    // Switch case to call the appropriate exercise based on input
    switch (choice) {
      // Case 1: Declare and use variable 'sum' inside a block
      case 1: {
        // Using braces in the case to create a local scope for the variable 'sum'
        printf("Executing Exercise 1\n");
        int sum = 0; // Variable 'sum' is local to this block
        for (int i = 1; i <= 200; i++) {
          sum += i*i;
        }
        NEWLINE;
        printf("The sum of square from 1 to 200 is : %d\n", sum);
        break;
      }

      // Case 2: Declare the same variable 'sum' again
      case 2: {
        // We need a separate scope here to avoid conflict with the 'sum' declared in case 1
        printf("Executing Exercise 2\n");

        printf("\nSelect an int k to calculate the sum of the squares from 1 to k : ");
        int k;
        scanf("%d", &k);
        NEWLINE;

        int sum = 0; // This 'sum' is independent of the 'sum' in case 1
        for (int i = 1; i <= k; i++) {
          sum += i*i;
        }

        NEWLINE;
        printf("The sum of square from 1 to 200 is : %d\n", sum);
        break;
      }
      case 3: {
        printf("Executing Exercise 3\n");
        /*If the user enter a negative number in exercise 2 the output of the function is always 0
        since k is < 0, we don't enter the for because i is equals to 1 and it is > than a negative number
        hence the result is the initialisation of sum wich is 0 */
        NEWLINE;
        int k;
        do {
          printf("Select an int k > 0 to calculate the sum of the squares from 1 to k : ");
          scanf("%d", &k);
        } while (k < 0);
        NEWLINE;

        int sum = 0; // This 'sum' is independent of the 'sum' in case 1
        for (int i = 1; i <= k; i++) {
          sum += i*i;
        }

        printf("The sum of squares from 1 to %d is : %d \n", k, sum);
        break;
      }
      case 4: {
        printf("Executing Exercise 4\n");
        NEWLINE;

        int a;
        printf("Enter a multiple of 10 : ");
        scanf("%d", &a);
        NEWLINE;

        if (a % 10 == 0) {
          printf("%d is a multiple of 10.\n", a);
        } else {
          printf("%d is not a multiple of 10.\n", a);
        }
        break;
      }
      case 5: {
        printf("Executing Exercise 5\n");
        NEWLINE;

        int a;
        printf("Enter a multiple of 10 : ");
        scanf("%d",&a);
        NEWLINE;

        int isDivisibleByTen = 1;
        while (isDivisibleByTen) {
          if (a % 10 == 0) {
            isDivisibleByTen = 0;
            printf("%d is a multiple of ten.\n", a);
          } else {
            printf("Error, this isn't a multiple of 10, please re-enter a number : ");
            scanf("%d", &a);
          }
        }
        break;
      }
      case 6: {
        printf("Executing Exercise 6\n");
        NEWLINE;

        double number = 10.56;
        printf("The integer part of the double %f is %d\n",number ,part_ent(number));
        number = 78;
        printf("The integer part of the double %f is %d\n",number ,part_ent(number));

        break;
      }
      case 7: {
        printf("Executing Exercise 7\n");
        NEWLINE;

        double number = 10.456;
        printf("The decimal part of the double %f is %f\n",number ,part_dec(number));
        number = 5.78;
        printf("The decimal part of the double %f is %f\n",number ,part_dec(number));

        break;
      }
      case 8:
        printf("Executing Exercise 8\n");
        NEWLINE;

        int test = 7;
        printf("If I pass the integer %d to the function, it returns %d\n", test, choix(test));
        test = 13;
        printf("If I pass the integer %d to the function, it returns %d\n", test, choix(test));
        test = 100;
        printf("If I pass the integer %d to the function, it returns %d\n", test, choix(test));

        break;
      case 9:
        printf("Executing Exercise 9\n");
        NEWLINE;

        int z = 10;
        toto(z);
        printf("In the main function z is equal to %d after the modifiction in the funciton toto\n", z);


        /*
         * To modify the value of an integer within a function, you need to pass a pointer to the integer 
         * instead of passing the integer itself. By passing a pointer, you can modify the content of 
         * the integer at the address the pointer points to.
         */

        titi(&z); //Here I'm passing the address of z in the function and titi will modify the int it points to
        printf("After executing the fixed toto function titi, z is equal to %d in main\n", z);

        break;
      case 10:
        printf("Executing Exercise 10\n");
        break;
      case 11:
        printf("Executing Exercise 11\n");
        break;
      case 0:
        printf("Exiting the program. Goodbye!\n");
        break;
      default:
        printf("Invalid choice! Please enter a number between 0 and 11.\n");
        break;
    }
  } while (choice != 0);  // Repeat until the user chooses to quit

  return EXIT_SUCCESS; 
}

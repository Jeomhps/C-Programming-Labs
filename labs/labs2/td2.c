#include <stdio.h>
#include <stdlib.h>
#include "td2.h"

int ex1() {
  int sum = 0;
  for (int i = 1; i <= 200; i++) {
    sum += i*i;
  }
  return sum;
}

int ex2(int k){
  int sum = 0;
  for (int i = 1; i <= k; i++) {
    sum += i*i;
  }
  return sum;
}

int main(int argc, char *argv[]) {
  //ex1
  printf("The sum of square from 1 to 200 is : %d\n", ex1());

  //ex2
  printf("\n");
  printf("Select an int k to do the sum of the square from 1 to k : ");
  int k;
  scanf("%d", &k);
  printf("\n");
  printf("The sum of squares from 1 to %d is : %d \n", k, ex2(k));

  //ex3
  //If the user enter a negative number in exercise 2 the output of the function is always 0
  //since k is < 0, we don't enter the for because i is equals to 1 it is > than a negative number
  //hence the result is the initialisation of sum wich is 0
  
	return EXIT_SUCCESS;
}

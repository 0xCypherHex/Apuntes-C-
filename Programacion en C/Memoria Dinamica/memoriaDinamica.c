#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // Allocate memory for a number of items
  int numItems = 10;
  int *myArray = malloc(numItems * sizeof(int));

  // Write into the memory
  for (int i = 0; i < numItems; i++) {
    myArray[i] = i + 1;
  }

  // Reallocate the memory
  numItems = 20;
  myArray = realloc(myArray, numItems * sizeof(int));

  // Display the contents of the memory
  for (int i = 0; i < numItems; i++) {
    printf("%d ", myArray[i]);
  }

  // Free the memory
  free(myArray);
  myArray = NULL;

  return 0;
}
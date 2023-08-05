// This program is to transpose the elements of an array

#include <stdio.h>

// Declare Functions
void transposeMatrix (int[4][5], int[5][4]);

int main(void) {

  // Get input
  int inMatrix[4][5];
  printf ("Enter array elements - array is 4x5\n");
  
  printf ("Line 1:  ");
  for (int i = 0; i < 4; i++)
    scanf ("%d", &inMatrix[i][0]);

  printf ("Line 2:  ");
  for (int i = 0; i < 4; i++)
    scanf ("%d", &inMatrix[i][1]); 

  printf ("Line 3:  ");
  for (int i = 0; i < 4; i++)
    scanf ("%d", &inMatrix[i][2]);

  printf ("Line 4:  ");
  for (int i = 0; i < 4; i++)
    scanf ("%d", &inMatrix[i][3]);

  printf ("Line 5:  ");
  for (int i = 0; i < 4; i++)
    scanf ("%d", &inMatrix[i][4]);

  printf ("\n");

  // Transpose matrix
  int outMatrix[5][4];
  transposeMatrix(inMatrix, outMatrix);

  // Print outMatrix
  printf ("Output transposed matrix\n");
  for (int i = 0; i < 4; i++) {
    printf ("Line %d: ", i + 1);
    for (int j = 0; j < 5; j++) {
      printf ("%d", outMatrix[j][i]); // Print line
    }
    printf ("\n"); // Next Line
  }
  
  return 0;
}

// Define Functions
void transposeMatrix (int input[4][5], int output[5][4]) {

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      output[j][i] = input[i][j];
    }
  }
}
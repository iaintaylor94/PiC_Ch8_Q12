// This program is to transpose the elements of a variable sized array

#include <stdio.h>

// Declare Functions
void getDimensions(int*, int*);
void getMatrix (size_t width, size_t height, int[width][height]);
void transposeMatrix (size_t width, size_t height, int[width][height], int[height][width]);
void printMatrix (size_t width, size_t height, int[width][height]);

int main(void) {

  // Get input
  int width, height;
  getDimensions(&width, &height);
  
  int inMatrix[width][height];
  getMatrix (width, height, inMatrix);

  // Transpose matrix
  int outMatrix[height][width];
  transposeMatrix(width, height, inMatrix, outMatrix);

  // Print outMatrix
  printMatrix (height, width, outMatrix);
  
  return 0;
}

// Define Functions
void getDimensions (int *width, int *height) {
  printf ("Enter width and height: ");
  scanf ("%d %d", width, height);
}

void getMatrix(size_t width, size_t height, int inMatrix[width][height]) {

  for (int i = 0; i < height; i++) {
    printf ("Line %d: ",i);
    for (int j = 0; j < width; j++) {
      scanf ("%d", &inMatrix[j][i]);
    }
  }

  printf ("\n");
}

void transposeMatrix (size_t width, size_t height, int input[width][height], int output[height][width]) {

  for (int i = 0; i < width; i++) {
    for (int j = 0; j < height; j++) {
      output[j][i] = input[i][j];
    }
  }
}

void printMatrix (size_t width, size_t height, int matrix[width][height]) {
  printf ("Output transposed matrix\n");
  for (int i = 0; i < height; i++) { // Loop lines
    printf ("Line %d: ", i);
    for (int j = 0; j < width; j++) {
      printf ("%d", matrix[j][i]); // Print line
    }
    printf ("\n"); // Next Line
  }
}
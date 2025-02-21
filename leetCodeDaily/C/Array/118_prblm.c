#include <stdio.h>
#include <stdlib.h>

// Function to generate Pascal's Triangle
int **generate(int numRows, int *returnSize, int **returnColumnSizes)
{
  *returnSize = numRows;

  // Allocate memory for row sizes (each row has increasing columns)
  *returnColumnSizes = (int *)malloc(numRows * sizeof(int));

  // Allocate memory for the triangle
  int **triangle = (int **)malloc(numRows * sizeof(int *));

  for (int i = 0; i < numRows; i++)
  {
    (*returnColumnSizes)[i] = i + 1; // Set column size for each row
    triangle[i] = (int *)malloc((i + 1) * sizeof(int));

    triangle[i][0] = triangle[i][i] = 1; // First and last element is always 1

    // Compute inner elements
    for (int j = 1; j < i; j++)
    {
      triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
    }
  }
  return triangle;
}

// Driver function to test
int main()
{
  int numRows = 5;
  int returnSize;
  int *returnColumnSizes;

  int **result = generate(numRows, &returnSize, &returnColumnSizes);

  // Print Pascal's Triangle
  for (int i = 0; i < returnSize; i++)
  {
    for (int j = 0; j < returnColumnSizes[i]; j++)
    {
      printf("%d ", result[i][j]);
    }
    printf("\n");
    free(result[i]); // Free each row
  }
  free(result); // Free main triangle memory
  free(returnColumnSizes);

  return 0;
}

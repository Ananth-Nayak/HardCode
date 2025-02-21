#include <stdio.h>
#include <stdlib.h>

// Function to reshape the matrix
int **matrixReshape(int **mat, int m, int n, int r, int c, int *returnSize, int **returnColumnSizes)
{
  // Check if reshaping is possible
  if (m * n != r * c)
  {
    *returnSize = m; // Return original rows
    *returnColumnSizes = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
    {
      (*returnColumnSizes)[i] = n;
    }
    return mat; // Return original matrix
  }

  // Allocate memory for the new matrix
  int **reshaped = (int **)malloc(r * sizeof(int *));
  *returnColumnSizes = (int *)malloc(r * sizeof(int));
  for (int i = 0; i < r; i++)
  {
    reshaped[i] = (int *)malloc(c * sizeof(int));
    (*returnColumnSizes)[i] = c;
  }

  // Fill the new matrix using 1D traversal
  for (int i = 0; i < m * n; i++)
  {
    reshaped[i / c][i % c] = mat[i / n][i % n];
  }

  *returnSize = r; // Update return size
  return reshaped; // Return new matrix
}

// Driver code
int main()
{
  int m = 2, n = 2, r = 1, c = 4;
  int **mat = (int **)malloc(m * sizeof(int *));
  mat[0] = (int *)malloc(n * sizeof(int));
  mat[0][0] = 1;
  mat[0][1] = 2;
  mat[1] = (int *)malloc(n * sizeof(int));
  mat[1][0] = 3;
  mat[1][1] = 4;

  int returnSize;
  int *returnColumnSizes;
  int **reshaped = matrixReshape(mat, m, n, r, c, &returnSize, &returnColumnSizes);

  printf("Reshaped Matrix:\n");
  for (int i = 0; i < returnSize; i++)
  {
    for (int j = 0; j < returnColumnSizes[i]; j++)
    {
      printf("%d ", reshaped[i][j]);
    }
    printf("\n");
  }

  free(returnColumnSizes);
  for (int i = 0; i < returnSize; i++)
    free(reshaped[i]);
  free(reshaped);
  return 0;
}

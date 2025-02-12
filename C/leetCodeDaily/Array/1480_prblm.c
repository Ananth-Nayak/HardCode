#include <stdio.h>
#include <stdlib.h>

/**
 * Function to calculate the running sum of an array.
 * The returned array must be dynamically allocated, and the caller is responsible for freeing it.
 *
 * @param nums - Input array
 * @param numsSize - Size of the input array
 * @param returnSize - Pointer to an integer where the size of the returned array will be stored
 * @return Pointer to the dynamically allocated running sum array
 */
int *runningSum(int *nums, int numsSize, int *returnSize)
{
  // Update returnSize with the size of the output array
  *returnSize = numsSize;

  // Allocate memory for the output array
  int *result = (int *)malloc(numsSize * sizeof(int));

  // Check if memory allocation was successful
  if (!result)
  {
    return NULL; // Return NULL if allocation fails
  }

  // Initialize the first element of the running sum array
  result[0] = nums[0];

  // Compute the running sum for each element
  for (int i = 1; i < numsSize; i++)
  {
    result[i] = result[i - 1] + nums[i];
  }

  // Return the dynamically allocated array
  return result;
}

// Driver function to test the runningSum function
int main()
{
  int nums[] = {1, 2, 3, 4, 5};                  // Example input array
  int numsSize = sizeof(nums) / sizeof(nums[0]); // Calculate the number of elements in the array
  int returnSize;                                // Variable to store the size of the returned array

  // Call the runningSum function
  int *result = runningSum(nums, numsSize, &returnSize);

  // Check if memory allocation was successful
  if (result == NULL)
  {
    printf("Memory allocation failed.\n");
    return 1; // Exit with an error code
  }

  // Print the resulting running sum array
  printf("Running Sum: ");
  for (int i = 0; i < returnSize; i++)
  {
    printf("%d ", result[i]);
  }
  printf("\n");

  // Free the dynamically allocated memory
  free(result);

  return 0;
}

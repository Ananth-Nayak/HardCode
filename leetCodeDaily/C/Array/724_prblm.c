#include <stdio.h>

/**
 * Function to find the pivot index.
 * @param nums - Input array
 * @param numsSize - Size of the input array
 * @return The pivot index if found, otherwise -1
 */
int pivotIndex(int *nums, int numsSize)
{
  int totalSum = 0, leftSum = 0;

  // Calculate total sum of array
  for (int i = 0; i < numsSize; i++)
  {
    totalSum += nums[i];
  }

  // Traverse the array to find pivot index
  for (int i = 0; i < numsSize; i++)
  {
    // Right sum = totalSum - leftSum - nums[i]
    if (leftSum == totalSum - leftSum - nums[i])
    {
      return i; // Pivot index found
    }
    leftSum += nums[i]; // Update left sum
  }

  return -1; // No pivot index found
}

// Driver function to test the pivotIndex function
int main()
{
  int nums[] = {1, 7, 3, 6, 5, 6}; // Example input array
  int numsSize = sizeof(nums) / sizeof(nums[0]);

  int pivot = pivotIndex(nums, numsSize);
  printf("Pivot Index: %d\n", pivot);

  return 0;
}

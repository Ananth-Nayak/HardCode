#include <stdio.h>
#include <stdbool.h>

/**
 * QuickSort function to sort the array
 */
void quickSort(int *nums, int left, int right)
{
  if (left >= right)
    return; // Base condition

  int pivot = nums[right]; // Choose last element as pivot
  int i = left - 1;

  for (int j = left; j < right; j++)
  {
    if (nums[j] < pivot)
    {
      i++;
      // Swap nums[i] and nums[j]
      int temp = nums[i];
      nums[i] = nums[j];
      nums[j] = temp;
    }
  }

  // Swap pivot into its correct position
  i++;
  int temp = nums[i];
  nums[i] = nums[right];
  nums[right] = temp;

  // Recursively sort left and right parts
  quickSort(nums, left, i - 1);
  quickSort(nums, i + 1, right);
}

/**
 * Function to check if array contains duplicate
 */
bool containsDuplicate(int *nums, int numsSize)
{
  // Step 1: Sort the array
  quickSort(nums, 0, numsSize - 1);

  // Step 2: Check adjacent elements for duplicates
  for (int i = 1; i < numsSize; i++)
  {
    if (nums[i] == nums[i - 1])
    {
      return true; // Duplicate found
    }
  }

  return false; // No duplicates
}

// Driver function to test the containsDuplicate function
int main()
{
  int nums[] = {1, 2, 3, 4, 5, 6, 1}; // Example input
  int numsSize = sizeof(nums) / sizeof(nums[0]);

  if (containsDuplicate(nums, numsSize))
  {
    printf("True\n");
  }
  else
  {
    printf("False\n");
  }

  return 0;
}

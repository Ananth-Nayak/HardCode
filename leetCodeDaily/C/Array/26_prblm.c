#include <stdio.h>

/**
 * Function to remove duplicates from a sorted array.
 * @param nums - Input sorted array.
 * @param numsSize - Size of the input array.
 * @return - The new length of the modified array without duplicates.
 */
int removeDuplicates(int *nums, int numsSize)
{
  if (numsSize == 0)
    return 0; // If the array is empty, return 0

  int i = 0; // Pointer to track the position of unique elements

  // Iterate through the array starting from the second element
  for (int j = 1; j < numsSize; j++)
  {
    if (nums[j] != nums[i])
    {                    // If a new unique element is found
      i++;               // Move the unique position forward
      nums[i] = nums[j]; // Copy the new unique element
    }
  }

  return i + 1; // Return the new length of the array
}

// Driver function to test the implementation
int main()
{
  int nums[] = {0, 0, 1, 1, 2, 2, 3, 3, 4};
  int numsSize = sizeof(nums) / sizeof(nums[0]);

  int newLength = removeDuplicates(nums, numsSize);

  // Print the modified array
  printf("New length: %d\n", newLength);
  printf("Modified array: ");
  for (int i = 0; i < newLength; i++)
  {
    printf("%d ", nums[i]);
  }
  printf("\n");

  return 0;
}

#include <stdio.h>

/**
 * Function to move all zeroes to the end of the array while maintaining the relative order of non-zero elements.
 * @param nums - Input array.
 * @param numsSize - Size of the array.
 */
void moveZeroes(int *nums, int numsSize)
{
  int index = 0; // Pointer to track the position of the next non-zero element

  // First pass: Move all non-zero elements to the front
  for (int i = 0; i < numsSize; i++)
  {
    if (nums[i] != 0)
    {
      nums[index] = nums[i]; // Place the non-zero element at the correct position
      index++;               // Move the pointer forward
    }
  }

  // Second pass: Fill the remaining positions with zeroes
  while (index < numsSize)
  {
    nums[index] = 0;
    index++;
  }
}

// Driver function to test the implementation
int main()
{
  int nums[] = {0, 1, 0, 3, 12};
  int numsSize = sizeof(nums) / sizeof(nums[0]);

  moveZeroes(nums, numsSize);

  // Print the modified array
  printf("Modified array: ");
  for (int i = 0; i < numsSize; i++)
  {
    printf("%d ", nums[i]);
  }
  printf("\n");

  return 0;
}

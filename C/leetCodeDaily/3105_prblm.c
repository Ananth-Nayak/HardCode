#include <stdio.h>

int longestMonotonicSubarray(int *nums, int numsSize)
{
  if (numsSize == 0)
    return 0; // Edge case: empty array

  int maxLength = 1;                  // Stores the longest increasing or decreasing subarray length
  int incrLength = 1, decrLength = 1; // Track increasing and decreasing subarrays

  for (int i = 1; i < numsSize; i++)
  {
    if (nums[i] > nums[i - 1])
    {
      incrLength++;   // Increase increasing count
      decrLength = 1; // Reset decreasing count
    }
    else if (nums[i] < nums[i - 1])
    {
      decrLength++;   // Increase decreasing count
      incrLength = 1; // Reset increasing count
    }
    else
    {
      // Reset both if elements are equal
      incrLength = 1;
      decrLength = 1;
    }

    // Update max length found so far
    if (incrLength > maxLength)
    {
      maxLength = incrLength;
    }
    if (decrLength > maxLength)
    {
      maxLength = decrLength;
    }
  }

  return maxLength;
}

// Test function
int main()
{
  int nums[] = {3, 2, 1}; // Test case
  int numsSize = sizeof(nums) / sizeof(nums[0]);

  int result = longestMonotonicSubarray(nums, numsSize);
  printf("Longest Monotonic Subarray Length: %d\n", result);
  return 0;
}

#include <stdio.h>
#include <limits.h>

int minSubArrayLen(int target, int *nums, int numsSize)
{
  int left = 0;             // Left pointer for the sliding window
  int sum = 0;              // Current sum of elements in the window
  int min_length = INT_MAX; // Store the minimum length found

  // Iterate over the array with `right` as the expanding pointer
  for (int right = 0; right < numsSize; right++)
  {
    sum += nums[right]; // Expand window by adding `nums[right]`

    // Try to shrink the window while sum >= target
    while (sum >= target)
    {
      // Update min_length if we found a smaller valid subarray
      int current_length = right - left + 1;
      if (current_length < min_length)
      {
        min_length = current_length;
      }

      sum -= nums[left]; // Shrink window from the left
      left++;            // Move left pointer forward
    }
  }

  // If min_length was not updated, return 0 (no valid subarray found)
  return (min_length == INT_MAX) ? 0 : min_length;
}

// Driver code to test the function
int main()
{
  int nums[] = {1, 2, 3, 4, 5};
  int target = 11;
  int size = sizeof(nums) / sizeof(nums[0]);

  printf("Minimum subarray length: %d\n", minSubArrayLen(target, nums, size));
  return 0;
}

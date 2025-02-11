#include <stdio.h>

// Function to find the maximum subarray sum
int maxSubArray(int nums[], int numsSize)
{
  // Initialize current sum and max sum with the first element
  int currentSum = nums[0];
  int maxSum = nums[0];

  // Traverse the array starting from index 1
  for (int i = 1; i < numsSize; i++)
  {
    // If the current sum is negative, reset it to the current element
    if (currentSum < 0)
    {
      currentSum = nums[i]; // Start a new subarray
    }
    else
    {
      currentSum += nums[i]; // Extend the existing subarray
    }

    // Update maxSum if needed
    if (currentSum > maxSum)
    {
      maxSum = currentSum;
    }
  }

  return maxSum; // Return the maximum subarray sum
}

// Example usage
int main()
{
  int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int numsSize = sizeof(nums) / sizeof(nums[0]);

  printf("Maximum Subarray Sum: %d\n", maxSubArray(nums, numsSize)); // Output: 6
  return 0;
}

#include <stdio.h>

int numSubarrayProductLessThanK(int *nums, int numsSize, int k)
{
  // Edge case: If k is 1 or less, no subarray can have product < k
  // bcz nums[i]>=1 and 1 is not less than 1 itlsef (so no subarray is stricly less than when k=1)
  if (k <= 1)
    return 0;

  int left = 0, product = 1, length = 0;

  for (int right = 0; right < numsSize; right++)
  {
    product *= nums[right]; // Expand the window by multiplying the new number

    // If product exceeds or equals k, shrink the window from the left
    while (product >= k)
    {
      product /= nums[left]; // Remove leftmost element
      left++;
    }

    // Count all valid subarrays ending at 'right'
    length += (right - left + 1);
  }

  return length;
}

// Driver Code
int main()
{
  int nums[] = {10, 5, 2, 6};
  int k = 100;
  int size = sizeof(nums) / sizeof(nums[0]);

  printf("Valid subarrays count: %d\n", numSubarrayProductLessThanK(nums, size, k));

  return 0;
}

// Test cases:
// int nums[] = {1, 2, 3}; int k = 0;   // Edge case: k <= 1 -> Output: 0
// int nums[] = {1, 1, 1}; int k = 1;   // Edge case: k == 1 -> Output: 0
// int nums[] = {10, 5, 2, 6}; int k = 100;  // Normal case: Output: 8
// int nums[] = {5, 2, 1}; int k = 10; // Small case

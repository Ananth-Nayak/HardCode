#include <stdio.h>

int maxAscendingSum(int *nums, int numsSize)
{
  if (numsSize == 1)
    return nums[0];
  int curr_sum = nums[0];
  int max_sum = curr_sum;
  for (int i = 1; i < numsSize; i++)
  {
    if (nums[i] > nums[i - 1])
      curr_sum += nums[i];
    else
      curr_sum = nums[i];
    max_sum = (max_sum > curr_sum) ? max_sum : curr_sum;
  }
  return max_sum;
}
int main()
{
  int nums[] = {12, 17, 15, 13, 10, 11, 12}; // Test case
  // int nums[] = {100,10,1};  // Test case
  // int nums[] = {6};  // Test case
  // int nums[] = {12,17,17};  // Test case

  int numsSize = sizeof(nums) / sizeof(nums[0]);

  int result = maxAscendingSum(nums, numsSize);
  printf("Maximum Ascending subArray sum: %d\n", result);
  return 0;
}
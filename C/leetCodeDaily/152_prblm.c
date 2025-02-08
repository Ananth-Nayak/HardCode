#include <stdio.h>

int maxProduct(int *nums, int numsSize)
{
  if (numsSize == 0)
    return 0;

  int maxProduct = nums[0], minProduct = nums[0], globalMax = nums[0];

  for (int i = 1; i < numsSize; i++)
  {
    // If nums[i] is negative, swap maxProduct and minProduct
    if (nums[i] < 0)
    {
      int temp = maxProduct;
      maxProduct = minProduct;
      minProduct = temp;
    }

    // Update max and min products
    maxProduct = (nums[i] > maxProduct * nums[i]) ? nums[i] : maxProduct * nums[i];
    minProduct = (nums[i] < minProduct * nums[i]) ? nums[i] : minProduct * nums[i];

    // Update global maximum product
    if (maxProduct > globalMax)
    {
      globalMax = maxProduct;
    }
  }
  return globalMax;
}

// Driver code
int main()
{
  int nums[] = {2, 3, -2, 4};
  int size = sizeof(nums) / sizeof(nums[0]);

  printf("Maximum product subarray: %d\n", maxProduct(nums, size));
  return 0;
}

#include <stdio.h>

int isEven(int num)
{
  if (num % 2 == 0)
    return 0;
  else
    return 1;
}

int isArraySpecial(int *nums, int numsSize)
{
  if (numsSize == 1)
    return 0;

  for (int i = 1; i < numsSize; i++)
  {
    if (isEven(nums[i - 1]) == isEven(nums[i]))
    {
      return 0;
    }
  }

  return 1;
}

int main()
{
  // int nums[1] = {1};
  // int nums[3] = {2,1,4};
  int nums[4] = {4, 3, 1, 6};
  int size = sizeof(nums) / sizeof(nums[0]);
  print(isArraySpecial(nums, size));

  return 0;
}
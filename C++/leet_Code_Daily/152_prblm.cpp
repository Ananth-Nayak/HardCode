#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxProduct(vector<int> &nums)
{
  if (nums.empty())
    return 0;

  int maxProduct = nums[0], minProduct = nums[0], globalMax = nums[0];

  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i] < 0)
      swap(maxProduct, minProduct); // Swap when multiplying by negative

    maxProduct = max(nums[i], maxProduct * nums[i]);
    minProduct = min(nums[i], minProduct * nums[i]);

    globalMax = max(globalMax, maxProduct);
  }

  return globalMax;
}

// Driver code
int main()
{
  vector<int> nums = {2, 3, -2, 4};
  cout << "Maximum product subarray: " << maxProduct(nums) << endl;
  return 0;
}

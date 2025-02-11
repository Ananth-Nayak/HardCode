#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int numSubarrayProductLessThanK(vector<int> &nums, int k)
  {
    if (k <= 1)
      return 0; // Edge case fix

    int left = 0, product = 1, count = 0;

    for (int right = 0; right < nums.size(); right++)
    {
      product *= nums[right]; // Expand window

      // If product is too large, reduce window from left
      while (product >= k)
      {
        product /= nums[left];
        left++;
      }

      // Count valid subarrays ending at 'right'
      count += (right - left + 1);
    }
    return count;
  }
};

// Driver code
int main()
{
  Solution sol;
  vector<int> nums = {10, 5, 2, 6};
  int k = 100;
  cout << "Valid subarrays count: " << sol.numSubarrayProductLessThanK(nums, k) << endl;

  return 0;
}

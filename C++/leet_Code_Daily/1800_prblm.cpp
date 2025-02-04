#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int maxAscendingSum(vector<int> &nums)
  {
    int n = nums.size();
    if (n == 1)
      return nums[0];

    int curr_sum = nums[0], max_sum = curr_sum;

    for (int i = 1; i < n; i++)
    {
      if (nums[i] > nums[i - 1])
      {
        curr_sum += nums[i]; // Extend the subarray
      }
      else
      {
        curr_sum = nums[i]; // Start new subarray
      }
      max_sum = max(max_sum, curr_sum);
    }

    return max_sum;
  }
};

int main()
{
  Solution sol;
  vector<int> nums = {12, 17, 15, 13, 10, 11, 12};
  cout << "Maximum Ascending subArray sum: " << sol.maxAscendingSum(nums) << endl;
  return 0;
}

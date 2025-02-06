#include <iostream>
#include <vector>
#include <algorithm> // For max function
using namespace std;

class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    // Initialize current sum and max sum with the first element
    int currentSum = nums[0];
    int maxSum = nums[0];

    // Traverse the array from index 1
    for (int i = 1; i < nums.size(); i++)
    {
      // Choose between starting fresh or extending the subarray
      currentSum = max(nums[i], currentSum + nums[i]);

      // Update maxSum if the new currentSum is larger
      maxSum = max(maxSum, currentSum);
    }

    return maxSum; // Return the maximum subarray sum
  }
};

// Example usage:
int main()
{
  Solution sol;
  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  cout << "Maximum Subarray Sum: " << sol.maxSubArray(nums) << endl; // Output: 6
  return 0;
}

#include <iostream>
#include <vector>
#include <algorithm> // For max()

using namespace std;

class Solution
{
public:
  int longestMonotonicSubarray(vector<int> &nums)
  {
    int n = nums.size();
    if (n == 1)
      return 1; // Edge case: single element array

    int inc = 1, dec = 1, ans = 1;

    for (int i = 1; i < n; i++)
    {
      if (nums[i] > nums[i - 1])
      {
        inc++;
        dec = 1; // Reset decreasing count
      }
      else if (nums[i] < nums[i - 1])
      {
        dec++;
        inc = 1; // Reset increasing count
      }
      else
      {
        inc = dec = 1; // Reset both if elements are equal
      }

      ans = max({ans, inc, dec});
    }

    return ans;
  }
};

// Test function
int main()
{
  Solution sol;
  vector<int> nums = {3, 2, 1}; // Test case

  int result = sol.longestMonotonicSubarray(nums);
  cout << "Longest Monotonic Subarray Length: " << result << endl;

  return 0;
}

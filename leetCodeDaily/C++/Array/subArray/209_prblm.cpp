#include <iostream>
#include <vector>
#include <climits> // For INT_MAX

using namespace std;

int minSubArrayLen(int target, vector<int> &nums)
{
  int left = 0, sum = 0, min_length = INT_MAX;

  // Expand window with `right` pointer
  for (int right = 0; right < nums.size(); right++)
  {
    sum += nums[right]; // Add element to window

    // Shrink window while sum >= target
    while (sum >= target)
    {
      min_length = min(min_length, right - left + 1);
      sum -= nums[left]; // Remove `nums[left]` from window
      left++;            // Move left pointer
    }
  }

  return (min_length == INT_MAX) ? 0 : min_length;
}

// Driver code
int main()
{
  vector<int> nums = {1, 2, 3, 4, 5};
  int target = 11;

  cout << "Minimum subarray length: " << minSubArrayLen(target, nums) << endl;
  return 0;
}

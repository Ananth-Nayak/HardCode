#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  bool check(vector<int> &nums)
  {
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
      // Use modulo to wrap around to the beginning of the array
      if (nums[i] > nums[(i + 1) % n])
      {
        count++;
      }
    }
    return count <= 1;
  }
};

int main()
{
  Solution sol;

  vector<int> nums1 = {4, 5, 1, 2, 3}; // Expected output: true
  vector<int> nums2 = {3, 5, 1, 4, 2}; // Expected output: false

  cout << boolalpha; // Print boolean values as "true"/"false"
  cout << "nums1 is a rotated sorted array: " << sol.check(nums1) << "\n";
  cout << "nums2 is a rotated sorted array: " << sol.check(nums2) << "\n";

  return 0;
}

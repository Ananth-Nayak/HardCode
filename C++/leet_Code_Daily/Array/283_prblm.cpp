#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  void moveZeroes(vector<int> &nums)
  {
    int index = 0; // Pointer to track the next non-zero element position

    // Move all non-zero elements to the front
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] != 0)
      {
        nums[index] = nums[i]; // Place the non-zero element at the correct position
        index++;               // Move the pointer forward
      }
    }

    // Fill the remaining positions with zeroes
    while (index < nums.size())
    {
      nums[index] = 0;
      index++;
    }
  }
};

int main()
{
  vector<int> nums = {0, 1, 0, 3, 12};

  Solution sol;
  sol.moveZeroes(nums);

  // Print the modified array
  cout << "Modified array: ";
  for (int num : nums)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
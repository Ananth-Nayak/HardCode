#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    if (nums.empty())
      return 0; // Handle empty array

    int i = 0; // Pointer to track unique elements

    // Iterate through the array
    for (int j = 1; j < nums.size(); j++)
    {
      if (nums[j] != nums[i])
      {                    // If a new unique element is found
        i++;               // Move the unique position forward
        nums[i] = nums[j]; // Store the new unique element
      }
    }

    return i + 1; // Return the new length
  }
};

int main()
{
  vector<int> nums = {0, 0, 1, 1, 2, 2, 3, 3, 4};

  Solution sol;
  int newLength = sol.removeDuplicates(nums);

  // Print the modified array
  cout << "New length: " << newLength << endl;
  cout << "Modified array: ";
  for (int i = 0; i < newLength; i++)
  {
    cout << nums[i] << " ";
  }
  cout << endl;

  return 0;
}

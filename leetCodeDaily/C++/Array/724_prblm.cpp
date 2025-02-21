#include <iostream>
#include <vector>

using namespace std;

/**
 * Function to find the pivot index.
 * @param nums - Input vector of integers
 * @return The pivot index if found, otherwise -1
 */
int pivotIndex(vector<int> &nums)
{
  int totalSum = 0, leftSum = 0;

  // Calculate total sum of array
  for (int num : nums)
  {
    totalSum += num;
  }

  // Traverse the array to find pivot index
  for (int i = 0; i < nums.size(); i++)
  {
    // Right sum = totalSum - leftSum - nums[i]
    if (leftSum == totalSum - leftSum - nums[i])
    {
      return i; // Pivot index found
    }
    leftSum += nums[i]; // Update left sum
  }

  return -1; // No pivot index found
}

// Driver function to test the pivotIndex function
int main()
{
  vector<int> nums = {1, 7, 3, 6, 5, 6}; // Example input array

  int pivot = pivotIndex(nums);
  cout << "Pivot Index: " << pivot << endl;

  return 0;
}

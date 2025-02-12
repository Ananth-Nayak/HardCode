#include <iostream>
#include <vector>

using namespace std;

/**
 * Function to compute the running sum of an array.
 * @param nums - Input vector of integers
 * @return A new vector containing the running sum of nums
 */
vector<int> runningSum(vector<int> &nums)
{
  int n = nums.size();   // Get the size of the input array
  vector<int> result(n); // Create an output vector of the same size

  // Initialize the first element of the running sum
  result[0] = nums[0];

  // Compute the running sum iteratively
  for (int i = 1; i < n; i++)
  {
    result[i] = result[i - 1] + nums[i];
  }

  return result;
}

// Driver function to test the runningSum function
int main()
{
  vector<int> nums = {1, 2, 3, 4, 5}; // Example input array

  // Call the runningSum function
  vector<int> result = runningSum(nums);

  // Print the resulting running sum array
  cout << "Running Sum: ";
  for (int num : result)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}

#include <iostream>
#include <vector>

using namespace std;

/**
 * QuickSort function to sort the array
 */
void quickSort(vector<int> &nums, int left, int right)
{
  if (left >= right)
    return; // Base condition

  int pivot = nums[right]; // Choose last element as pivot
  int i = left - 1;

  for (int j = left; j < right; j++)
  {
    if (nums[j] < pivot)
    {
      i++;
      swap(nums[i], nums[j]); // Swap nums[i] and nums[j]
    }
  }

  // Swap pivot into its correct position
  swap(nums[i + 1], nums[right]);
  int pivotIndex = i + 1;

  // Recursively sort left and right parts
  quickSort(nums, left, pivotIndex - 1);
  quickSort(nums, pivotIndex + 1, right);
}

/**
 * Function to check if array contains duplicate
 */
bool containsDuplicate(vector<int> &nums)
{
  // Step 1: Sort the array
  quickSort(nums, 0, nums.size() - 1);

  // Step 2: Check adjacent elements for duplicates
  for (int i = 1; i < nums.size(); i++)
  {
    if (nums[i] == nums[i - 1])
    {
      return true; // Duplicate found
    }
  }

  return false; // No duplicates
}

// Driver function to test the containsDuplicate function
int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 6, 1}; // Example input

  if (containsDuplicate(nums))
  {
    cout << "True" << endl;
  }
  else
  {
    cout << "False" << endl;
  }

  return 0;
}

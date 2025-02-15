#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
  // Sort both arrays
  sort(nums1.begin(), nums1.end());
  sort(nums2.begin(), nums2.end());

  vector<int> result;
  int i = 0, j = 0;

  // Two-pointer approach
  while (i < nums1.size() && j < nums2.size())
  {
    if (nums1[i] < nums2[j])
    {
      i++;
    }
    else if (nums1[i] > nums2[j])
    {
      j++;
    }
    else
    {
      result.push_back(nums1[i]);
      i++;
      j++;
    }
  }
  return result;
}

// Driver function
int main()
{
  vector<int> nums1 = {4, 9, 5};
  vector<int> nums2 = {9, 4, 9, 8, 4};

  vector<int> result = intersect(nums1, nums2);

  cout << "Intersection: ";
  for (int num : result)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}

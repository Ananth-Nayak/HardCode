#include <iostream>
#include <vector>

using namespace std;

int numOfSubarrays(vector<int> &arr, int k, int threshold)
{
  int ans = 0, sum = 0;
  int i = 0, j = 0;

  while (j < arr.size())
  {
    sum += arr[j]; // Add current element to sum
    j++;

    // When window reaches size `k`
    if (j - i == k)
    {
      int avg = sum / k; // Calculate the average
      if (avg >= threshold)
        ans++;       // If condition is met, increment count
      sum -= arr[i]; // Remove the first element of the window
      i++;           // Slide the window
    }
  }

  return ans;
}

// Driver Code
int main()
{
  vector<int> arr = {2, 1, 3, 4, 1, 2, 5, 6};
  int k = 3, threshold = 3;

  cout << "Number of valid subarrays: " << numOfSubarrays(arr, k, threshold) << endl;
  return 0;
}

// there is still space for optimization

// Avoids sum / k division	======> Faster integer comparison (sum >= k * threshold)
// Uses a for loop	Cleaner and more readable
// Starts with first k elements precomputed	Reduces unnecessary if checks

// optimized version

// int numOfSubarrays(vector<int>& arr, int k, int threshold) {
//   int ans = 0, sum = 0;

//   // Initialize the first window sum
//   for (int i = 0; i < k; i++) {
//       sum += arr[i];
//   }

//   // Check if the first window satisfies the condition
//   if (sum >= k * threshold) ans++;

//   // Slide the window across the array
//   for (int i = k; i < arr.size(); i++) {
//       sum += arr[i];      // Add new element
//       sum -= arr[i - k];  // Remove old element

//       // Check if this new window satisfies the condition
//       if (sum >= k * threshold) ans++;
//   }

//   return ans;
// }

#include <stdio.h>

// simple solution using sliding window
int numOfSubarrays(int *arr, int arrSize, int k, int threshold)
{
  int ans = 0, sum = 0;
  int i = 0, j = 0;

  while (j < arrSize)
  {
    sum += arr[j]; // Add the current element to sum
    j++;

    // When we reach a window of size `k`
    if (j - i == k)
    {
      int avg = sum / k; // Compute the average
      if (avg >= threshold)
        ans++;       // If avg meets the threshold, increment count
      sum -= arr[i]; // Remove the first element of the window
      i++;           // Slide the window forward
    }
  }

  return ans;
}

// Driver code
int main()
{
  int arr[] = {2, 1, 3, 4, 1, 2, 5, 6};
  int arrSize = sizeof(arr) / sizeof(arr[0]);
  int k = 3, threshold = 3;

  printf("Number of valid subarrays: %d\n", numOfSubarrays(arr, arrSize, k, threshold));
  return 0;
}

// there is still space for optimization

// Avoids sum / k division	======> Faster integer comparison (sum >= k * threshold)
// Uses a for loop	Cleaner and more readable
// Starts with first k elements precomputed	Reduces unnecessary if checks

// optimized version
//  int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
//    int ans = 0, sum = 0;

//   // Compute sum of the first `k` elements to initialize the first window
//   for (int i = 0; i < k; i++) {
//       sum += arr[i];
//   }

//   // If the first window meets the threshold, count it
//   if (sum >= k * threshold) ans++;

//   // Sliding window approach: process the rest of the array
//   for (int i = k; i < arrSize; i++) {
//       sum += arr[i];       // Add the new element to the sum
//       sum -= arr[i - k];   // Remove the oldest element from the sum

//       // If the new window meets the threshold, increment the count
//       if (sum >= k * threshold) ans++;
//   }

//   return ans;
// }

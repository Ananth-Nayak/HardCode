var numOfSubarrays = function (arr, k, threshold) {
  let ans = 0,
    sum = 0;
  let i = 0,
    j = 0;

  while (j < arr.length) {
    sum += arr[j]; // Add current element to sum
    j++;

    // When window reaches size `k`
    if (j - i === k) {
      let avg = sum / k; // Calculate the average
      if (avg >= threshold) ans++; // If condition met, increment count
      sum -= arr[i]; // Remove the first element of the window
      i++; // Slide the window
    }
  }

  return ans;
};

// Driver Code
const arr = [2, 1, 3, 4, 1, 2, 5, 6];
const k = 3,
  threshold = 3;
console.log("Number of valid subarrays:", numOfSubarrays(arr, k, threshold));

// there is still space for optimization

// Avoids sum / k division	======> Faster integer comparison (sum >= k * threshold)
// Uses a for loop	Cleaner and more readable
// Starts with first k elements precomputed	Reduces unnecessary if checks

// optimized version

// var numOfSubarrays = function(arr, k, threshold) {
//   let ans = 0, sum = 0;

//   // Initialize first window sum
//   for (let i = 0; i < k; i++) {
//       sum += arr[i];
//   }

//   // Check if first window satisfies the condition
//   if (sum >= k * threshold) ans++;

//   // Slide the window across the array
//   for (let i = k; i < arr.length; i++) {
//       sum += arr[i];       // Add new element
//       sum -= arr[i - k];   // Remove old element

//       // Check if new window satisfies condition
//       if (sum >= k * threshold) ans++;
//   }

//   return ans;
// };

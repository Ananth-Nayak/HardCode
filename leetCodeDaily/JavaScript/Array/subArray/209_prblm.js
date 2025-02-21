function minSubArrayLen(target, nums) {
  let left = 0; // Left pointer for the sliding window
  let sum = 0; // Current sum of the window
  let minLength = Infinity; // Store the minimum length

  // Expand window using the `right` pointer
  for (let right = 0; right < nums.length; right++) {
    sum += nums[right]; // Add `nums[right]` to the window

    // Shrink the window while `sum >= target`
    while (sum >= target) {
      minLength = Math.min(minLength, right - left + 1);
      sum -= nums[left]; // Remove `nums[left]` from sum
      left++; // Move left pointer forward
    }
  }

  // Return 0 if no valid subarray is found, otherwise return minLength
  return minLength === Infinity ? 0 : minLength;
}

// Example usage
const nums = [1, 2, 3, 4, 5];
const target = 11;

console.log("Minimum subarray length:", minSubArrayLen(target, nums));

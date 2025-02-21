var numSubarrayProductLessThanK = function (nums, k) {
  if (k <= 1) return 0; // Edge case fix

  let left = 0,
    product = 1,
    count = 0;

  for (let right = 0; right < nums.length; right++) {
    product *= nums[right]; // Expand window

    // Shrink window if product exceeds k
    while (product >= k) {
      product /= nums[left];
      left++;
    }

    // Count all valid subarrays ending at 'right'
    count += right - left + 1;
  }
  return count;
};

// Driver code
console.log(numSubarrayProductLessThanK([10, 5, 2, 6], 100)); // Output: 8

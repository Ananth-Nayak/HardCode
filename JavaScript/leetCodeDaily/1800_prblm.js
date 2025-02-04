var maxAscendingSum = function (nums) {
  let n = nums.length;
  if (n === 1) return nums[0]; // Handle single-element case

  let curr_sum = nums[0];
  let max_sum = curr_sum;

  for (let i = 1; i < n; i++) {
    if (nums[i] > nums[i - 1]) {
      curr_sum += nums[i]; // Extend the current subarray
    } else {
      curr_sum = nums[i]; // Start a new subarray
    }
    max_sum = Math.max(max_sum, curr_sum);
  }

  return max_sum;
};

// Test case
console.log(maxAscendingSum([12, 17, 15, 13, 10, 11, 12])); // Output: 29
console.log(maxAscendingSum([100, 10, 1])); // Output: 100
console.log(maxAscendingSum([6])); // Output: 6
console.log(maxAscendingSum([12, 17, 17])); // Output: 17

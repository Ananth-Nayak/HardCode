/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
  // Initialize current sum and max sum with the first element
  let currentSum = nums[0];
  let maxSum = nums[0];

  // Loop through the array starting from index 1
  for (let i = 1; i < nums.length; i++) {
    // Either start a new subarray or extend the current one
    currentSum = Math.max(nums[i], currentSum + nums[i]);

    // Update maxSum if the currentSum is greater
    maxSum = Math.max(maxSum, currentSum);
  }

  return maxSum; // Return the maximum sum found
};

// Example usage:
console.log(maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4])); // Output: 6

var longestMonotonicSubarray = function (nums) {
  let n = nums.length;
  if (n === 1) return 1; // Edge case: single element array

  let inc = 1,
    dec = 1,
    ans = 1;

  for (let i = 1; i < n; i++) {
    if (nums[i] > nums[i - 1]) {
      inc++;
      dec = 1; // Reset decreasing count
    } else if (nums[i] < nums[i - 1]) {
      dec++;
      inc = 1; // Reset increasing count
    } else {
      inc = dec = 1; // Reset both if elements are equal
    }

    ans = Math.max(ans, inc, dec);
  }

  return ans;
};

// Test cases
console.log(longestMonotonicSubarray([3, 2, 1])); // Output: 3
console.log(longestMonotonicSubarray([1, 2, 3, 4, 5])); // Output: 5
console.log(longestMonotonicSubarray([5, 4, 3, 2, 1])); // Output: 5
console.log(longestMonotonicSubarray([1, 2, 1, 2, 1])); // Output: 2
console.log(longestMonotonicSubarray([10, 20, 30, 25, 15, 5, 1, 3, 4])); // Output: 4
console.log(longestMonotonicSubarray([1, 1, 1, 1])); // Output: 1

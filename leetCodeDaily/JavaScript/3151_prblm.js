// // An array is considered special if every pair of its adjacent elements contains two numbers with different parity.

// You are given an array of integers nums. Return true if nums is a special array, otherwise, return false.

// Example 1:

// Input: nums = [1]

// Output: true

// Explanation:

// There is only one element. So the answer is true.

// Example 2:

// Input: nums = [2,1,4]

// Output: true

// Explanation:

// There is only two pairs: (2,1) and (1,4), and both of them contain numbers with different parity. So the answer is true.

// Example 3:

// Input: nums = [4,3,1,6]

// Output: false

// Explanation:

// nums[1] and nums[2] are both odd. So the answer is false.

var isArraySpecial = function (nums) {
  const isEven = (num) => num % 2 === 0; // Helper function to check if a number is even
  const N = nums.length;

  for (let i = 1; i < N; i++) {
    const isPreviousNumberEven = isEven(nums[i - 1]),
      isCurrentNumberEven = isEven(nums[i]);

    // If two consecutive numbers have the same parity, return false
    if (isPreviousNumberEven === isCurrentNumberEven) {
      return false;
    }
  }

  return true; // Return true if all adjacent numbers alternate in parity
};

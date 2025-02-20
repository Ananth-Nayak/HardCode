/**
 * Function to move all zeroes to the end of the array while maintaining the relative order of non-zero elements.
 * @param {number[]} nums - Input array.
 */
var moveZeroes = function (nums) {
  let index = 0; // Pointer to track the next non-zero element position

  // Move all non-zero elements to the front
  for (let i = 0; i < nums.length; i++) {
    if (nums[i] !== 0) {
      nums[index] = nums[i]; // Place the non-zero element at the correct position
      index++; // Move the pointer forward
    }
  }

  // Fill the remaining positions with zeroes
  while (index < nums.length) {
    nums[index] = 0;
    index++;
  }
};

// Test the function
let nums = [0, 1, 0, 3, 12];
moveZeroes(nums);

// Print the modified array
console.log("Modified array:", nums);

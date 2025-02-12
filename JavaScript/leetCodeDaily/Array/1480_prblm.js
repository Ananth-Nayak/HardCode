/**
 * Function to compute the running sum of an array.
 * @param {number[]} nums - Input array
 * @return {number[]} - A new array containing the running sum of nums
 */
function runningSum(nums) {
  let result = new Array(nums.length); // Create an output array of the same length

  // Initialize the first element of the running sum
  result[0] = nums[0];

  // Compute the running sum iteratively
  for (let i = 1; i < nums.length; i++) {
    result[i] = result[i - 1] + nums[i];
  }

  return result;
}

// Driver function to test the runningSum function
const nums = [1, 2, 3, 4, 5]; // Example input array

// Call the runningSum function
const result = runningSum(nums);

// Print the resulting running sum array
console.log("Running Sum:", result);

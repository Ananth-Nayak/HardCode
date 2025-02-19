/**
 * Function to remove duplicates from a sorted array in-place.
 * @param {number[]} nums - Input sorted array.
 * @return {number} - The new length of the modified array without duplicates.
 */
var removeDuplicates = function (nums) {
  if (nums.length === 0) return 0; // Handle empty array

  let i = 0; // Pointer to track unique elements

  // Iterate through the array
  for (let j = 1; j < nums.length; j++) {
    if (nums[j] !== nums[i]) {
      // If a new unique element is found
      i++; // Move the unique position forward
      nums[i] = nums[j]; // Store the new unique element
    }
  }

  return i + 1; // Return the new length
};

// Test the function
let nums = [0, 0, 1, 1, 2, 2, 3, 3, 4];
let newLength = removeDuplicates(nums);

// Print the modified array
console.log("New length:", newLength);
console.log("Modified array:", nums.slice(0, newLength));

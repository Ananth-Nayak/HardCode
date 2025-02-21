/**
 * Function to find the pivot index.
 * @param {number[]} nums - Input array
 * @return {number} - The pivot index if found, otherwise -1
 */
function pivotIndex(nums) {
  let totalSum = nums.reduce((acc, num) => acc + num, 0); // Calculate total sum
  let leftSum = 0;

  // Traverse the array to find pivot index
  for (let i = 0; i < nums.length; i++) {
    // Right sum = totalSum - leftSum - nums[i]
    if (leftSum === totalSum - leftSum - nums[i]) {
      return i; // Pivot index found
    }
    leftSum += nums[i]; // Update left sum
  }

  return -1; // No pivot index found
}

// Driver function to test the pivotIndex function
const nums = [1, 7, 3, 6, 5, 6]; // Example input array
console.log("Pivot Index:", pivotIndex(nums));

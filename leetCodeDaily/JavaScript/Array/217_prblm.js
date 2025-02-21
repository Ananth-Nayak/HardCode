/**
 * QuickSort function to sort the array
 */
function quickSort(nums, left, right) {
  if (left >= right) return;

  let pivot = nums[right]; // Choose last element as pivot
  let i = left - 1;

  for (let j = left; j < right; j++) {
    if (nums[j] < pivot) {
      i++;
      [nums[i], nums[j]] = [nums[j], nums[i]]; // Swap nums[i] and nums[j]
    }
  }

  // Swap pivot into its correct position
  [nums[i + 1], nums[right]] = [nums[right], nums[i + 1]];
  let pivotIndex = i + 1;

  // Recursively sort left and right parts
  quickSort(nums, left, pivotIndex - 1);
  quickSort(nums, pivotIndex + 1, right);
}

/**
 * Function to check if array contains duplicate
 */
function containsDuplicate(nums) {
  // Step 1: Sort the array
  quickSort(nums, 0, nums.length - 1);

  // Step 2: Check adjacent elements for duplicates
  for (let i = 1; i < nums.length; i++) {
    if (nums[i] === nums[i - 1]) {
      return true; // Duplicate found
    }
  }

  return false; // No duplicates
}

// Driver function to test the containsDuplicate function
const nums = [1, 2, 3, 4, 5, 6, 1]; // Example input
console.log(containsDuplicate(nums)); // Expected Output: true

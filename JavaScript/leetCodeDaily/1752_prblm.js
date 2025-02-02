/**
 * Returns true if the given array is a rotated sorted array.
 * @param {number[]} nums - The input array.
 * @return {boolean}
 */
function check(nums) {
  let count = 0;
  const n = nums.length;
  for (let i = 0; i < n; i++) {
    // Compare current element with the next element (wrapping around)
    if (nums[i] > nums[(i + 1) % n]) {
      count++;
    }
  }
  return count <= 1;
}

// Example usage:
const nums1 = [4, 5, 1, 2, 3]; // true: rotated sorted array.
const nums2 = [3, 5, 1, 4, 2]; // false: not a rotated sorted array.
console.log(check(nums1)); // Output: true
console.log(check(nums2)); // Output: false

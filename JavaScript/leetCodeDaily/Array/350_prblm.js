function intersect(nums1, nums2) {
  // Sort both arrays
  nums1.sort((a, b) => a - b);
  nums2.sort((a, b) => a - b);

  let result = [];
  let i = 0,
    j = 0;

  // Two-pointer approach
  while (i < nums1.length && j < nums2.length) {
    if (nums1[i] < nums2[j]) {
      i++;
    } else if (nums1[i] > nums2[j]) {
      j++;
    } else {
      result.push(nums1[i]);
      i++;
      j++;
    }
  }
  return result;
}

// Driver function
let nums1 = [4, 9, 5];
let nums2 = [9, 4, 9, 8, 4];

console.log("Intersection:", intersect(nums1, nums2));

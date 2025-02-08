var maxProduct = function (nums) {
  if (nums.length === 0) return 0;

  let maxProduct = nums[0],
    minProduct = nums[0],
    globalMax = nums[0];

  for (let i = 1; i < nums.length; i++) {
    if (nums[i] < 0) [maxProduct, minProduct] = [minProduct, maxProduct]; // Swap

    maxProduct = Math.max(nums[i], maxProduct * nums[i]);
    minProduct = Math.min(nums[i], minProduct * nums[i]);

    globalMax = Math.max(globalMax, maxProduct);
  }

  return globalMax;
};

// Example usage
const nums = [2, 3, -2, 4];
console.log("Maximum product subarray:", maxProduct(nums));

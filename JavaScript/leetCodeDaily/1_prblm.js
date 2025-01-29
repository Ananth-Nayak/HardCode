// leetcode problem number 1:- Two sum
var twoSum = function (nums, target) {
  let n = nums.length;
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; i < n; i++) {
      if (target == nums[i] + nums[j]) {
        return [i, j];
      }
    }
  }
};

// test cases
// nums = [2,7,11,15] target = 9 expected = [0,1]
// nums = [3,2,4] target = 6 expected = [1,2]

// other solutions

// // solution 2
// var twoSum = function(nums, target) {
//   const pairIdx = {};

//   for (let i = 0; i < nums.length; i++) {
//       const num = nums[i];
//       if (target - num in pairIdx) {
//           return [i, pairIdx[target - num]];
//       }
//       pairIdx[num] = i;
//   }
// };

// // solution 3
// var twoSum = function(nums, target) {
//   const numMap = new Map(); // Or: const numMap = {};  Use a Map or object

//   for (let i = 0; i < nums.length; i++) {
//       const complement = target - nums[i];
//       if (numMap.has(complement)) { // Or: if (numMap[complement] !== undefined)
//           return [numMap.get(complement), i]; // Or: return [numMap[complement], i];
//       }
//       numMap.set(nums[i], i); // Or: numMap[nums[i]] = i;
//   }

//   // If no solution is found (which shouldn't happen based on problem constraints)
//   return []; // Or throw an error if you prefer
// };

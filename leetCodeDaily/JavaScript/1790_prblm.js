/**
 * Function to check if s1 and s2 can be made equal by swapping one pair of characters
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
var areAlmostEqual = function (s1, s2) {
  let first = -1,
    second = -1,
    count = 0;

  // Iterate through the string to find mismatched positions
  for (let i = 0; i < s1.length; i++) {
    if (s1[i] !== s2[i]) {
      count++;
      // Store first mismatch
      if (count === 1) first = i;
      // Store second mismatch
      else if (count === 2) second = i;
      // More than 2 mismatches means swap is not possible
      else return false;
    }
  }

  // Either the strings are already equal, or a single swap can fix them
  return (
    count === 0 ||
    (count === 2 && s1[first] === s2[second] && s1[second] === s2[first])
  );
};

// Test Case
let s1 = "bank";
let s2 = "kanb";
// Expected output: true (Swapping 'b' and 'k' makes s1 == s2)

console.log(`s1: "${s1}", s2: "${s2}" → ${areAlmostEqual(s1, s2)}`);

/*
Other test cases:
console.log(areAlmostEqual("attack", "defend")); // Expected: false (More than two mismatches)
console.log(areAlmostEqual("abcd", "abcd")); // Expected: true (Already equal)
console.log(areAlmostEqual("abc", "acb")); // Expected: true (Swapping 'b' and 'c' fixes it)
console.log(areAlmostEqual("abcd", "dcba")); // Expected: false (Needs multiple swaps)
*/

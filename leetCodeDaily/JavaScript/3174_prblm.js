var clearDigits = function (s) {
  let stack = []; // Using an array as a stack

  for (let char of s) {
    if (/\d/.test(char)) {
      // If it's a digit, remove the last added character
      stack.pop();
    } else {
      stack.push(char); // Push valid characters
    }
  }
  return stack.join(""); // Convert array back to string
};

// Test case
console.log(clearDigits("abc3de5fg")); // Output: "abdfg"

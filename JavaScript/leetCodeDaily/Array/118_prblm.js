// Function to generate Pascal's Triangle
function generate(numRows) {
  let triangle = [];

  for (let i = 0; i < numRows; i++) {
    triangle[i] = new Array(i + 1).fill(1); // Create row and fill with 1s

    // Compute inner elements
    for (let j = 1; j < i; j++) {
      triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
    }
  }
  return triangle;
}

// Driver function to test
let numRows = 5;
let result = generate(numRows);

// Print Pascal's Triangle
result.forEach((row) => console.log(row.join(" ")));

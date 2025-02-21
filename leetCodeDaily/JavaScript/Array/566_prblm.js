var matrixReshape = function (mat, r, c) {
  let m = mat.length,
    n = mat[0].length;

  // If reshape is not possible, return the original matrix
  if (m * n !== r * c) return mat;

  // Create a new matrix of size r x c
  let reshaped = new Array(r).fill(0).map(() => new Array(c));

  // Fill new matrix using 1D index
  for (let i = 0; i < m * n; i++) {
    reshaped[Math.floor(i / c)][i % c] = mat[Math.floor(i / n)][i % n];
  }

  return reshaped;
};

// Driver code
let mat = [
  [1, 2],
  [3, 4],
];
let r = 1,
  c = 4;

console.log("Reshaped Matrix:", matrixReshape(mat, r, c));

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
  int m = mat.size(), n = mat[0].size();

  // If reshape is not possible, return original matrix
  if (m * n != r * c)
    return mat;

  // Create a new matrix with r x c dimensions
  vector<vector<int>> reshaped(r, vector<int>(c));

  // Fill the new matrix using a single index i
  for (int i = 0; i < m * n; i++)
  {
    reshaped[i / c][i % c] = mat[i / n][i % n];
  }

  return reshaped;
}

// Driver code
int main()
{
  vector<vector<int>> mat = {{1, 2}, {3, 4}};
  int r = 1, c = 4;

  vector<vector<int>> reshaped = matrixReshape(mat, r, c);

  cout << "Reshaped Matrix:\n";
  for (auto row : reshaped)
  {
    for (auto num : row)
    {
      cout << num << " ";
    }
    cout << endl;
  }
  return 0;
}

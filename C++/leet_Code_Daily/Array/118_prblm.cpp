#include <iostream>
#include <vector>
using namespace std;

// Function to generate Pascal's Triangle
vector<vector<int>> generate(int numRows)
{
  vector<vector<int>> triangle(numRows);

  for (int i = 0; i < numRows; i++)
  {
    triangle[i].resize(i + 1, 1); // Resize row to fit elements, set all to 1

    // Compute inner elements
    for (int j = 1; j < i; j++)
    {
      triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
    }
  }
  return triangle;
}

// Driver function to test
int main()
{
  int numRows = 5;
  vector<vector<int>> result = generate(numRows);

  // Print Pascal's Triangle
  for (const auto &row : result)
  {
    for (int num : row)
    {
      cout << num << " ";
    }
    cout << endl;
  }
  return 0;
}

#include <iostream>
using namespace std;

class Solution
{
public:
  string clearDigits(string s)
  {
    int j = 0; // Acts as the position for valid characters
    for (char c : s)
    {
      if (isdigit(c))
      {
        // If it's a digit, remove the last added character
        j = max(0, j - 1);
      }
      else
      {
        s[j++] = c; // Place valid characters at the correct position
      }
    }
    return s.substr(0, j); // Return the valid part of the string
  }
};

// Driver code
int main()
{
  Solution sol;
  string s = "abc3de5fg";             // Example Input
  cout << sol.clearDigits(s) << endl; // Output: "abdfg"
  return 0;
}

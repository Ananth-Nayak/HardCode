#include <iostream>
using namespace std;

class Solution
{
public:
  // Function to check if swapping at most one pair makes the strings equal
  bool areAlmostEqual(string s1, string s2)
  {
    int first = -1, second = -1, count = 0;

    // Iterate through both strings
    for (int i = 0; i < s1.length(); i++)
    {
      if (s1[i] != s2[i])
      {
        count++;
        // Store the first mismatch index
        if (count == 1)
          first = i;
        // Store the second mismatch index
        else if (count == 2)
          second = i;
        // More than 2 mismatches means swap is not possible
        else
          return false;
      }
    }

    // Either they are already equal or swapping exactly 2 mismatched chars fixes it
    return count == 0 || (count == 2 && s1[first] == s2[second] && s1[second] == s2[first]);
  }
};

int main()
{
  Solution sol;

  // Test Case
  string s1 = "bank";
  string s2 = "kanb";
  // Expected output: true (Swapping 'b' and 'k' makes s1 == s2)

  /*
  Other test cases:
  // string s1 = "attack", s2 = "defend"; // Expected: false (More than two mismatches)
  // string s1 = "abcd", s2 = "abcd"; // Expected: true (Already equal)
  // string s1 = "abc", s2 = "acb"; // Expected: true (Swapping 'b' and 'c' fixes it)
  // string s1 = "abcd", s2 = "dcba"; // Expected: false (Needs multiple swaps)
  */

  cout << "s1: \"" << s1 << "\", s2: \"" << s2 << "\" → " << (sol.areAlmostEqual(s1, s2) ? "true" : "false") << endl;

  return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if s1 and s2 are almost equal by swapping at most one pair
bool areAlmostEqual(char *s1, char *s2)
{
  int len = strlen(s1);
  int first = -1, second = -1, count = 0;

  // Iterate through both strings to find positions where they differ
  for (int i = 0; i < len; i++)
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
      // If there are more than two mismatches, return false
      else
        return false;
    }
  }

  // If no mismatch, strings are already equal
  // If exactly two mismatches, check if swapping fixes it
  return count == 0 || (count == 2 && s1[first] == s2[second] && s1[second] == s2[first]);
}

int main()
{
  // Test Case
  char s1[] = "bank";
  char s2[] = "kanb";
  // Expected output: true (Swapping 'b' and 'k' makes s1 == s2)

  /*
  Other test cases:
  // char s1[] = "attack"; char s2[] = "defend"; // Expected: false (More than two mismatches)
  // char s1[] = "abcd"; char s2[] = "abcd"; // Expected: true (Already equal)
  // char s1[] = "abc"; char s2[] = "acb"; // Expected: true (Swapping 'b' and 'c' fixes it)
  // char s1[] = "abcd"; char s2[] = "dcba"; // Expected: false (Needs multiple swaps)
  */

  bool result = areAlmostEqual(s1, s2);
  printf("s1: \"%s\", s2: \"%s\" → %s\n", s1, s2, result ? "true" : "false");

  return 0;
}

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void clearDigits(char *s)
{
  int j = 0; // Pointer to track valid characters
  for (int i = 0; s[i] != '\0'; i++)
  {
    if (isdigit(s[i]))
    {
      // If it's a digit, remove the last valid character
      j = (j > 0) ? j - 1 : 0;
    }
    else
    {
      s[j++] = s[i]; // Store valid characters
    }
  }
  s[j] = '\0'; // Null-terminate the final result
}

int main()
{
  char s[] = "abc3de5fg"; // Example Input
  clearDigits(s);
  printf("%s\n", s); // Output: "abdfg"
  return 0;
}

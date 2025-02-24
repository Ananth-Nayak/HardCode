// combination of pattern 7 and pattern 8
#include <iostream>
using namespace std;

void pattern9(int N)
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N - i - 1; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    for (int j = 0; j < N - i - 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < (2 * N) - (2 * i + 1); j++)
    {
      cout << "*";
    }
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

int main()
{
  int N;
  cout << "Enter N" << endl;
  cin >> N;
  pattern9(N);

  return 0;
}
#include <iostream>
using namespace std;

void pattern7(int N)
{
  for (int i = 0; i < N; i++)
  {
    // space before star
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // printing star
    for (int j = 0; j < (2 * N) - (2 * i + 1); j++)
    {
      cout << "*";
    }
    // space after star
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
  pattern7(N);

  return 0;
}
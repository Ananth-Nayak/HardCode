#include <iostream>
using namespace std;

void pattern1(int N)
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

int main()
{
  int N;
  cout << "Enter N ";
  cin >> N;
  pattern1(N);

  return 0;
}
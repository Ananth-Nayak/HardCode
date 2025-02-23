#include <iostream>
using namespace std;

void pattern4(int N)
{
  for (int i = 1; i <= N; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << i;
    }
    cout << endl;
  }
}

int main()
{
  int N;
  cout << "Enter N" << endl;
  cin >> N;
  pattern4(N);

  return 0;
}
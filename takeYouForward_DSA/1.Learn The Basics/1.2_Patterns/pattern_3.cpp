#include <iostream>
using namespace std;

void pattern3(int N)
{
  for (int i = 0; i < N; i++)
  {
    int counter = 1;
    for (int j = 0; j <= i; j++)
    {
      cout << counter++ << " ";
    }
    cout << endl;
  }
}

int main()
{
  int N;
  cout << "Enter N" << endl;
  cin >> N;
  pattern3(N);

  return 0;
}
#include <iostream>
using namespace std;

void pattern4(int N)
{
  int counter = 0;
  for (int i = 0; i < N; i++)
  {
    counter++;
    for (int j = 0; j <= i; j++)
    {
      cout << counter;
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
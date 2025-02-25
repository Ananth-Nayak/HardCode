#include <iostream>
using namespace std;

void pattern13(int N)
{
  int k = 1;
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << k << " ";
      k++;
    }
    cout << endl;
  }
}

int main()
{
  int N;
  cout << "Enter N" << endl;
  cin >> N;
  pattern13(N);

  return 0;
}
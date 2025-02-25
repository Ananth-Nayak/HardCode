#include <iostream>
using namespace std;

void pattern11(int N)
{
  for (int i = 0; i < N; i++)
  {
    int value;
    (i % 2 == 0) ? value = 1 : value = 0;
    // int value = 1 - (i % 2); // it is same as above
    for (int j = 0; j <= i; j++)
    {
      cout << value << " ";
      value = 1 - value;
    }
    cout << endl;
  }
}

int main()
{
  int N;
  cout << "Enter N" << endl;
  cin >> N;
  pattern11(N);

  return 0;
}
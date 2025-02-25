#include <iostream>
using namespace std;

void pattern12(int n)
{
  int space = 2 * (n - 1);
  for (int i = 1; i <= n; i++)
  {
    // first number
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }

    // space
    // for (int j = 1; j <= (2 * n) - (2 * i); j++)
    for (int j = 1; j <= space; j++)
    {
      cout << " ";
    }

    // number after space
    for (int j = i; j > 0; j--)
    {
      cout << j;
    }
    cout << endl;
    space -= 2;
    // this step does not need if we use another for loop for printing space
  }
}

int main()
{
  int N;
  cout << "Enter N" << endl;
  cin >> N;
  pattern12(N);
}
#include <iostream>
using namespace std;

void pattern10(int N)
{
  for (int i = 1; i < 2 * N; i++)
  {
    int stars;
    (i > N) ? stars = (2 * N - i) : stars = i;
    for (int j = 1; j <= stars; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

// clean method
// void pattern10(int N)
// {
//     for (int i = 1; i <= 2 * N - 1; i++)
//     {
//         int stars = min(i, 2 * N - i);
//         for (int j = 1; j <= stars; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

int main()
{
  int N;
  cout << "Enter N" << endl;
  cin >> N;
  pattern10(N);

  return 0;
}
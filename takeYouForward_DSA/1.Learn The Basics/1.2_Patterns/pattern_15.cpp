#include <iostream>
using namespace std;

void pattern15(int N)
{
  for (int i = (N - 1); i >= 0; i--)
  {
    for (char ch = 'A'; ch <= 'A' + i; ch++)
    {
      cout << ch;
    }
    cout << endl;
  }
}

// another method
// void pattern15(int N){
//   for(int i=0; i<N;i++){
//     for(char ch='A'; ch<=(N-i-1);ch++){
//       cout<<ch;
//     }
//     cout<<endl;
//   }
// }

int main()
{
  int N;
  cout << "Enter N" << endl;
  cin >> N;
  pattern15(N);

  return 0;
}
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;

void pattern6(int N)
{
  for (int i = N; i > 0; i--)
  {

    for (int j = i; j > 0; j--)
    {
      cout << i - j + 1 << " ";
    }
    cout << endl;
  }
}

// other methods
// void pattern6(int N){
//   for(int i=1;i<=N;i++){
//    since we have to print from 1, we initilize j with 1
//    n-i+1 will run, how many times we run the inner loop for each row
//     for(int j=1; j<= n-i+1; j++){
//       cout<<j<<" ";
//     }
//     cout<<endl;
//   }
// }

// void pattern6(int N){
//   for(int i=N;i>0;i--){
//    i-j+1 will print the numbers
//     for(int j=N; j>0; j--){
//       cout<<i-j+1<<" ";
//     }
//     cout<<endl;
//   }
// }

int main()
{
  int N;
  cout << "Enter N" << endl;
  cin >> N;
  pattern6(N);
  return 0;
}
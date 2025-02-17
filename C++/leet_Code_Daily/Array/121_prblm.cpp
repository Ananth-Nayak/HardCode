#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

int maxProfit(vector<int> &prices)
{
  int minPrice = INT_MAX, maxProfit = 0;

  for (int price : prices)
  {
    if (price < minPrice)
    {
      minPrice = price; // Update the minimum price
    }
    else
    {
      maxProfit = max(maxProfit, price - minPrice); // Update max profit
    }
  }
  return maxProfit;
}

// Driver Code
int main()
{
  vector<int> prices = {7, 1, 5, 3, 6, 4};
  cout << "Max Profit: " << maxProfit(prices) << endl;
  return 0;
}

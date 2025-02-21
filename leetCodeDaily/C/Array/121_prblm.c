#include <stdio.h>
#include <limits.h> // For INT_MAX

int maxProfit(int *prices, int pricesSize)
{
  int minPrice = INT_MAX; // Store the minimum price seen so far
  int maxProfit = 0;      // Store the maximum profit

  for (int i = 0; i < pricesSize; i++)
  {
    if (prices[i] < minPrice)
    {
      minPrice = prices[i]; // Update the minimum price
    }
    else
    {
      int profit = prices[i] - minPrice; // Calculate profit
      if (profit > maxProfit)
      {
        maxProfit = profit; // Update max profit if higher
      }
    }
  }
  return maxProfit;
}

// Driver Code
int main()
{
  int prices[] = {7, 1, 5, 3, 6, 4};
  int size = sizeof(prices) / sizeof(prices[0]);

  printf("Max Profit: %d\n", maxProfit(prices, size));
  return 0;
}

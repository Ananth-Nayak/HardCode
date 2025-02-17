var maxProfit = function (prices) {
  let minPrice = Infinity;
  let maxProfit = 0;

  for (let price of prices) {
    if (price < minPrice) {
      minPrice = price; // Update minimum price
    } else {
      maxProfit = Math.max(maxProfit, price - minPrice); // Update max profit
    }
  }
  return maxProfit;
};

// Driver Code
let prices = [7, 1, 5, 3, 6, 4];
console.log("Max Profit:", maxProfit(prices));

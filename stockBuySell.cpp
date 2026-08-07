// STOCK BUY AND SELL : PRICES ARR [7,1,5,3,6,4] RETURN MAX PROFIT.

// ON INDEX 0 WE COULDNOT SELL.
// we will sell after when we buy we will get profit.
// buy  day should be diferent than sell day. each index represent day.
// look at the arr when i buy at 7 index 0; can i sell it in future with max profit return NOOOO.

// each element in an arr represent day with price value.  first day 7,  second day 1  traverse the arr as whole there is no day less than 1
// so this is the day when i buy i can sell in future with max profit.

// i buy at 1 i can sell at 5 = 4 profit
// i buy at 1 i can sell at 3 = 2 profit
// i buy at 1 i can sell at 6 = 5 profit
// i buy at 1 i can sell at 4 = 3 profit

// now we will find which one sell day can give us max profit .
// ** we will find first at which day the price is too low. 
// * that will be our buy day.
// * at each itteration we will assume to sell on next day what will be the pprofit 

// if i buy it at 7 index 0  but sell at 1 will get iin loss = 6   dont choose   we need profit.

// ** now decide which day i should have to choose to buuy and to sell;

// ** if i wanted to sell it today i need to check past days when it was at low price.

// ** at each day imagine to sell calculate the max profit at each day of selling then compare which day give m ethe best max profit,

O(n);

class solution {
   public: 
int maxProfit(vactor<int>& prices){
  int maxProfit = 0;
  int bestBuy = prices[0];
  for(int i=1; i<prices.size(); i++){
    if(prices[i] > bestBuy){
      maxProfit = max(maxProfit, prices[i] - bestBuy);   // here maxProfit will get into increase if it is possible.
    }
    bestBuy = min(bestBuy, prices[i]);   // here bestBuy should be update if min between of two found.
  }
  return maxProfit;
}

}


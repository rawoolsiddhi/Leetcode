/*You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 1, profit = 0, min_price = prices[0],  n=prices.size();
        while(i<n){
            if(prices[i] < min_price){
                min_price=prices[i];
            }
            else{
                profit =max(profit, prices[i]-min_price);
            }
            i++;
            }
            return profit;
        }
};

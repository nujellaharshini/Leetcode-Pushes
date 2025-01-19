class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // my first solution, but exceeded time limit

        // my second solution
        int maximum_profit = 0;
        int buy_stock = prices[0];
        for (int i = 1; i < prices.size(); i++){
            if (prices[i] < buy_stock){
                buy_stock = prices[i];
            } else if (prices[i] - buy_stock > maximum_profit){
                maximum_profit = prices[i] - buy_stock;
            }
        }
        return maximum_profit;
    }
};
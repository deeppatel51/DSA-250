class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int bestbuy = INT_MAX;
        for(int i=0; i<prices.size()-1; i++)
        {
            if(prices[i]<prices[i+1])
            {
                profit = profit + (prices[i+1] - prices[i]);
            }
        }
        return profit;
    }
};

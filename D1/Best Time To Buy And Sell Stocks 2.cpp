class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int maxprofit = 0;
        int start = prices[0];
        for(int i = 1; i < prices.size(); i++)
        {
            if(start < prices[i])
            {
                maxprofit = maxprofit + prices[i] - start;
            }
            start = prices[i];
        }
        return maxprofit;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0 ;

        int mini = prices[0];

        for(int i = 1 ; i < prices.size() ; i++)
        {
            int currProfit = prices[i] - mini ;
            profit = max(currProfit,profit);
            mini = min(mini,prices[i]);
        }

        return profit ;
    }
};
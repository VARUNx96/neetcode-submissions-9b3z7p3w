class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxmin = prices[0];
        int profit = 0;
        for(int r = 1;r < prices.size();r++){
            if(maxmin > prices[r]){
                maxmin = prices[r];
            }else{
                profit = max(profit,prices[r] - maxmin);
            }
        }
        return profit;
    }
};

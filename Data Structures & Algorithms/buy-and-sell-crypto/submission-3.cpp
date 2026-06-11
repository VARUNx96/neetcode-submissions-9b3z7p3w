class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int profit = 0;
        for(int i = 1;i < prices.size();i++){
            if(mini > prices[i]){
                mini = prices[i];
            }else{
                profit = max(profit,prices[i] - mini);
            }
        }
        return profit;
    }
};

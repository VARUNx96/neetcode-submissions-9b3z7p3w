class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int miniprice = prices[0];
        for(int i = 1;i < prices.size();i++){
            if(prices[i] < miniprice){
                miniprice = prices[i];
            }else{
                profit = max(profit,prices[i] - miniprice);
            }
        }
        return profit;
    }
};

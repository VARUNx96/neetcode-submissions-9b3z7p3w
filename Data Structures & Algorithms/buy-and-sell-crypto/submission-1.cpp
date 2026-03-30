class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpr = 0;
        int mini = prices[0];
        for(int i = 1;i < prices.size();i++){
            if(prices[i] < mini){
                mini = prices[i];
            }else{
                maxpr = max(maxpr,prices[i] - mini);
            }
        }
        return maxpr;
    }
};

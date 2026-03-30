class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(),0);
        stack<int> indi;
        for(int i = 0;i < temperatures.size();i++){
            while(!indi.empty() && temperatures[i] > temperatures[indi.top()]){
                res[indi.top()] = i - indi.top();
                indi.pop();
            }
            indi.push(i);
        }
        return res;
    }
};

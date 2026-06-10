class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = {};
        int n = nums.size();
        int k = 2;
        int i = 0;
        while(k != 0){
            if(i == n) {
                i = 0;
                k--;
            } 
            if(k==0) break;
            ans.push_back(nums[i]);
            i++;
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> res(s,1);
        for(int i = 1;i < s;i++){
            res[i] = res[i - 1] * nums[i - 1];
        }
        int su = 1;
        for(int i = s - 1;i >= 0;i--){
            res[i] = res[i] * su; 
            su = su * nums[i];
        }
        return res;
    }
};

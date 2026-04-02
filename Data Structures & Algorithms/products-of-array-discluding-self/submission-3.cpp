class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),1);
        int pr = 1;
        for(int i = 0;i < nums.size();i++){
            res[i] = pr;
            pr *= nums[i];
        }
        int su = 1;
        for(int j = nums.size() - 1;j >= 0;j--){
            res[j] *= su;
            su *= nums[j];
        }
        return res;
    }
};

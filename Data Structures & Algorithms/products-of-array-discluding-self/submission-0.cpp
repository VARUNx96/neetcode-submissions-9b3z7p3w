class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int x = nums.size();
        vector<int> res(x,1);

        int pr = 1;
        for(int i = 0;i < x;i++){
            res[i] = pr;
            pr = pr * nums[i];
        }
        int su = 1;
        for(int j = x-1;j >= 0;j--){
            res[j] = res[j] * su;
            su = su * nums[j];
        }

        return res;
    }
};

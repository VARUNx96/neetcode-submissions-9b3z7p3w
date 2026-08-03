class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> pre(s,1);
        for(int i = 1;i < s;i++){
            pre[i] = pre[i - 1] * nums[i - 1];
        }
        vector<int> su(s,1);
        for(int j = s - 2;j >= 0;j--){
            su[j] = su[j + 1] * nums[j + 1]; 
        }
        vector<int> res(s);
        for(int ij = 0; ij < s;ij++){
            res[ij] = pre[ij] * su[ij];
        }
        return res;
    }
};

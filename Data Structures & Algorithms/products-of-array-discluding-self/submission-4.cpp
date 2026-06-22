class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(),1);
        for(int i = 1;i < nums.size();i++){
            prefix[i] = nums[i - 1] * prefix[i - 1]; 
        }
        vector<int> sufix(nums.size(),1);
        for(int j = nums.size() - 2;j >= 0;j--){
            sufix[j] = nums[j + 1] * sufix[j + 1];
        }
        vector<int> res(nums.size());
        for(int ij = 0;ij < nums.size();ij++){
            res[ij] = prefix[ij] * sufix[ij];
        }
        return res;
    }
};

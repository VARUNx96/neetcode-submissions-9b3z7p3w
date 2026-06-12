class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int k = 0;k < nums.size();k++){
            for(int i = k + 1;i < nums.size();i++){
                if(nums[k] > nums[i]){
                    swap(nums[k],nums[i]);
                }
            }
        }
        return nums;
    }
};
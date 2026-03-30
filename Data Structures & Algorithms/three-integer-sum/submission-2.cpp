class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = nums.size() - 1;
        int target = 0;
        for(int i = 0;i < nums.size();i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            l = i + 1;
            r = nums.size() - 1;
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == target){
                    vector<int> in;
                    in.push_back(nums[i]);
                    in.push_back(nums[l]);
                    in.push_back(nums[r]);
                    res.push_back(in);
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l-1])l++;
                    while(l < r && nums[r] == nums[r+1])r--;
                }
                if(sum > target){
                    r--;
                }if(sum < target){
                    l++;
                }
            }
        }
        return res;
    }
};

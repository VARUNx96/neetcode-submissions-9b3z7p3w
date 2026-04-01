class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i = 0;i < nums.size();i++){
            int find1 = target - nums[i];
            if(mp.find(find1) != mp.end()){
                vector<int> res;
                res.push_back(mp[find1]);
                res.push_back(i);
                return res;
            }
            mp[nums[i]] = i;
        }
    }
};

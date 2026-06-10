class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        for(int i = 0;i < nums.size();i++){
            int f = target - nums[i];
            if(mp.find(f) != mp.end()){
                vector<int> res;
                res.push_back(mp[f]);
                res.push_back(i);
                return res;
            }
            mp[nums[i]] = i; 
        }
    }
};

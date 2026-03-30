class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> nums2;
        for(auto it : nums){
            nums2.insert(it);
        }

        if(nums.size() != nums2.size()){
            return true;
        }
        return false;
    }
};
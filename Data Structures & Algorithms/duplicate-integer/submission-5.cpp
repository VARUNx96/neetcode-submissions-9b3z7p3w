class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> nums2;
        for(auto i : nums){
            if(nums2.count(i)){
                return true;
            }
            nums2.insert(i);
        }
        return false;
    }
};
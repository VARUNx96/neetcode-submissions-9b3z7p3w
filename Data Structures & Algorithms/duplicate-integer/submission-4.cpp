class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> nums2;
        for(auto i : nums){
            nums2.insert(i);
        }
        if(nums.size() == nums2.size()){
            return false;
        }else{
            return true;
        }
    }
};
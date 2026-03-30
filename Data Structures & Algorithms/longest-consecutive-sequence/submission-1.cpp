class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums2;
        for(auto i : nums){
            nums2.insert(i);
        }

        int lo = 0;
        for(auto n : nums2){
            if(nums2.count(n - 1) == 0){
                int current = n;
                int len = 1;
                while(nums2.count(current + 1)){
                    current++;
                    len++;
                }
                lo = max(lo,len);
            }
        }
        return lo;
    }

};

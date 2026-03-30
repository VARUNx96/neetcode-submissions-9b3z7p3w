class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> nums2;
        for(auto i : nums){
            nums2.insert(i);
        }

        int m = 0;
        for(auto j = nums2.begin(); j != nums2.end();j++){
            int seqno = *j;
            seqno += 1;
            int ke = 1;
            for(auto k = next(j);k != nums2.end();k++){
                if(*k == seqno){
                    ke++;
                    seqno++;
                }else{
                    break;
                }
            }
            m = max(m,ke);
        }
        return m;
    }
};

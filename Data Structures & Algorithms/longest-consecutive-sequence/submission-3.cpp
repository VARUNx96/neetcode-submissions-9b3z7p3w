class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(auto i : nums){
            s.insert(i);
        }
        int maxlen = 0;
        for(auto j : s){
            int len = 1;
            int temp = j + 1;
            while(s.count(temp)){
                len++;
                temp++;
            }
            maxlen = max(maxlen,len);
        }
        return maxlen;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int maxlen = 0;
        for(auto j : s){
            if(!s.count(j - 1)){
                int len = 1;
                int temp = j + 1;
                while(s.count(temp)){
                    len++;
                    temp++;
                }
                maxlen = max(maxlen,len);
            }
        }
        return maxlen;
  }
};

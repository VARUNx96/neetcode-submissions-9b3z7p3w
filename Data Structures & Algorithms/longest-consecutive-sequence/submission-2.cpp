class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> se;
        for(auto i : nums){
            se.insert(i);
        }
        int le = 0;
        for(auto j : se){
            if(se.count(j - 1) == 0){
                int curr = j;
                int len = 1;
                while(se.count(curr + 1)){
                    curr++;
                    len++;
                }
                le = max(le,len);
            }
            
            
            
        }
        return le;
    }
};

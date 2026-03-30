class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        unordered_set<char> mp;
        int len = 0;
        for(int r = 0;r < s.size();r++){
            while(mp.find(s[r]) != mp.end()){
                mp.erase(s[l]);
                l++;
            }
            mp.insert(s[r]);
            len = max(len,r - l + 1);
        }
        return len;
    }
};

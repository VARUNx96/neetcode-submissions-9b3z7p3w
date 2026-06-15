class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = 0;
        if(haystack.find(needle) != -1){
            ans = haystack.find(needle);
            return ans;
        }
        return -1;
    }
};
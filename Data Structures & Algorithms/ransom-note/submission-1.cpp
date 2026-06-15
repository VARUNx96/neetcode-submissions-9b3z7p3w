class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ans(26,0);
        for(char a :magazine){
            ans[a - 'a']++;
        }
        for(char b :ransomNote){
            ans[b - 'a']--;
            if(ans[b - 'a'] < 0){
                return false;
            }
        }
        return true;
    }
};
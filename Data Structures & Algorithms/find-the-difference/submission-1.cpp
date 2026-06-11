class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> res(26,0);
        for(auto i :s){
            res[i - 'a']++;
        }
        for(auto j :t){
            res[j - 'a']--;
        }
        for(int i = 0;i < 26;i++){
            if(res[i] != 0){
                return i + 'a';
            }
        }
    }
};
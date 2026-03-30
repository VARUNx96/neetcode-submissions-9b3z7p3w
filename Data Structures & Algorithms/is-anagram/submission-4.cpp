class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.size() == t.size()){
            for(int i = 0; i < s.size(); i++){
                mp[s[i]]++;
                mp[t[i]]--;
            }
            for(auto a : mp){
                if(a.second != 0){
                    return false;
                }
            }
        }else{
            return false;
        }
        return true;
    }
};

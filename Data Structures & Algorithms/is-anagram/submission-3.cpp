class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() == t.size()){
            unordered_map<char,int> mp;
            for(int i = 0;i < s.size();i++){
                mp[s[i]]++;
                mp[t[i]]--;
            }

            for(auto i : mp){
                if(i.second != 0){
                    return false;
                }
            }
            return true;
        }else{
            return false;
        }
    }
};

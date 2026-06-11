class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(auto i :s){
            mp[i]++;
        }
        for(auto j :t){
            mp[j]--;
        }
        for(auto r :mp){
            if(r.second != 0){
                return r.first;
            }
        }
        return '\0';
    }
};
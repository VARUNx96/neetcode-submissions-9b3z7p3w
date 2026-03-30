class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp;
        for(auto a : s1){
            mp[a]++;
        }
        int win = s1.size();
        for(int l = 0;l + win <= s2.size();l++){
            unordered_map<char,int> mp1(mp);
            string temp = s2.substr(l,win);
            for(auto j : temp){
                mp1[j]--;
            }
            bool ok = true;
            for(auto n : mp1){
                if(n.second != 0){
                    ok = false;
                    break;
                }
            }
            if(ok){
                return ok;
            }
        }
        return false;
    }
};

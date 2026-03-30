class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto key : strs){
            string it = key;
            sort(key.begin(),key.end());
            mp[key].push_back(it);
        }
        vector<vector<string>> res;
        for(auto r : mp){
            res.push_back(r.second);
        }

        return res;
    }
};

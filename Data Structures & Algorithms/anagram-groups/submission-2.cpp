class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> mp;
        for(auto key : strs){
            string it = key;
            sort(key.begin(),key.end());
            mp[key].push_back(it);
        }
        for(auto a : mp){
            res.push_back(a.second);
        }

        return res;
    }

};

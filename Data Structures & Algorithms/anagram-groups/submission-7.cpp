class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto s :strs){
            vector<int> count(26,0);
            for(char c :s){
                count[c - 'a']++;
            }
            string key = "";
            for(int x :count){
                key = key + "#" + to_string(x);
            }
            mp[key].push_back(s);
        }
        vector<vector<string>> res;
        for(auto j :mp){
            res.push_back(j.second);
        }
        return res;
    }
};

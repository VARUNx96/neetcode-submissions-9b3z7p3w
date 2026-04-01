class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto it : strs){
            int freq[26] = {0};
            for(auto ti : it){
                freq[ti - 'a']++;
            }

            string key = "";
            for(int i = 0;i < 26;i++){
                key += to_string(freq[i] + '#');
            }
            mp[key].push_back(it);
        }
        
        vector<vector<string>> res;
        for(auto n : mp){
            res.push_back(n.second);
        }
        return res;
    }
};

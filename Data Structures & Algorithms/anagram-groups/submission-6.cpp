class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto i :strs){
            string temp = i;
            sort(i.begin(),i.end());
            mp[i].push_back(temp);
        }
        vector<vector<string>> res;
        for(auto j :mp){
            res.push_back(j.second);
        }
        return res;
    }
};

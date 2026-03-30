class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        priority_queue<pair<int,int>> fr;
        for(auto it : mp){
            fr.emplace(it.second,it.first);
        }
        vector<int> res;
        while(k!=0){
            res.push_back(fr.top().second);
            fr.pop();
            k -= 1;
        }
        return res;
    }
};

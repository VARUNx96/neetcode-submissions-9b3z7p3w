class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto ke : nums){
            mp[ke]++;
        }

        priority_queue<pair<int,int>> h;
        for(auto c : mp){
            h.emplace(c.second,c.first);
        }

        vector<int> res;
        while(k!=0){
            res.push_back(h.top().second);
            h.pop();
            k--;
        }
        
        return res;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> mp1;
        for(auto ti : mp){
            mp1.emplace(ti.second,ti.first);
            if(mp1.size() > k){
                mp1.pop();
            }
        }
        vector<int> res;
        while(!mp1.empty()){
            res.push_back(mp1.top().second);
            mp1.pop();
        }
        return res;

    }
};

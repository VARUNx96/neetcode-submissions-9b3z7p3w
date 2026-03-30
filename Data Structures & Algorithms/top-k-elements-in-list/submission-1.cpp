class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> fr;
        for(auto it : mp){
            fr.emplace(it.second,it.first);
            if(fr.size() > k){
                fr.pop();
            }
        }
        vector<int> res;
        while(!fr.empty()){
            res.emplace_back(fr.top().second);
            fr.pop();
        }
        return res;
    }
};

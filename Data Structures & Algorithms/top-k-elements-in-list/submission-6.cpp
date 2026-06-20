class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto i :nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto j :mp){
            pq.emplace(j.second,j.first);
            if(pq.size() > k) pq.pop();
        }
        vector<int> res;
        while(k != 0){
            res.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return res;
    }
};

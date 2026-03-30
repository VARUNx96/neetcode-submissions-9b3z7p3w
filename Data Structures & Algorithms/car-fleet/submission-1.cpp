class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> v;
        int n = speed.size();
        for(int i = 0;i < n;i++){
            double ti = (double)(target - position[i])/speed[i];
            v.push_back({position[i],ti});
        }

        sort(v.begin(),v.end());
        int fleet = 0;
        double lasttime = 0;
        for(int j = n - 1; j >= 0; j--){
            if(v[j].second > lasttime){
                fleet++;
                lasttime = v[j].second;
            }
        }
        return fleet;
    }
};

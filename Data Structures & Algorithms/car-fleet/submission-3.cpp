class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> v;

        for(int i = 0; i < position.size(); i++){
            double t = (target - position[i]) / (double)speed[i];
            v.emplace_back(position[i], t);
        }

        sort(v.begin(), v.end()); // sort by position

        int fleet = 0;
        double lastTime = 0;

        for(int j = v.size() - 1; j >= 0; j--){
            if(v[j].second > lastTime){
                fleet++;
                lastTime = v[j].second;
            }
        }

        return fleet;
    }
};

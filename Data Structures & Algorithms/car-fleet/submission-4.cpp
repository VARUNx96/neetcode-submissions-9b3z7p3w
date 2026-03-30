class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> st;
        int fleet = 0;
        for(int i = 0;i < speed.size();i++){
            double time = (double) (target - position[i]) / speed[i];
            st.emplace_back(position[i],time);
        }
        sort(st.begin(),st.end());
        double lastime = 0;
        for(int j = st.size() - 1;j >= 0;j--){
            if(st[j].second > lastime){
                lastime = st[j].second;
                fleet++;
            }
        }
        return fleet;
    }
};
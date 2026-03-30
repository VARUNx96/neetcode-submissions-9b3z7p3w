class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        vector<int> freq(26,0), freq1(26,0);
        for(auto c : s1){
            freq[c - 'a']++;
        }
        for(int i = 0;i < s2.size();i++){
            freq1[s2[i] - 'a']++;
            if(i >= k){
                freq1[s2[i - k] - 'a']--;
            }
            if(freq == freq1){
                return true;
            }
        }
        return false;
    }
};

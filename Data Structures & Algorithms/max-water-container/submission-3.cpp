class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxA = 0;
        int n = heights.size();
        for(int i = 0;i < n;i++){
            for(int j = i + 1;j < n;j++){
                int temp = min(heights[i],heights[j]) * (j - i);
                maxA = max(maxA,temp);
            }
        }
        return maxA;
    }
};

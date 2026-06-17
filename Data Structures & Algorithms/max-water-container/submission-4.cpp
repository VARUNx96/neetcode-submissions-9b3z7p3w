class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s = 0;
        int e = heights.size() - 1;
        int maxA = 0;
        while(s <= e){
            int temp = min(heights[s],heights[e]) * (e - s);
            maxA = max(maxA,temp);
            if(heights[s] < heights[e]) s++;
            else e--;
        }
        return maxA;
    }
};

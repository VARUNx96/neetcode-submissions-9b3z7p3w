class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> in;
        int maxArea = 0;
        int n = heights.size();
        for(int i = 0;i <= n;i++){
            int curr = (i == n) ? 0:heights[i];
            while(!in.empty() && curr < heights[in.top()]){
                int h = heights[in.top()]; in.pop();
                int w = (in.empty()) ? i:i - in.top() - 1;
                maxArea = max(maxArea,h * w);
            }
            in.push(i);
        }
        return maxArea;
    }
};

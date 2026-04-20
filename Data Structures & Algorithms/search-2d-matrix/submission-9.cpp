class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0;
        int r = m * n - 1;
        while(l <= r){
            int mid = l + (r - l)/2;
            int val = matrix[mid/n][mid%n];
            if(val == target) return true;
            else if(target > val) l = mid + 1;
            else if(target < val) r = mid - 1;
        }
        return false;
    }
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto it : matrix){
            int l = 0;
            int r = it.size() - 1;
            if(it[r] >= target){
                while(l <= r){
                    int mid = l + (r - l)/2;
                    if(it[mid] == target) return true;
                    else if(it[mid] > target) r = mid - 1;
                    else if(it[mid] < target) l = mid + 1;
                }
            }
        }
        return false;
    }
};

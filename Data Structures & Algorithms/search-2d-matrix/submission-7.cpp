class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(auto i : matrix){
            int l = 0, r = i.size() - 1;
            if(i[r] >= target){
                while(l <= r){
                    int mid = l + (r - l)/2;
                    if(i[mid] == target) return true;
                    else if(i[mid] > target) r = mid - 1;
                    else if(i[mid] < target) l = mid + 1;
                }
            }
        }
        return false;
    }
};
